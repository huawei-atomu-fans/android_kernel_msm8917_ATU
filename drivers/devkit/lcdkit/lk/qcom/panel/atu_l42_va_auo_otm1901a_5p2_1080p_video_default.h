/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_

#define _PANEL_ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config atu_l42_va_auo_otm1901a_5p2_1080p_video_default_panel_data = {
        "lcdkit_atu_l42_va_auo_otm1901a_5p2_1080p_video_default", "dsi:0:", 
        "auo_otm1901a_5p2_1080p_video_default", 10, 0, "DISPLAY_1", 
        0, 490020000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution atu_l42_va_auo_otm1901a_5p2_1080p_video_default_panel_res = {
        1080, 1920, 94, 34, 4, 0, 129, 125, 126, 0, 0, 0, 0, 0, 0, 
        0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd0[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd1[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xFF, 0x19, 0x01, 0x01,
   };


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd2[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd3[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xFF, 0x19, 0x01, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd4[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x88, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd5[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xf3, 0x00, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd6[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB0, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd7[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x01, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd8[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB1, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd9[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x01, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd10[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB3, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd11[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x40, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd12[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd13[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xFF, 0xFF, 0xFF, 0xFF,
   };


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd14[] = {
    0x35, 0x01, 0x15, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd15[] = {
    0x53, 0x24, 0x15, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd16[] = {
    0x55, 0x00, 0x15, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd17[] = {
    0x5E, 0x28, 0x15, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd18[] = {
    0x11, 0x00, 0x05, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd19[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_command[] = {
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd0, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd1, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd2, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd3, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd4, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd5, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd6, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd7, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd8, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd9, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd10, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd11, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd12, 0x0a},
{0x8, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd13, 0x0a},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd14, 0x0a},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd15, 0x0a},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd16, 0x0a},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd17, 0x0a},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd18, 0x78},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_on_cmd19, 0x64}
};
#define ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_ON_COMMAND 20


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd atu_l42_va_auo_otm1901a_5p2_1080p_video_default_off_command[] = {
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_off_cmd0, 0x3C},
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_off_cmd1, 0x78}
};
#define ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_OFF_COMMAND 2


static struct command_state atu_l42_va_auo_otm1901a_5p2_1080p_video_default_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_command_panel = {
        1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration atu_l42_va_auo_otm1901a_5p2_1080p_video_default_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t atu_l42_va_auo_otm1901a_5p2_1080p_video_default_timings[]= {
        0x8b, 0x1e, 0x14, 0x00, 0x44, 0x48, 0x18, 0x22, 0x19, 0x03, 0x04, 0x00 
};

static struct panel_timing atu_l42_va_auo_otm1901a_5p2_1080p_video_default_timing_info = {
        0, 4, 0x2C, 0x2B 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence atu_l42_va_auo_otm1901a_5p2_1080p_video_default_reset_seq = {
    { 1, 0, 1, }, { 10, 10, 20, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight atu_l42_va_auo_otm1901a_5p2_1080p_video_default_backlight = {
        1, 40, 4095, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc atu_l42_va_auo_otm1901a_5p2_1080p_video_default_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 3, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int atu_l42_va_auo_otm1901a_5p2_1080p_video_default_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int atu_l42_va_auo_otm1901a_5p2_1080p_video_default_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int atu_l42_va_auo_otm1901a_5p2_1080p_video_default_mipi_signature  = 0xffff;

static const uint32_t atu_l42_va_auo_otm1901a_5p2_1080p_video_default_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config atu_l42_va_auo_otm1901a_5p2_1080p_video_default_panel_platform_config = {
        3, 1, 0, 0, 0, 0, 0x200, 0x20, 0, 99, 0, 60, 0, 0, 0, 124, 
        127, 98, 0, 0, 0, 0, 5500000, 5500000, 0, 0, 0, 0, 0, 1, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_panel_misc_info = {
        0, 0, 1, 0x01, 0x04, 0x01, 0x01, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl atu_l42_va_auo_otm1901a_5p2_1080p_video_default_panel_delay_ctrl = {
        0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 20, 0, 50 
};

static char atu_l42_va_auo_otm1901a_5p2_1080p_video_default_backlight_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd atu_l42_va_auo_otm1901a_5p2_1080p_video_default_backlight_command[] = {
{0x4, atu_l42_va_auo_otm1901a_5p2_1080p_video_default_backlight_cmd0, 0x00}
};
#define ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BACKLIGHT_COMMAND 1


static struct lcd_bias_voltage_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_bias_ic0 = {
"hw_sm5109", 0x3e, 2, 1, 0x0c, 0x00, 0x01, 0x2f, 0x0f, 0x2f, 0x1f, 0x03, 0x03, 0xc3, 0x03, 0x43, 0x43, 0x00, 0x00, 0x00, 0
};
static struct lcd_bias_voltage_info atu_l42_va_auo_otm1901a_5p2_1080p_video_default_bias_ic1 = {
"hw_ocp2131", 0x3e, 2, 1, 0x06, 0x00, 0x01, 0x0f, 0x0f, 0x1f, 0x1f, 0x03, 0x33, 0x33, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0
};

static struct lcd_bias_voltage_info * atu_l42_va_auo_otm1901a_5p2_1080p_video_default_bias_ic_array[] = {
&atu_l42_va_auo_otm1901a_5p2_1080p_video_default_bias_ic0,
&atu_l42_va_auo_otm1901a_5p2_1080p_video_default_bias_ic1
};

#define ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BIAS_IC_ARRAY 2


static struct backlight_ic_info * atu_l42_va_auo_otm1901a_5p2_1080p_video_default_backlight_ic_array[0];
 
#define ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_ATU_L42_VA_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_*/
