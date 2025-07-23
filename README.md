# !!!!!!!!!! WIP, NOT DONE YET !!!!!!!!!! (Ignore the current firmware stuff, haven't committed my version and won't until I'm done editing it for Arduino stuff)
The current status of the mod is as follows:

Estimated completion time: ***August 2nd***. Do not take this as the final time, it may end up delayed. It's chosen quite leniently, but it primarily depends on how quick I can get the rest of my parts ordered and in.

✅ = Finished!

🟨 = Waiting on something

🟦 = Next up (After a wait) or currently working on. Groups of blue are kind of a "Worked on in any order" situation!

⚠️ = Partial success, partial unexpected failure. Details provided.

❌ = Failed. Details provided.

❓ = May not do, just a thought.

For context: Everything like "Check (something)" will be updated with my findings in detail when done!

Here's a progress update on everything I've done so far and have planned, in a sequential order (Last updated 7/23/2025 at around 1:50 AM / 1:50 EST):

✅ Initial bill of materials and concepts for testing on my end (Not shared until proven functional, safe and reliable)

✅ Hotend parts are in!

⚠️ Test the hotend installation process

^ Explanation: ***Don't use --> anything fiberous <-- like exhaust wrap to wrap your hotend in place of the silicone sock!!!!! Just leave it off if you can't source a safe alternative!!!!!*** For your printer's well being and your safety, please don't be like me and wrap your hotend in loose exhaust wrap without knowing that it sheds like a pet and unravels like a spool of filament without sides or tape. My entire printer was covered (Cleanable mostly yet not fully) and the working experience with it sucked, it irritates skin and lungs and potentially eyes if you get extra unlucky. Try to find a safer alternative <ins>like whatever I end up suggesting later in the final BOM</ins>, and if you cannot then it's better to go bare than fiberous and take the big temp hit, and I'm able to vouch for it. It even releases magic smoke when you first heat it, which is perfectly normal and dealable with the advanced filtration unit but is extremely scary if you had no idea that it did that, or saw smoke and panicked and turned off the printer before you remembered about it, like me! **Everything else worked perfectly though, no issues there!**

However: I'm currently testing it without any kind of wrap while I wait on sourcing a safe alternative. Everything worked, just had the above big issue!

^ Update: The hotend, while stationary with the print fan off, cannot go above ~440c with a 65w heater cartridge without insulation. 🟦 Going to research good, suitable insulation methods now!

