# Kirby Samurai Mini Game

![kirby_gameplay](https://user-images.githubusercontent.com/21044999/59083258-e9876980-88b3-11e9-88fe-398de4ee7191.gif)

Based on Super Nintendo game Kirby Super Star's mini game Kirby Samurai.

Original [gameplay](https://www.youtube.com/watch?v=3BeYJQrtT04). 

## Instructions

### Setup

Install all the depedencies using

```
esy install
```

Build and run the application:

```
esy run
```

### Goal

- [x] Game start state
- [ ] Pre-duel game state
- [ ] Duel game state
- [x] Start game with spacebar key event
- [ ] Interval of 3-5 seconds to trigger the duel
- [ ] Player A presses A
- [ ] Player B presses '
- [ ] Determine winner
- [ ] Restart game with spacebar key event

### References/Help

* Revery Component Model
* For implementing interval reference [Revery_Core.Tick](https://www.outrunlabs.com/revery/api/revery/revery_core/tick/) and [Revery_Core.Time](https://www.outrunlabs.com/revery/api/revery/revery_core/time/)
* For generating random number reference [Random](https://caml.inria.fr/pub/docs/manual-ocaml/libref/Random.html) 

### Stretch Goal

- [ ] Implement sprites intead of frames to implement richer animations
- [ ] Record the reaction time of the winner
- [ ] Implement multiple rounds 
- [ ] Display stats at the end

If you need resource for implementing sprites or more characters you can download it [here](https://ganadaramabasa.s3-us-west-2.amazonaws.com/presentation-reasonml-assets/kirby-samurai-sprites.png).