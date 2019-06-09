open Revery;
open Revery.UI;

let appStyle =
  Style.[
    position(`Absolute),
    justifyContent(`Center),
    alignItems(`Center),
    bottom(0),
    top(0),
    left(0),
    right(0),
    backgroundColor(Colors.black)
  ];

let init = app => {
  let window = App.createWindow(app, "Kirby Samurai");
  let element = 
    <View style=appStyle>
      <KirbySamurai />      
    </View>;

  let _ = UI.start(window, element);
}

App.start(init);
      


