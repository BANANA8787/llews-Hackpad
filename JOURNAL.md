 20 jul Monday: did some planning

I have planned out the Hackpad.


I spent my time today planning out what I want to do. I don't have a piece of paper I wrote 
stuff down on, as I just kind of looked around at the different Hackpads and such to get some ideas. I do have a little drawing though.
<img width="4080" height="3072" alt="IMG20260725223048" src="https://github.com/user-attachments/assets/3d3c17ca-35c9-4785-8b36-afd2b4829a80" />
What I ended up with was something where the keys have a plate underneath them, but the right side of the pcb is exposed to the air. Taking some inspo from the Hackpad shown in the adding more parts section under the oled display, I have put all the diodes in a box in the exposed area. I thought about adding a screen, but I think that would be a bit too complicated for my first time designing a board, and I can always add them later. I am thinking of using it as a numpad maybe, and using the rotary encoder for volume

2 hours

22 jul Wednesday: started Kicad

I have completed the circuit and started on routing the pcb 

I have learnt a bit about keyboard design today, especially matrix wiring. It is pretty interesting, though I had seen it before on keypads. As I'm doing nine keys, it reduced the amount of inputs by 3, which is a decent amount.
<img width="681" height="353" alt="circuit" src="https://github.com/user-attachments/assets/08d3e613-d921-46b9-87ec-d89016077259" />
I spent a lot of the time today going around the Hackpad slack seeing what other people had done, as it gave me some examples of where people had wired their components too. I also spent a while checking out the resources and tips section of Hackpad.hackclub as it gave a decent amount of reference material. I have decided to not wire up the switch in the rotary encoder as i dont have a use for it. Hopefully i dont regret that choice. Also, I keep seeing people using little tags at the end of columns and rows and then the same named tags on pins of the chip, I assume those are instead of connecting it with wires to make it look better. I have no idea how to do that though, and I've finished it already anyway.

Hours worked : 4

23 jul Thursday: finished Kicad

I have finally finished routing the pcb in kicad!

I have spent today routing the whole pcb in kicad. I once again spent a lot of time going through the #Hackpad slack to see what other people had done. Arranging the parts wasn't that hard, though I did change their position a couple times. The routing took a loooong time though. Mainly it was just connecting up the diodes to the switches that was hard, because so many wires had to go to one place cause I wanted to put them in the exposed bit. Also because of which diodes connected to the switches, they all had to go through a little section at the bottom, which means I had to make a little highway at the bottom as you see in this picture.

<img width="749" height="493" alt="PCB" src="https://github.com/user-attachments/assets/3c95ede7-91de-4901-910e-b1f617df7bc0" />

Other than that I didn't really do much else. Onto the case!

Hours worked: 5

25 jul Saturday: started fusion

I have gotten halfway through designing the case in fusion 360. 

To start off, I made a rectangle for the base. This was decently easy, as I just measured the width and height of the pcb in Kicad and made a rectangle based on those sizes. I then made another rectangle, and spent a while adjusting its size so it was 10mm bigger on every side than the original rectangle. After extruding it though, I realised that I wanted to change my design a bit. So instead of having two holes in the pcb and two in the case, I used Logan Peterson's Hackpad in the gallery as a bit of inspiration and put holes for all the screws in the pcb. I also added some 5mm fillets on the pcb, so I had to figure out how to adjust the case to match. 

<img width="740" height="502" alt="sketchPic" src="https://github.com/user-attachments/assets/91af882a-6ad6-4faf-9930-7e6ce754c6e6" />

This did mean I had to redo the case though, which took a bit. Luckily, this time I found the offset plane tool, which made making the outside rectangle a lot quicker and easier. Doesn't mean the rest was easy though. At one point I even tried importing the Kicad pcb into fusion360 to base the case off of that, but that turned out to not even be that useful. 

<img width="784" height="472" alt="PCBPic" src="https://github.com/user-attachments/assets/49416b28-7cde-4d19-941c-4c7399009cc3" />

I then once again extruded the case upwards, and now I just have to figure out how I want the top of the case attached.

<img width="764" height="497" alt="caseImage" src="https://github.com/user-attachments/assets/70e0e81b-97ed-4865-b8e2-5efca413b4f8" />

Hours worked: 6

26 jul sunday

I have fiiinally finished modelling using fusion360

It took a while, but I've finished the case. I started off by extending the bottom case up slightly. Not by much but just to make sure the pcb would fit. 

<img width="761" height="422" alt="caseBottom" src="https://github.com/user-attachments/assets/bf8f2658-e674-4849-a262-82e37bd242ed" />

I then started out on the top. I copied the base sketch up to the top of the case, and imported the DXF of the 3*3 plates. I then spent a LONG time shouting around the DXF, especially because the keys on my pcb were slightly closer than the holes in the DXF were, so I spent a while moving the squares around. This is also when I found selection groups, and thank god I did. It made selecting the squares so much easier as I kept selecting the other parts of the sketch and having to unselect them which took ages. He took a lot of going back and forth with the kicad pcb design measuring the distances from keys to the edge of the pcb. But after a while, I had the sketch. Oh yeah I also added some stuff poking in on the corners for the screws to screw up into. My plan is for the screws to go up through the bottom of the case, through the holes in the pcb, and into some headset inserts in the bottom of the top bit of the case.

<img width="651" height="370" alt="sketchAndCase2" src="https://github.com/user-attachments/assets/668ba04a-24ff-4940-af2e-61d867d5e1d2" />

All I did after that was connect the grid to the outer section of the sketch, and then it was extruding time.
I then just extruded it up by about 2mm, making the total height 12mm. I made sure to not connect the top section with the bottom section, so I now had two bodies. The base:

<img width="761" height="422" alt="caseBottom" src="https://github.com/user-attachments/assets/bf8f2658-e674-4849-a262-82e37bd242ed" />

And the top:

<img width="746" height="371" alt="caseTop" src="https://github.com/user-attachments/assets/0bb00c43-e26e-4ae2-a647-8dfc6bb8f93c" />

It does look a bit lopsided with the thinness of the edges, but hopefully when the pcb is there it will look a bit better. This is what the holes on the top case look like too:

<img width="785" height="509" alt="CaseTopUnder" src="https://github.com/user-attachments/assets/a62ad44e-20bf-4163-ac97-21de45f61f3a" />

That's all I did today, time to move on to coding!

Hours worked: 5

27 jul monday

I'm partway through redoing the case.

I was checking the submitting thing to see what to do for a github to put stuff in, when I saw that the pcb has to be at max 100 x 100mm. Annoyingly, my pcb was 104mm in length. I've spent some time reshuffling some of the stuff on the pcb and now it is less than 100mm on all sides, but I've
 got to change the case. So I started trying to just adjust the case that I already had. But with how fusion360 works with everything being related to everything else, it wasn't really working. So I've started on the case anew. Luckily it isn't very hard because I already know all the techniques and tools so I'm just copying everything but the width and length over to the new one. So far ive got the bottom of the case done, ill do the top next.

Hours worked 3

28 jul tuesday:

I've refinished my Hackpad case. 

This was a lot quicker than last time, as I was basically just copying stuff over. I don't really have any pictures to show, as it just looks the same as the original. I have seen that the stardance mission now goes to an actual mission, hopefully i can still use these journals instead of screen recording as proof of the hours.

Time to code! Hopefully this time it actually is!

Hours worked: 1


