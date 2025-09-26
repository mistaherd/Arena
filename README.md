This repo is for arena allocation in c , An arena is a enclosed area for the presentation 
The idea is the have small block's of memory enclosed in a large so that we can only all it once in a c program.
The issuse with is that sometimes we want to free that piease of memory my propsal is that we make a lut to track where these small blocks are  once we  "free the small block " by passing the  the ptr wich will move the other block up to where you last allocated in the arena (maybe if it really need to free that process we could just make a subarena and free that when times i have yet to test this!! ) and allow the user to display the arena in memory in the following format:

----------------------------------------
|       Heap allocated Arena x bytes   |
|--------------------------------------|
|       Block 1 x bytes                |
|--------------------------------------|
|       Block etc x bytes              |
----------------------------------------

