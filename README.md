<p align="center"><img src="https://raw.githubusercontent.com/FlagBrew/PKSM/master/assets/banner.png" /></p>
<p align="center"><img src="https://img.shields.io/badge/License-GPLv3-blue.svg" /></p>
<p align="center"><img src="https://drone.fm1337.com/api/badges/FlagBrew/PKSM/status.svg" /></p>

Multipurpose and portable save manager for generations IV to VII, programmed in
C++.

* Supports original cartridges and digital copies of games from DPPt to LGPE
* Allows on-the-fly modifications to all of your data
* Allows internal and resizable offline storage to store your Pokémon
* Capable of running custom scripts to allow injection of arbitrary data into
  your saves
* Interfaces with multiple ad-hoc programs running on your computer, web browser
  or smartphone
* Capable of scanning QR codes to inject both .pkx files or event wondercards
* Contains an offline wondercard database to get events from old distributions

**We do not support or condone cheating at the expense of others. Do not use
significantly edited Pokémon in battle or in trades with those who are unaware
edited Pokémon are in use.**

## Screenshots

![](https://i.imgur.com/HeRfuyl.png) ![](https://i.imgur.com/1GQsSbl.png)
![](https://i.imgur.com/2nePNbY.png) ![](https://i.imgur.com/nLSknIq.png)
![](https://i.imgur.com/2G7zbBH.png) ![](https://i.imgur.com/KPMIoHa.png)
![](https://i.imgur.com/LKnAcHI.png) ![](https://i.imgur.com/NaWoUIa.png)
![](https://i.imgur.com/0VSTcgA.png) ![](https://i.imgur.com/0g7O9y7.png)

## Documentation

Please refer to the [PKSM wiki](https://github.com/FlagBrew/PKSM/wiki) for
detailed documentation.

## Installation

This software works on CFW and Rosalina-based Homebrew Launchers. An internet
connection is required when first launching PKSM.

| Entrypoint | Instructions |
| :--------: | :----------- |
| CFW | Install the `PKSM.cia` file provided in the release page with your favourite installer. You can now launch the application from the Home Menu |
| Rosalina HBL | Copy the `PKSM.3dsx` file provided in the release page into your SD card. You can now launch PKSM from a [Rosalina-based Homebrew Launcher](https://github.com/fincs/new-hbmenu) |

Initial launch will require your system to be connected to the internet. This is
needed to download the additional assets required for the application to launch.
If your system is not connected to the internet, PKSM will return back to your
menu.

## Applications compatible with PKSM

* **[PKHeX](https://github.com/kwsch/PKHeX)**: Generates .pk7, .pk6, .wc7, .wc6
  QR codes scannable from PKSM. Runs on PC.
* **[MysteryGiftBot](https://twitter.com/mysterygiftbot)**: Generates .wc7 QR
  codes scannable from PKSM. Runs on Twitter.
* **[PKSM-Scripts](https://github.com/FlagBrew/PKSM-Scripts)**: a toolkit to
  develop and compile .pksm and .c scripts.
* **[The GPSS](https://flagbrew.org/gpss)**: an online Pokémon sharing platform

## Working path

* Additional assets are located at `/3ds/PKSM/assets`
* Automatic save backups are located at `/3ds/PKSM/backups`
* Extra storage data is located at `/3ds/PKSM/banks`
* .pkx and .wcx dumps are located in `/3ds/PKSM/dumps`
* Custom scripts are located in `/3ds/PKSM/scripts`
* Custom background songs are located in `/3ds/PKSM/songs`

## Troubleshooting

Before submitting an issue, have a look through the issues page, because your
question may have already been answered in the past.

Please only submit consistent issues (submitting your environment and which
version of PKSM you're running, for example). Duplicate issues will be closed
without any reply.

We'll not reply to issues related to versions of PKSM different from the latest
stable release currently available.

You can get real-time support by joining FlagBrew's discord server.

[![Discord](https://discordapp.com/api/guilds/278222834633801728/widget.png?style=banner3&time-)](https://discord.gg/bGKEyfY)

## Building

PKSM has the following dependencies:

- The latest version of ctrulib, citro3d, citro2d, 3ds-curl, 3ds-pkg-config, 3ds-bzip2, 3ds-mpg123, 3dstools, and tex3ds with
  their dependancies. All of these should be installed from [devKitPro
  pacman](https://devkitpro.org/wiki/devkitPro_pacman).
- Your system's pkg-config
- [3dstool](https://github.com/dnasdw/3dstool/releases),
  [bannertool](https://github.com/Steveice10/bannertool/releases) and
  [makerom](https://github.com/profi200/Project_CTR/releases), if you want to be
  able to compile a `.cia` build of PKSM.
- The latest version of Python 3.x and the GitPython library.
- node.js, [pandoc](https://pandoc.org/), [wkhtmltopdf](https://wkhtmltopdf.org)
  and
  [github-wikito-converter](https://www.npmjs.com/package/github-wikito-converter)
  to be able to build the HTML documentation.

To compile, clone the repository with all submodules (`git clone --recursive
https://github.com/FlagBrew/PKSM.git` if initially cloning, `git submodule init`
and `git submodule update` if running from an existing clone) and run `make
all`.

## Credits

* [piepie62](https://github.com/piepie62) and
  [Admiral-Fish](https://github.com/Admiral-Fish) for the immense amount of
  dedication they put into the project
* dsoldier for the gorgeous graphic work
* [SpiredMoth](https://github.com/SpiredMoth),
  [trainboy2019](https://github.com/trainboy2019) and all the scripters for
  making PKSM-Scripts great
* [Archit Date](https://github.com/architdate) for CoreConsole
* [Allen](https://github.com/FM1337) for the GPSS
* The whole [FlagBrew](https://github.com/FlagBrew) team for collaborating with
  us
* [kwsch](https://github.com/kwsch) and [SciresM](https://github.com/SciresM)
  for PKHeX, memecrypto and documentation
* [fincs](https://github.com/fincs) and
  [WinterMute](https://github.com/WinterMute) for citro2d and devkitARM
* [kamronbatman](https://github.com/kamronbatman) and ProjectPokemon.org for
  EventsGallery
* Methylnaltrexone, Y0ndaime, Gudf, forthepokemans, CaptainBarnaklez, pass0418
  for the translations
* Subject21_J and all the submitters for PKSM's icon
* [Mewmore](https://www.youtube.com/user/Mewmore) for the default background
  music
* Allen, piepie62, SpiredMoth and all the contributors for the documentation
* All the past contributors to the project
* All the patrons and the huge amount of supporters that this project has gained
  over the year

Without you, this project wouldn't have existed. Thank you.

## Support us

If you appreciate our work, you can support us on
[Patreon](https://www.patreon.com/FlagBrew)!

## License

This project is licensed under the GNU GPLv3. Additional Terms 7.b and 7.c of
GPLv3 apply to this. See
[LICENSE](https://github.com/FlagBrew/PKSM/blob/master/LICENSE) for details.

Visit us on [flagbrew.org](https://flagbrew.org/)!
