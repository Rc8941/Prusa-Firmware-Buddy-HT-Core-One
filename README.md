# !!!!!!!!!! WIP, NOT DONE YET !!!!!!!!!!
# Core One HT (450c) Mod
Are you interested in giving your Prusa Core One some or all of the following?:
1. A hotend capable of sustaining 450c?
2. A chamber that's thermally insulated for extra temp stability?
3. A chamber with... TRUE ACTIVE HEATING?? No more 40-45c chamber temps throughout a print with a target of 55c (Bed 90c)! Only 55c here!
4. Thanks to [metacollin](https://github.com/metacollin) and their [MK4/S 450c Mod](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp), full use of the Loveboard's 12-bit ADC to get ~0.2c resolution on a PT1000?
5. An... upgraded (480w, 2x stock) power supply?? To run DUAL PSUs?? (Context later, they power seperate things)
6. So, so much more...
7. ...A somewhat corny with likely invalid logic, Prusa-themed keychain for your printer that says "Originally an ORIGINAL PRUSA" printed in the blingiest, highest temp filament you can get your hands on?
ALL with detailed assembly guides inspired by Prusa's own assemblies?
You're in the right place!

# Before you begin (Words of warning):

## This mod is based around the Core One, nothing else!
Other Buddy printers are technically able to be flashed with this, but will see no temp benefit. Other parts of the firmware are edited to fit the Core One in particular, if you flash this to, for example, a MK4, unexpected and/or unwanted issues may occur. I fully recommend checking out [metacollin's MK4/S High Temp firmware](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp) if you want the 12-bit ADC mod anyways (Only for Nextruder printers / printers with the Loveboard, don't know about the XL for example), as 1. they made it work (Go give them some love!), and 2. they actually know what they're doing digging deep into the firmware (And Marlin) like they've done, and tweak far less things than what is tweaked in this mod.

## This mod, on the hardware side, is rather big (In scope).
This isn't meant to be a small upgrade to allow it to work at these temps, it's a full on overhaul to the 1. Nextruder hotend assembly and 2. the chamber itself. 

To save on costs, you can leave out the chamber enhancements if wanted, the firmware actually doesn't even know the chamber heater exists (You'll learn why in a moment). 
As a result, if you upgrade *everything* offered, it is rather costly. Possibly prohibitively costly. As of when I bought *my* stuff, the actual hardware mods costed ~$500-$550 USD, and then I got around $30/1kg in polycarbonate for printed chamber parts, a 1kg spool of Siraya Tech's PPA-CF Core (My favorite, it's why this mod exists) for $80 off Amazon, and a variety of parts from PCBWay in SLM aluminum that totaled to around $40. 

This isn't the most budget friendly of builds, it's designed for being borderline overkill while 1. keeping everything fully justifiable, 2. keeping unneccecary costs down or gone entirely, and 3. exchanging every dollar (Or whatever your local currency is) you put into it into performance, reliability and safety. If that's what you're looking for, you're still in the right place! If not, I'm sure you can mod your Nextruder in the same way [metacollin does in their MK4/S 450c mod](https://github.com/metacollin/Prusa-Firmware-Buddy/tree/mc_high_temp), and download the alternate version of this firmware to have it do nothing but up nozzle temps on your printer, and use the 12-bit ADC. No fluff, just higher temps. If you *want* that extra fluff, then look below! And if you want *some* but not *all*, feel perfectly free to mix and match!

# The Actual Mod:
To give context, here's everything this mod will do for/to your printer, sorted neatly into groups:

## Hotend mod (A full upgrade of every part of it):
1. Upgrade the hotend thermistor to a PT1000
2. Upgrade the hotend heater cartridge to a higher wattage, rated for higher temps one for more reliability and heat speed
3. Upgrade the nozzle to an adapter+V6 setup: To my knowledge, no readily available, Nextruder-native nozzles are rated past 300c. The adapter's just a hunk of metal, and some V6s are definitely rated to and past what we need!
4. Upgrade the aluminum heaterblock to a plated copper one because the temps soften the aluminum
- The silicone sock can't take these temps! Let's not remove it and call it a day, though....
5. Replace the silicone sock with cut exhaust wrap rated for over 1000c, held in place by steel zip ties rated for about 1200c. Same function (Air blocking, insulation), higher temp rating!

## Internal chamber mod:
1. Seal all the micro-gaps within the Core One's frame
2. Insulate the vast majority of walls with heat reflective wraps, helps with heat retention inside the chamber and encourages it to bounce around in the air instead of soaking into the steel walls (In theory?).
3. Upgrade the sealing on the door frame (Thicker foam, stronger magnets). Will make it a little harder to open, but seals wonders better, especially if you're like me and assembled the handle just slightly off where the door never hits the stock sealing foam!

## Heated chamber mod:
1. Add a 200mm^2 (In my case), 24v 200w heating pad to the underside of the printer's bottom steel plate, with an integrated 100k NTC thermistor
2. Insulate the pad with a ceramic fiber blanket
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