❌ Make sure the hotend can sustain 500c for at least an hour straight (Everything's rated for it)

^ Explaination: In my case, with a 24v 65w heater cartridge, with the exhaust wrap on (Just don't, see above), the hotend capped around 480c before bottoming out and unable to go higher, until the printer seen this and shutoff, saying to check hotend thermistor and heater wiring for damage due to telling it to get hotter and it staying roughly the same temp. And as said above, without the exhaust wrap or any insulation at all, the same cartridge can only sustain ~440c. If anyone knows how Metacollin did 450c with their MK4 with a *stock* heater, please share!

However: It was perfectly fine at 480c when it was there, just nice and **red hot and left permanently battle scarred!** All normal though! **And I'm fully confident in the parts surviving 500c constant temp if you simply upgrade the heater cartridge or insulation to allow it to be reached. I did not think this would be an issue!** This will be removed entirely once the new hotend insulation arrives, below the next yellow box.

✅ Finish editing the firmware as needed (This will be repeated for awhile, too, until the whole thing's done)

✅ Finish the Arduino sketch -- That took ages! Man I hate USB hosting. 5 days of 10+ hours straight of working on it and it's finally done, with everything non-USB taking a good 30 minutes total. Involves editing the USBHostGiga library and everything!

🟦 Commit the changes here with the ***prototype*** sketch -- Doing now!

🟦 Dry my Sunlu elitePETG that came extraordinarily waterlogged and find a different PETG source (Godawful extrusion, loud bubbling sounds while extruding), always fun!

🟨 Wait on: Heated chamber parts and others to arrive (*NOT* Started yet. Will update here when that happens!)

🟦 Make sure the new hotend insulation allows at least 480c, preferably 500c, and verify reliability there

🟦 Test the chamber parts installation processes (Made very lenient, just have to double check)

🟦 Test reliability of the heating function, ensure nearby parts are unharmed from the hot steel panel (Let heat soak for like, an hour or two, with constant monitoring of motors and LCD)

🟨 Wait on: Everything above to be done and verified

🟦 1st Verification of functionality and reliability (Printing a 10h gcode file on dry mode (No filament that I'm able to source actually takes 500c) with a 500c hotend (If the new insulation with a 65w cartridge allows, if not then the max temp with it), 120c bed and 55c chamber, will include the full temp graph of every probe on the machine throughout the entire thing alongside the used gcode, fully public)

🟦 2nd Verification of functionality and reliability (Printing a mid-large (~5h) Siraya Tech PPA-CF Core print (320c nozzle, 90c bed, 55c chamber) with shared results exactly as the first verification has, alongside pictures of the print)

🟦 Make the Prusa-style assembly guides

🟦 Make the finalized bill of materials (For publishing)

🟨 Wait on: Everything above to be done and verified

🟦 Finalize the firmware if not already

🟦 Finalize the Arduino sketch if not already

❓ [PEEK Mods](https://github.com/Rc8941/Prusa-Firmware-Buddy-HT-Core-One/tree/ht-c1?tab=readme-ov-file#xy-stepper-motor-coldboxes-a-bunchhhh-of-aluminum-parts-etc-to-allow-chamber-temps-beyond-55c-beyond-100c-peek) (I'd never try it in person myself so I'd make it and release the concepts anyways due to costs). I'd love to try and make them, but if I *do* then they'll come quite a while later, after everything else is finished at the earliest. It would have the same QOL (Assembly guides, etc.) as the rest, however! **This is not included in the estimated completion time found above**




# Core One HT (500c) Mod
Are you interested in giving your Prusa Core One some or all of the following?:
1. A hotend capable of sustaining 450c for safety, and 500c with a different heater?
2. A chamber that's thermally insulated for extra temp stability?
3. A chamber with... TRUE ACTIVE HEATING?? No more 40-45c chamber temps throughout a print with a target of 55c (Bed 90c)! Only 55c here!
4. Thanks to [metacollin](https://github.com/metacollin) and their [MK4/S 450c Mod](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp), full use of the Loveboard's 12-bit ADC to get ~0.2c resolution on a PT1000?
5. An... upgraded (480w, 2x stock) power supply?? To run DUAL PSUs?? (Context later, they power seperate things)
6. ...A somewhat corny with likely invalid logic, Prusa-themed keychain for your printer that says "Originally an ORIGINAL PRUSA" printed in the blingiest, highest temp filament you can get your hands on?
7. So, so much more...

ALL with detailed assembly guides inspired by Prusa's own guides?

You're in the right place!

# Before you begin (Words of warning):

## This mod is based around the Core One, nothing else!
Other Buddy printers are technically able to be flashed with this, but will see no temp benefit. Other parts of the firmware are edited to fit the Core One in particular, if you flash this to, for example, a MK4, unexpected and/or unwanted issues may occur. I fully recommend checking out [metacollin's MK4/S High Temp firmware](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp) if you want the 12-bit ADC mod anyways (Only for Nextruder printers / printers with the Loveboard, don't know about the XL for example), as 1. they made it work (Go give them some love!), and 2. they actually know what they're doing digging deep into the firmware (And Marlin) like they've done, and tweak far less things than what is tweaked in this mod, so their version would be more stable for your use case.

## This mod, on the hardware side, is rather big (In scope).
This isn't meant to be a small upgrade to allow it to work at these temps, it's a full on overhaul to the 1. Nextruder hotend assembly and 2. the chamber itself. 
 
As a result, if you upgrade *everything* offered, it is rather costly. Possibly prohibitively costly. As of when I bought *my* stuff, the actual hardware mods costed ~$500-$550 USD, and then I got around $30/1kg in polycarbonate for printed chamber parts, a 1kg spool of Siraya Tech's PPA-CF Core (My favorite, it's why this mod exists) for $80 off Amazon, and a variety of parts from PCBWay in SLM aluminum that totaled to around $40. 

To save on costs, you can leave out the chamber enhancements (Or other enhancements) if wanted, the firmware actually doesn't even know the chamber heater exists (You'll learn why in a moment).

This mod is designed for being borderline overkill while 1. keeping every change fully justifiable, 2. keeping unnecessary costs down or gone entirely, and 3. exchanging every dollar (Or whatever your local currency is) you put into it into performance, reliability and safety. If that's what you're looking for, *you're still in the right place!* If not, I'm sure you can mod your Nextruder in the same way [metacollin does in their MK4/S 450c mod](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp), and download the alternate version of this firmware to have it do nothing but up nozzle temps on your printer, and use the 12-bit ADC. No fluff, just higher temps. If you *want* that extra fluff, then look below! And if you want *some* but not *all*, feel perfectly free to mix and match!

# The Actual Mod:
To give context, here's everything this mod will do for/to your printer, sorted neatly into groups:

## Hotend mod (A full upgrade of every part of it):
1. Upgrade the hotend thermistor to a PT1000 capable of at least 500c
2. Upgrade the hotend heater cartridge to a higher wattage (65w), rated for at-least-500c cartridge for more reliability, capability and heat speed
3. Upgrade the nozzle to an adapter+V6 setup: To my knowledge, no readily available, Nextruder-native nozzles are rated past 300c. The adapter's just a hunk of metal, and some V6s are definitely rated to and past what we need!
4. Upgrade the aluminum heaterblock to a plated copper one because the temps soften the aluminum
- The silicone sock can't take these temps! Let's not remove it and call it a day, though....
5. Replace the silicone sock with a yet-to-be-decided, non-fiberous material. If one exists that's rated for at least 500c, preferably 600c+. Worst case scenario? No sock!

## Internal chamber mod:
1. Seal all the micro-gaps within the Core One's frame
2. Insulate the vast majority of walls with heat reflective wraps, helps with heat retention inside the chamber and encourages it to bounce around in the air instead of soaking into the steel walls (In theory?).
3. Upgrade the sealing on the door frame (Thicker foam, stronger magnets). Will make it a little harder to open, but seals wonders better, especially if you're like me and assembled the handle just slightly off where the door never hits the stock sealing foam!

## Heated chamber mod:
1. Add a 200mm^2 (In my case), 24v 200w heating pad to the underside of the printer's bottom steel plate, with an integrated 100k NTC thermistor
2. Insulate the pad with a ceramic fiber blanket to prevent heat going the wrong way, reducing heat transfer to the chamber and sending stray heat towards the extra electronics, which are mounted under the printer.
3. Add an *Arduino Giga* (USB Hosting) to the bottom of your printer! It will converse with the printer to retrieve chamber temp/target temp data.
4. This Giga will use a 5v relay, and the stock PSU (once the printer PSU is upgraded, take the stock one and use it here), and data from the pad's thermistor, to turn on or off the heating of the pad. By default, the never-heat-ever temp is 150c on the pad as my pad's rated for 180c.
5. Resultantly, due to the thermistor, a breadboard has appeared on the printer! A breadboard!
6. The mounts where the bed linear rails go into the bottom plate, and the Z motor mounts, are edited and are going to be sent to PCBWay for SLM printing aluminum unless you have an alternative. Don't worry about galvanic corrosion, it's handled!



With the plausible possibility of (In the future)...
## XY Stepper motor coldboxes, a bunchhhh of aluminum parts, etc. to allow chamber temps beyond 55c, beyond 100c, *PEEK??*
It's a thought I've had in the back of my mind for a while now, and I'd love to act upon it some day after the main mods are finalized and perfected. I'd love to hear if anyone else feels the same!







# Final, Extra Info:

### Requirements for compiling/building the firmware yourself
- Python 3.8 or newer, use 3.10.11 if possible, newer may remove needed features and fail to compile.
- The steps are the exact same as with the official firmware.

## Credits

Official Firmware Credits:
- [Marlin](https://marlinfw.org/) - 3D printing core driver
- [Klipper](https://www.klipper3d.org/) - input shaper code based on Klipper

Credits for this fork:
- [12-Bit ADC edits](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp) - Taken from the MK4 High Temp mod by [metacollin](https://github.com/metacollin)
