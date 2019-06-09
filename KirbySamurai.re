open Revery;
open Revery_Core;
open Revery.UI;
open Revery_UI_Components;

type t = 
  | Stop
  | PreDuel 
  | Duel;

type state = {
  gameState: t,
};

type action =
  | SetGameState(t);

let reducer = (action, state) =>
  switch(action) {
  | SetGameState(newState) => { gameState: newState }
  };

let initialState ={
  gameState: Stop
};

let gameStyle = 
  Style.[
    justifyContent(`Center),
    alignItems(`Center),
    width(600),
    height(450),
  ];

let textStyle = 
  Style.[
    color(Colors.black),
    fontFamily("Roboto-Regular.ttf"),
    fontSize(20),
  ];

let component = React.component("KirbySamurai");

let createElement = (~children as _, ()) => 
  component(hooks => {
    let (state, dispatch, hooks) =
      React.Hooks.reducer(
        initialState,
        reducer,
        hooks
      );

    (hooks,
     switch(state.gameState) {
     | Stop => 
       <View 
        ref={r => Focus.focus(r)}
        style=gameStyle
        onKeyDown=((event: NodeEvents.keyEventParams) => {
          //key event
          let key = event.key |> Key.toString;
          //press spacebar to start game
          if(key == " ") {
            dispatch(SetGameState(PreDuel)) 
          }
        })
        >
          <Image src="start.png" width=600 height=450 />
        </View>
      | PreDuel =>
        <View style=gameStyle>
          <Image
            src="frame1.png"
            width=600
            height=450
          />
        </View>
      //_ is wild card case. replace is with Duel
      | _ => <View />
     }
      
    )
  });



