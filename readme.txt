What Is This?

This mod adds the ability to place Large Tents on a player's back like a backpack.

The Large Tent Backpack is a vanilla item in the game files but it hasn't been implemented yet - all I've done is create a script that adds the functionality.

Note For Server Owners:

The code in the vanilla game files appears to add an action to "repack" the Large Tent into a backpack, but when I tried to implement that code I ran into a visual issue with the tent backpack. 

When you place the vanilla tent backpack into your hands the backpack remains on the player's back even though it's in the player's hands and it looks strange, and due to my inexperience with working with DayZ's 3D models I abandoned my attempt to fix it.

Instead, the way this mod works is you simply drag the tent straight onto the player's back and my mod will automatically convert the tent into a bag, and when you take the bag off it will convert it back into a tent. It will transfer all item properties as well (weight, damage, wetness etc).

Be aware there may be bugs with this, I have no idea why the tent backpack has not been properly implemented by the DayZ devs yet, maybe there are some unfinished or unresolved issues with the backpack model and so I can't guarantee that there won't be problems with this mod. However, in my own testing on my own live servers over the past few days it appears to work just fine.

Installation Instructions:

Install this mod like any other mod - copy it into your server's root directory, add it to your launch parameters, and make sure to copy the .bikey into your server keys.

Don't forget to add the types.xml entry if you don't want the tent bag to despawn on restarts or when there are no players around.

This mod must be installed on both the server & client.

Repack & Source Code:

You can repack this mod if you like, and do anything else you want with it for that matter. The source code is on my GitHub at www.zenarchist.io

Enjoy!