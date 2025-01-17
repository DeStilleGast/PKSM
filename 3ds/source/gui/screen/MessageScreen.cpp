/*
 *   This file is part of PKSM
 *   Copyright (C) 2016-2019 Bernardo Giordano, Admiral Fish, piepie62
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
 *       * Requiring preservation of specified reasonable legal notices or
 *         author attributions in that material or in the Appropriate Legal
 *         Notices displayed by works containing it.
 *       * Prohibiting misrepresentation of the origin of that material,
 *         or requiring that modified versions of such material be marked in
 *         reasonable ways as different from the original version.
 */

#include "MessageScreen.hpp"
#include "gui.hpp"
#include "i18n.hpp"

void MessageScreen::drawTop() const
{
    Gui::sprite(ui_sheet_part_info_top_idx, 0, 0);
    auto parsed   = Gui::parseText(message, FONT_SIZE_15);
    float lineMod = fontGetInfo(nullptr)->lineFeed * FONT_SIZE_15;

    Gui::text(parsed, 200, 110, FONT_SIZE_15, FONT_SIZE_15, PKSM_Color(255, 255, 255, Gui::transparencyWaver()), TextPosX::CENTER, TextPosY::CENTER);

    float continueY = 110 + (lineMod / 2) * parsed->lines();
    Gui::text(i18n::localize(lang, "CONTINUE"), 200, continueY + 3, FONT_SIZE_11, COLOR_WHITE, TextPosX::CENTER, TextPosY::TOP);
}

void MessageScreen::drawBottom() const
{
    Gui::sprite(ui_sheet_part_info_bottom_idx, 0, 0);
}

void MessageScreen::update(touchPosition* touch)
{
    if (hidKeysDown() & KEY_A)
    {
        done = true;
    }
}
