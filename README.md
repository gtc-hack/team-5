# team-5
## Arduino Robot Code

### Implementation of a Sentinal Mode Detector

#### Detect target - Stationery robot, moving target

#### After detection of target's movement (some audio/visual indication), target must stop moving.

1) The target must move across the robot's PIR sensor range and stop when the robot detects the movement.

2) The robot must determine the target's specific location (relative to the front of the robot) This can be 
achieved by the robot moving in small rotational increments in both directions until the edges of detection has been
determined and then rotate to half way between these two limits. The robot should now be pointing directly at the targe.


