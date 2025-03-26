//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("Sawyer"),
#line 86
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 87
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 89
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 91
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 93
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 92
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 94
    [TRAINER_OC_EASTFORD_MAPLE] =
    {
#line 95
        .trainerName = _("Maple"),
#line 96
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 97
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 98
F_TRAINER_FEMALE | 
#line 99
            TRAINER_ENCOUNTER_MUSIC_MAY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 101
            .nickname = COMPOUND_STRING("Artoria"),
#line 101
            .species = SPECIES_SWABLU,
#line 101
            .gender = TRAINER_MON_FEMALE,
#line 103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 102
            .lvl = 4,
#line 104
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 106
    [TRAINER_OC_ROUTE1_IAN] =
    {
#line 107
        .trainerName = _("Ian"),
#line 108
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 109
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 111
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 113
            .species = SPECIES_MAGIKARP,
#line 113
            .gender = TRAINER_MON_MALE,
#line 115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 114
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 116
    [TRAINER_OC_ROUTE1_ANTHONY] =
    {
#line 117
        .trainerName = _("Anthony"),
#line 118
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 119
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 121
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 123
            .species = SPECIES_MAREEP,
#line 123
            .gender = TRAINER_MON_FEMALE,
#line 125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 124
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 126
    [TRAINER_OC_ROUTE1_HEDGE] =
    {
#line 127
        .trainerName = _("Hedge"),
#line 128
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 129
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 131
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 134
            .species = SPECIES_SHROOMISH,
#line 134
            .gender = TRAINER_MON_MALE,
#line 138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 136
            .ability = ABILITY_POISON_HEAL,
#line 135
            .lvl = 6,
#line 137
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 139
            .species = SPECIES_COTTONEE,
#line 139
            .gender = TRAINER_MON_FEMALE,
#line 143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 141
            .ability = ABILITY_INFILTRATOR,
#line 140
            .lvl = 6,
#line 142
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 144
    [TRAINER_OC_PIRATEBRIDGE_SAILOR1] =
    {
#line 145
        .trainerName = _("Bord"),
#line 146
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 147
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 149
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 151
            .species = SPECIES_WINGULL,
#line 151
            .gender = TRAINER_MON_MALE,
#line 154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 152
            .lvl = 6,
#line 153
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 155
    [TRAINER_OC_PIRATEBRIDGE_SAILOR2] =
    {
#line 156
        .trainerName = _("Cord"),
#line 157
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 158
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 160
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 163
            .species = SPECIES_VULPIX,
#line 163
            .gender = TRAINER_MON_MALE,
#line 166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 164
            .lvl = 6,
#line 165
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 167
    [TRAINER_OC_PIRATEBRIDGE_SAILOR3] =
    {
#line 168
        .trainerName = _("Barst"),
#line 169
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 170
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 172
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_TIMBURR,
#line 175
            .gender = TRAINER_MON_MALE,
#line 175
            .heldItem = ITEM_ORAN_BERRY,
#line 180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 177
            .ability = ABILITY_GUTS,
#line 176
            .lvl = 10,
#line 178
            .ball = ITEM_NET_BALL,
#line 179
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 181
    [TRAINER_OC_PIRATEBRIDGE_PIRATE] =
    {
#line 182
        .trainerName = _("Darros"),
#line 183
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 184
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 186
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 188
            .species = SPECIES_MEOWTH,
#line 188
            .gender = TRAINER_MON_MALE,
#line 192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 190
            .ability = ABILITY_PICKUP,
#line 189
            .lvl = 5,
#line 191
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 193
            .species = SPECIES_LOTAD,
#line 193
            .gender = TRAINER_MON_MALE,
#line 196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 194
            .lvl = 7,
#line 195
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 197
    [TRAINER_OC_R2_ELIWOOD] =
    {
#line 198
        .trainerName = _("Eliwood"),
#line 199
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 200
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 202
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 205
            .species = SPECIES_VULPIX,
#line 205
            .gender = TRAINER_MON_FEMALE,
#line 208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 206
            .lvl = 7,
#line 207
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 209
    [TRAINER_OC_R2_HECTOR] =
    {
#line 210
        .trainerName = _("Hector"),
#line 211
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 212
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 214
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 217
            .species = SPECIES_CORPHISH,
#line 217
            .gender = TRAINER_MON_MALE,
#line 220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 218
            .lvl = 7,
#line 219
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 221
    [TRAINER_OC_R2_LYNDIS] =
    {
#line 222
        .trainerName = _("Lyndis"),
#line 223
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 224
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 225
F_TRAINER_FEMALE | 
#line 226
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 229
            .species = SPECIES_SHROOMISH,
#line 229
            .gender = TRAINER_MON_FEMALE,
#line 232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 230
            .lvl = 7,
#line 231
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 233
    [TRAINER_OC_R2_ERROR] =
    {
#line 234
        .trainerName = _("Error"),
#line 235
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 236
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 238
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 240
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 241
            .lvl = 8,
#line 242
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 244
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 245
            .lvl = 7,
#line 246
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 248
    [TRAINER_OC_R2_BAGU] =
    {
#line 249
        .trainerName = _("Bagu"),
#line 250
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 251
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 253
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 255
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 256
            .lvl = 8,
#line 257
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 259
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 260
            .lvl = 7,
#line 261
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 263
    [TRAINER_OC_R2_JOE] =
    {
#line 264
        .trainerName = _("Joe"),
#line 265
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 266
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 268
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 270
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 271
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 273
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 274
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 276
    [TRAINER_OC_R2_GEORGE] =
    {
#line 277
        .trainerName = _("George"),
#line 278
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 279
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 284
            .nickname = COMPOUND_STRING("Peashooter"),
#line 284
            .species = SPECIES_BELLSPROUT,
#line 284
            .gender = TRAINER_MON_MALE,
#line 284
            .heldItem = ITEM_CHERI_BERRY,
#line 286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 285
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 287
            .nickname = COMPOUND_STRING("Squash"),
#line 287
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .heldItem = ITEM_CHERI_BERRY,
#line 289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 288
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 290
    [TRAINER_OC_R2_LAURA] =
    {
#line 291
        .trainerName = _("Laura"),
#line 292
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 293
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 295
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 298
            .nickname = COMPOUND_STRING("Lily Pad"),
#line 298
            .species = SPECIES_LOTAD,
#line 298
            .gender = TRAINER_MON_FEMALE,
#line 298
            .heldItem = ITEM_CHERI_BERRY,
#line 300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 299
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 301
            .nickname = COMPOUND_STRING("Cattail"),
#line 301
            .species = SPECIES_MEOWTH,
#line 301
            .gender = TRAINER_MON_FEMALE,
#line 301
            .heldItem = ITEM_CHERI_BERRY,
#line 303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 302
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 304
    [TRAINER_OC_R2_KNIGHT] =
    {
#line 305
        .trainerName = _("Initiate"),
#line 306
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 307
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 309
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 311
            .species = SPECIES_PAWNIARD,
#line 311
            .gender = TRAINER_MON_MALE,
#line 314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 313
            .ability = ABILITY_DEFIANT,
#line 312
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 315
    [TRAINER_OC_R2_BART] =
    {
#line 316
        .trainerName = _("Bart"),
#line 317
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 318
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 320
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 323
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 324
            .lvl = 13,
#line 325
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 327
    [TRAINER_OC_SANCTUM_NAT] =
    {
#line 328
        .trainerName = _("Nat"),
#line 329
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 330
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 331
F_TRAINER_FEMALE | 
#line 332
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 335
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 336
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 338
            .species = SPECIES_VULPIX,
#line 338
            .gender = TRAINER_MON_FEMALE,
#line 340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 339
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 341
    [TRAINER_OC_JERRY311] =
    {
#line 342
        .trainerName = _("Jerry"),
#line 343
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 344
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 346
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 349
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .ability = ABILITY_FLUFFY,
#line 350
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 353
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 355
            .ability = ABILITY_FLUFFY,
#line 354
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 357
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 359
            .ability = ABILITY_FLUFFY,
#line 358
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 361
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 363
            .ability = ABILITY_FLUFFY,
#line 362
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 365
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 367
            .ability = ABILITY_FLUFFY,
#line 366
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 369
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 371
            .ability = ABILITY_FLUFFY,
#line 370
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 373
    [TRAINER_OC_DP_ROCK] =
    {
#line 374
        .trainerName = _("Dwayne"),
#line 375
        .trainerClass = TRAINER_CLASS_HIKER,
#line 376
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 378
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 380
            .nickname = COMPOUND_STRING("Rock"),
#line 380
            .species = SPECIES_GEODUDE,
#line 380
            .gender = TRAINER_MON_MALE,
#line 383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 382
            .ability = ABILITY_ROCK_HEAD,
#line 381
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 384
            .nickname = COMPOUND_STRING("Rock"),
#line 384
            .species = SPECIES_GEODUDE,
#line 384
            .gender = TRAINER_MON_MALE,
#line 387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 386
            .ability = ABILITY_ROCK_HEAD,
#line 385
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 388
            .nickname = COMPOUND_STRING("Rock"),
#line 388
            .species = SPECIES_GEODUDE,
#line 388
            .gender = TRAINER_MON_MALE,
#line 391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 390
            .ability = ABILITY_ROCK_HEAD,
#line 389
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 392
            .nickname = COMPOUND_STRING("Rock"),
#line 392
            .species = SPECIES_GEODUDE,
#line 392
            .gender = TRAINER_MON_MALE,
#line 395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 394
            .ability = ABILITY_ROCK_HEAD,
#line 393
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 396
            .nickname = COMPOUND_STRING("Rock"),
#line 396
            .species = SPECIES_GEODUDE,
#line 396
            .gender = TRAINER_MON_MALE,
#line 399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 398
            .ability = ABILITY_ROCK_HEAD,
#line 397
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 400
            .nickname = COMPOUND_STRING("Rock"),
#line 400
            .species = SPECIES_GEODUDE,
#line 400
            .gender = TRAINER_MON_MALE,
#line 403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 402
            .ability = ABILITY_ROCK_HEAD,
#line 401
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 404
    [TRAINER_OC_DP_FISHER] =
    {
#line 405
        .trainerName = _("Remo"),
#line 406
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 407
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 409
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 411
            .nickname = COMPOUND_STRING("Rem"),
#line 411
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 412
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 414
    [TRAINER_OC_DP_MYSTIC1] =
    {
#line 415
        .trainerName = _("Hexa"),
#line 416
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 417
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 418
F_TRAINER_FEMALE | 
#line 419
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 422
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 423
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 425
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 426
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 428
    [TRAINER_OC_DP_MYSTIC2] =
    {
#line 429
        .trainerName = _("Deci"),
#line 430
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 431
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 433
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 436
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 437
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 439
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 440
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 442
    [TRAINER_OC_DP_MYSTIC3] =
    {
#line 443
        .trainerName = _("Mal"),
#line 444
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 445
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 446
F_TRAINER_FEMALE | 
#line 447
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 450
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 451
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 453
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 454
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 456
    [TRAINER_OC_DP_KNIGHT1] =
    {
#line 457
        .trainerName = _("Squire"),
#line 458
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 459
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 461
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 463
            .species = SPECIES_ARON,
#line 463
            .gender = TRAINER_MON_MALE,
#line 465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 464
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 466
    [TRAINER_OC_DP_KNIGHT2] =
    {
#line 467
        .trainerName = _("Scout"),
#line 468
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 469
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 471
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 473
            .species = SPECIES_SANDILE,
#line 473
            .gender = TRAINER_MON_MALE,
#line 475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 474
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 476
    [TRAINER_OC_FT_WALLACE] =
    {
#line 477
        .trainerName = _("Wallace"),
#line 478
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 479
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 481
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 484
            .nickname = COMPOUND_STRING("Aardman"),
#line 484
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 484
            .heldItem = ITEM_SITRUS_BERRY,
#line 488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 485
            .lvl = 8,
#line 486
            .ball = ITEM_PREMIER_BALL,
#line 487
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 489
            .nickname = COMPOUND_STRING("Shaun"),
#line 489
            .species = SPECIES_MAREEP,
#line 489
            .gender = TRAINER_MON_MALE,
#line 489
            .heldItem = ITEM_PECHA_BERRY,
#line 494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 491
            .ability = ABILITY_FLUFFY,
#line 490
            .lvl = 9,
#line 492
            .ball = ITEM_PREMIER_BALL,
#line 493
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 495
            .nickname = COMPOUND_STRING("Gromit"),
#line 495
            .species = SPECIES_HOUNDOUR,
#line 495
            .gender = TRAINER_MON_MALE,
#line 495
            .heldItem = ITEM_LUM_BERRY,
#line 500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 497
            .ability = ABILITY_EARLY_BIRD,
#line 496
            .lvl = 12,
#line 498
            .ball = ITEM_PREMIER_BALL,
#line 499
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 501
    [TRAINER_OC_R3_SEB] =
    {
#line 502
        .trainerName = _("Sebastian"),
#line 503
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 504
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 506
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 509
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 510
            .lvl = 15,
#line 511
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 513
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 514
            .lvl = 14,
#line 515
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 517
    [TRAINER_OC_R3_ARIEL] =
    {
#line 518
        .trainerName = _("Ariel"),
#line 519
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 520
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 521
F_TRAINER_FEMALE | 
#line 522
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 525
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 527
            .ability = ABILITY_SHELL_ARMOR,
#line 526
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 528
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
            },
            },
            {
#line 531
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 533
            .ability = ABILITY_SHELL_ARMOR,
#line 532
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 534
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
            },
            },
        },
    },
#line 537
    [TRAINER_OC_R3_ELLIOTT] =
    {
#line 538
        .trainerName = _("Elliott"),
#line 539
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 540
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 542
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 545
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 546
            .lvl = 13,
#line 547
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 549
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .lvl = 14,
#line 551
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 553
    [TRAINER_OC_R3_VENDOR] =
    {
#line 554
        .trainerName = _("Hielo"),
#line 555
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 556
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 558
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 561
            .nickname = COMPOUND_STRING("Soft-Serve"),
#line 561
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 562
            .lvl = 13,
#line 563
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 565
            .nickname = COMPOUND_STRING("Gelato"),
#line 565
            .species = SPECIES_VANILLITE,
#line 565
            .gender = TRAINER_MON_MALE,
#line 568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 566
            .lvl = 14,
#line 567
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 569
            .nickname = COMPOUND_STRING("Sorbetes"),
#line 569
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 570
            .lvl = 15,
#line 571
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 573
    [TRAINER_OC_R3_KING] =
    {
#line 574
        .trainerName = _("King"),
#line 575
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 576
        .trainerPic = TRAINER_PIC_KING,
        .encounterMusic_gender = 
#line 578
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 579
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 581
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 581
            .heldItem = ITEM_ORAN_BERRY,
#line 584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 583
            .ability = ABILITY_SHEER_FORCE,
#line 582
            .lvl = 16,
#line 585
            .ball = ITEM_LUXURY_BALL,
#line 586
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 587
                MOVE_POISON_STING,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
                MOVE_HORN_ATTACK,
            },
            },
            {
#line 592
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 592
            .heldItem = ITEM_ORAN_BERRY,
#line 594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 593
            .lvl = 18,
#line 595
            .ball = ITEM_LUXURY_BALL,
#line 596
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 597
                MOVE_GIGA_BEAM,
            },
            },
        },
    },
#line 599
    [TRAINER_OC_R3_SAILOR1] =
    {
#line 600
        .trainerName = _("Bubba"),
#line 601
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 602
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 604
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 607
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 608
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 610
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 611
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 613
    [TRAINER_OC_R3_SAILOR2] =
    {
#line 614
        .trainerName = _("Gump"),
#line 615
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 616
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 618
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 621
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 622
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 624
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 625
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 627
    [TRAINER_OC_R3_SAILOR3] =
    {
#line 628
        .trainerName = _("Usagi"),
#line 629
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 630
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 631
F_TRAINER_FEMALE | 
#line 632
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 635
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 636
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 638
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 639
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 641
    [TRAINER_OC_BADGE1HINT] =
    {
#line 642
        .trainerName = _("Guide"),
#line 643
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 644
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 646
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 647
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 649
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .ability = ABILITY_SKILL_LINK,
#line 650
            .lvl = 16,
#line 654
            .ball = ITEM_NET_BALL,
#line 655
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 656
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
                MOVE_RAPID_SPIN,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 661
    [TRAINER_OC_BADGE1] =
    {
#line 662
        .trainerName = _("Erina"),
#line 663
        .trainerClass = TRAINER_CLASS_LEADER,
#line 664
        .trainerPic = TRAINER_PIC_BADGE1,
        .encounterMusic_gender = 
#line 665
F_TRAINER_FEMALE | 
#line 666
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 667
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 668
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 670
            .species = SPECIES_WINGULL,
#line 670
            .gender = TRAINER_MON_FEMALE,
#line 670
            .heldItem = ITEM_ORAN_BERRY,
#line 672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 671
            .lvl = 17,
#line 673
            .ball = ITEM_NET_BALL,
#line 674
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_WATER_PULSE,
                MOVE_AIR_CUTTER,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 680
            .species = SPECIES_CHINCHOU,
#line 680
            .gender = TRAINER_MON_FEMALE,
#line 680
            .heldItem = ITEM_ORAN_BERRY,
#line 683
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 682
            .ability = ABILITY_VOLT_ABSORB,
#line 681
            .lvl = 18,
#line 684
            .ball = ITEM_NET_BALL,
#line 685
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 686
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 691
            .nickname = COMPOUND_STRING("Pearlice"),
#line 691
            .species = SPECIES_CLOYSTER,
#line 691
            .gender = TRAINER_MON_FEMALE,
#line 691
            .heldItem = ITEM_APICOT_BERRY,
#line 695
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 693
            .ability = ABILITY_SKILL_LINK,
#line 692
            .lvl = 20,
#line 696
            .ball = ITEM_NET_BALL,
#line 697
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 698
                MOVE_WATER_PULSE,
                MOVE_WITHDRAW,
                MOVE_ROCK_BLAST,
                MOVE_RAPID_SPIN,
            },
            },
        },
    },
#line 703
    [TRAINER_OC_R4_MAPLE] =
    {
#line 704
        .trainerName = _("Maple"),
#line 705
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 706
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 707
F_TRAINER_FEMALE | 
#line 708
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 709
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 711
            .nickname = COMPOUND_STRING("Terra"),
#line 711
            .species = SPECIES_EEVEE,
#line 711
            .gender = TRAINER_MON_FEMALE,
#line 713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 712
            .lvl = 20,
#line 714
            .ball = ITEM_LUXURY_BALL,
#line 715
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 716
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_SAND_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 721
            .nickname = COMPOUND_STRING("Snowcone"),
#line 721
            .species = SPECIES_VANILLITE,
#line 721
            .gender = TRAINER_MON_MALE,
#line 724
            .ev = TRAINER_PARTY_EVS(3, 9, 6, 3, 3, 2),
#line 723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 722
            .lvl = 22,
#line 725
            .ball = ITEM_GREAT_BALL,
#line 726
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 727
                MOVE_AURORA_BEAM,
                MOVE_ICY_WIND,
                MOVE_SHOCK_WAVE,
                MOVE_MIRROR_SHOT,
            },
            },
            {
#line 732
            .nickname = COMPOUND_STRING("Artoria"),
#line 732
            .species = SPECIES_SWABLU,
#line 732
            .gender = TRAINER_MON_FEMALE,
#line 735
            .ev = TRAINER_PARTY_EVS(7, 15, 18, 15, 15, 6),
#line 734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 733
            .lvl = 24,
#line 736
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 737
                MOVE_WING_ATTACK,
                MOVE_TWISTER,
                MOVE_UPROAR,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 742
    [TRAINER_OC_R4_NEIL] =
    {
#line 743
        .trainerName = _("Neil"),
#line 744
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 745
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 747
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 750
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 751
            .lvl = 16,
#line 752
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 754
            .species = SPECIES_MAKUHITA,
#line 754
            .gender = TRAINER_MON_MALE,
#line 757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 755
            .lvl = 22,
#line 756
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 757
                MOVE_MACH_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_KARATE_CHOP,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 762
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 763
            .lvl = 24,
#line 764
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 765
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_MAGNET_BOMB,
            },
            },
        },
    },
#line 770
    [TRAINER_OC_R4_BUZZ] =
    {
#line 771
        .trainerName = _("Buzz"),
#line 772
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 773
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 775
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 778
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 779
            .lvl = 16,
#line 780
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 782
            .species = SPECIES_MEOWTH,
#line 782
            .gender = TRAINER_MON_MALE,
#line 785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 783
            .lvl = 22,
#line 784
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 786
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 787
            .lvl = 24,
#line 788
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 789
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_MAGNET_BOMB,
            },
            },
        },
    },
#line 794
    [TRAINER_OC_R4_MIKE] =
    {
#line 795
        .trainerName = _("Mike"),
#line 796
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 797
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 799
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 802
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 803
            .lvl = 16,
#line 804
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 806
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 807
            .lvl = 22,
#line 808
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 810
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 811
            .lvl = 24,
#line 812
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 813
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_MAGNET_BOMB,
            },
            },
        },
    },
#line 818
    [TRAINER_OC_R4_WOODY] =
    {
#line 819
        .trainerName = _("Woody"),
#line 820
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 821
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 823
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 826
            .species = SPECIES_LOMBRE,
#line 826
            .gender = TRAINER_MON_MALE,
#line 829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 827
            .lvl = 19,
#line 828
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 829
                MOVE_MEGA_DRAIN,
                MOVE_BUBBLE,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 834
            .species = SPECIES_TIMBURR,
#line 834
            .gender = TRAINER_MON_MALE,
#line 837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 835
            .lvl = 21,
#line 836
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 838
            .species = SPECIES_ONIX,
#line 838
            .gender = TRAINER_MON_MALE,
#line 841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 839
            .lvl = 22,
#line 840
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 841
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_WRAP,
                MOVE_CURSE,
            },
            },
            {
#line 846
            .species = SPECIES_SANDILE,
#line 846
            .gender = TRAINER_MON_MALE,
#line 849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 847
            .lvl = 23,
#line 848
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 850
    [TRAINER_OC_R4_JESSIE] =
    {
#line 851
        .trainerName = _("Jessie"),
#line 852
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 853
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 854
F_TRAINER_FEMALE | 
#line 855
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 858
            .species = SPECIES_LOMBRE,
#line 858
            .gender = TRAINER_MON_FEMALE,
#line 861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 859
            .lvl = 19,
#line 860
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 861
                MOVE_MEGA_DRAIN,
                MOVE_BUBBLE,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 866
            .species = SPECIES_ZUBAT,
#line 866
            .gender = TRAINER_MON_FEMALE,
#line 869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 867
            .lvl = 21,
#line 868
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 870
            .species = SPECIES_MEOWTH,
#line 870
            .gender = TRAINER_MON_FEMALE,
#line 873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 871
            .lvl = 22,
#line 872
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 874
            .species = SPECIES_SANDILE,
#line 874
            .gender = TRAINER_MON_FEMALE,
#line 877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 875
            .lvl = 23,
#line 876
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 878
    [TRAINER_OC_SPIDERCAVE_KNIGHT1] =
    {
#line 879
        .trainerName = _("Scout"),
#line 880
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 881
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 883
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 885
            .species = SPECIES_PAWNIARD,
#line 885
            .gender = TRAINER_MON_MALE,
#line 888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 887
            .ability = ABILITY_DEFIANT,
#line 886
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 888
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
            {
#line 893
            .species = SPECIES_PAWNIARD,
#line 893
            .gender = TRAINER_MON_MALE,
#line 896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 895
            .ability = ABILITY_DEFIANT,
#line 894
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 896
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
        },
    },
#line 901
    [TRAINER_OC_SPIDERCAVE_KNIGHT2] =
    {
#line 902
        .trainerName = _("Scout"),
#line 903
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 904
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 906
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 908
            .species = SPECIES_SCRAGGY,
#line 908
            .gender = TRAINER_MON_MALE,
#line 910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 909
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 911
            .species = SPECIES_SCRAGGY,
#line 911
            .gender = TRAINER_MON_MALE,
#line 913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 912
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 914
    [TRAINER_OC_SPIDERCAVE_KNIGHT3] =
    {
#line 915
        .trainerName = _("Guard"),
#line 916
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 917
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 919
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 921
            .species = SPECIES_ARON,
#line 921
            .gender = TRAINER_MON_MALE,
#line 924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 923
            .ability = ABILITY_STURDY,
#line 922
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 925
            .species = SPECIES_ARON,
#line 925
            .gender = TRAINER_MON_MALE,
#line 928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 927
            .ability = ABILITY_STURDY,
#line 926
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 929
    [TRAINER_OC_SPIDERCAVE_KNIGHT4] =
    {
#line 930
        .trainerName = _("Guard"),
#line 931
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 932
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 934
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 936
            .species = SPECIES_ARON,
#line 936
            .gender = TRAINER_MON_MALE,
#line 939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 938
            .ability = ABILITY_STURDY,
#line 937
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 940
            .species = SPECIES_ARON,
#line 940
            .gender = TRAINER_MON_MALE,
#line 943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 942
            .ability = ABILITY_STURDY,
#line 941
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 944
    [TRAINER_OC_SPIDERCAVE_KNIGHT5] =
    {
#line 945
        .trainerName = _("Tunneler"),
#line 946
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 947
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 949
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 951
            .species = SPECIES_DIGLETT,
#line 951
            .gender = TRAINER_MON_MALE,
#line 954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 953
            .ability = ABILITY_ARENA_TRAP,
#line 952
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 955
            .species = SPECIES_GEODUDE,
#line 955
            .gender = TRAINER_MON_MALE,
#line 958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 957
            .ability = ABILITY_STURDY,
#line 956
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 959
    [TRAINER_OC_SPIDERCAVE_KNIGHT6] =
    {
#line 960
        .trainerName = _("Tunneler"),
#line 961
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 962
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 964
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 966
            .species = SPECIES_DIGLETT,
#line 966
            .gender = TRAINER_MON_MALE,
#line 969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 968
            .ability = ABILITY_ARENA_TRAP,
#line 967
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 970
            .species = SPECIES_RHYHORN,
#line 970
            .gender = TRAINER_MON_MALE,
#line 972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 971
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 973
    [TRAINER_OC_SPIDERCAVE_KNIGHT7] =
    {
#line 974
        .trainerName = _("Tunneler"),
#line 975
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 976
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 978
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 980
            .species = SPECIES_DIGLETT,
#line 980
            .gender = TRAINER_MON_MALE,
#line 983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 982
            .ability = ABILITY_ARENA_TRAP,
#line 981
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 984
            .species = SPECIES_RHYHORN,
#line 984
            .gender = TRAINER_MON_MALE,
#line 986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 985
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 987
    [TRAINER_OC_SPIDERCAVE_KNIGHT8] =
    {
#line 988
        .trainerName = _("Sapper"),
#line 989
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 990
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 992
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 994
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 995
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 997
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 999
            .ability = ABILITY_MAGNET_PULL,
#line 998
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1001
    [TRAINER_OC_SPIDERCAVE_KNIGHT9] =
    {
#line 1002
        .trainerName = _("Sapper"),
#line 1003
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1004
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1006
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1008
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1009
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1011
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1013
            .ability = ABILITY_MAGNET_PULL,
#line 1012
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1015
    [TRAINER_OC_SPIDERCAVE_ADMIN] =
    {
#line 1016
        .trainerName = _("Specter"),
#line 1017
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1018
        .trainerPic = TRAINER_PIC_SPECTER,
        .encounterMusic_gender = 
#line 1020
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1021
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1023
            .species = SPECIES_LAMPENT,
#line 1023
            .gender = TRAINER_MON_MALE,
#line 1023
            .heldItem = ITEM_PASSHO_BERRY,
#line 1025
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1024
            .lvl = 24,
#line 1026
            .ball = ITEM_DUSK_BALL,
#line 1027
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1028
                MOVE_MYSTICAL_FIRE,
                MOVE_CONFUSE_RAY,
                MOVE_WILL_O_WISP,
                MOVE_CURSE,
            },
            },
            {
#line 1033
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1033
            .heldItem = ITEM_PASSHO_BERRY,
#line 1035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 1034
            .lvl = 25,
#line 1036
            .ball = ITEM_DUSK_BALL,
#line 1037
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1038
                MOVE_MUD_SLAP,
                MOVE_SHADOW_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 1043
            .species = SPECIES_YAMASK,
#line 1043
            .gender = TRAINER_MON_MALE,
#line 1043
            .heldItem = ITEM_ORAN_BERRY,
#line 1045
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1044
            .lvl = 26,
#line 1046
            .ball = ITEM_DUSK_BALL,
#line 1047
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1048
                MOVE_NIGHT_SHADE,
                MOVE_SHOCK_WAVE,
                MOVE_DISABLE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 1053
    [TRAINER_OC_R5_TRAINER1] =
    {
#line 1054
        .trainerName = _("Ivan"),
#line 1055
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1056
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1058
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1061
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1062
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1064
    [TRAINER_OC_R5_TRAINER2] =
    {
#line 1065
        .trainerName = _("Wicki"),
#line 1066
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1067
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1068
F_TRAINER_FEMALE | 
#line 1069
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1072
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1073
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1075
    [TRAINER_OC_R5_TRAINER3] =
    {
#line 1076
        .trainerName = _("Maggie"),
#line 1077
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1078
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1079
F_TRAINER_FEMALE | 
#line 1080
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1083
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1084
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1086
    [TRAINER_OC_R6_TETRIS] =
    {
#line 1087
        .trainerName = _("Alexey"),
#line 1088
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 1089
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 1091
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1094
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1096
            .ability = ABILITY_GUTS,
#line 1095
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1098
            .species = SPECIES_POTATER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1099
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1101
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1103
            .ability = ABILITY_ANALYTIC,
#line 1102
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1105
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1107
            .ability = ABILITY_ANALYTIC,
#line 1106
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1109
    [TRAINER_OC_R6_REDIGIT] =
    {
#line 1110
        .trainerName = _("Andrew"),
#line 1111
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1114
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1117
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .ability = ABILITY_SHEER_FORCE,
#line 1118
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1121
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1123
            .ability = ABILITY_INTIMIDATE,
#line 1122
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1125
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .ability = ABILITY_MAGIC_GUARD,
#line 1126
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1129
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1130
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1132
    [TRAINER_OC_R6_STEVE] =
    {
#line 1133
        .trainerName = _("Steve"),
#line 1134
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1135
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1137
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1140
            .species = SPECIES_TIMBURR,
#line 1140
            .gender = TRAINER_MON_MALE,
#line 1143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1142
            .ability = ABILITY_SHEER_FORCE,
#line 1141
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1144
            .species = SPECIES_SCRAFTY,
#line 1144
            .gender = TRAINER_MON_MALE,
#line 1147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1146
            .ability = ABILITY_INTIMIDATE,
#line 1145
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1148
            .species = SPECIES_GRAVELER,
#line 1148
            .gender = TRAINER_MON_MALE,
#line 1151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1150
            .ability = ABILITY_ROCK_HEAD,
#line 1149
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_LAIRON,
#line 1152
            .gender = TRAINER_MON_MALE,
#line 1155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1154
            .ability = ABILITY_ROCK_HEAD,
#line 1153
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1156
    [TRAINER_OC_R6_ALEX] =
    {
#line 1157
        .trainerName = _("Alex"),
#line 1158
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1159
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1160
F_TRAINER_FEMALE | 
#line 1161
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1164
            .species = SPECIES_EXEGGCUTE,
#line 1164
            .gender = TRAINER_MON_FEMALE,
#line 1167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1166
            .ability = ABILITY_HARVEST,
#line 1165
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1168
            .species = SPECIES_BAKETATER,
#line 1168
            .gender = TRAINER_MON_FEMALE,
#line 1170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1169
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1171
            .species = SPECIES_FLAAFFY,
#line 1171
            .gender = TRAINER_MON_FEMALE,
#line 1174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1173
            .ability = ABILITY_FLUFFY,
#line 1172
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1175
            .species = SPECIES_PILOSWINE,
#line 1175
            .gender = TRAINER_MON_FEMALE,
#line 1178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1177
            .ability = ABILITY_THICK_FAT,
#line 1176
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1179
    [TRAINER_OC_BADGE2HINT] =
    {
#line 1180
        .trainerName = _("Guide"),
#line 1181
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1182
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 1184
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1187
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1191
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
#line 1190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1189
            .ability = ABILITY_SOUNDPROOF,
#line 1188
            .lvl = 25,
#line 1192
            .ball = ITEM_NET_BALL,
#line 1193
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1194
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 1196
    [TRAINER_OC_GYM2_TRAINER1] =
    {
#line 1197
        .trainerName = _("Fiorung"),
#line 1198
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1199
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1200
F_TRAINER_FEMALE | 
#line 1201
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1203
            .species = SPECIES_JOLTIK,
#line 1203
            .gender = TRAINER_MON_FEMALE,
#line 1206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1205
            .ability = ABILITY_SWARM,
#line 1204
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1207
            .species = SPECIES_PAWNIARD,
#line 1207
            .gender = TRAINER_MON_FEMALE,
#line 1210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1209
            .ability = ABILITY_DEFIANT,
#line 1208
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1211
            .species = SPECIES_EELEKTRIK,
#line 1211
            .gender = TRAINER_MON_FEMALE,
#line 1213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1213
                MOVE_CHARGE_BEAM,
                MOVE_BITE,
                MOVE_WRAP,
                MOVE_COIL,
            },
            },
        },
    },
#line 1218
    [TRAINER_OC_GYM2_TRAINER2] =
    {
#line 1219
        .trainerName = _("Nya"),
#line 1220
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 1221
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 1222
F_TRAINER_FEMALE | 
#line 1223
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1225
            .species = SPECIES_CHINCHOU,
#line 1225
            .gender = TRAINER_MON_FEMALE,
#line 1228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1227
            .ability = ABILITY_WATER_ABSORB,
#line 1226
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1229
            .species = SPECIES_KOFFING,
#line 1229
            .gender = TRAINER_MON_FEMALE,
#line 1231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1230
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1232
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1234
            .ability = ABILITY_TECHNICIAN,
#line 1233
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1235
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1240
    [TRAINER_OC_GYM2_TRAINER3] =
    {
#line 1241
        .trainerName = _("Glitter"),
#line 1242
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1243
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 1244
F_TRAINER_FEMALE | 
#line 1245
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1247
            .species = SPECIES_FLAAFFY,
#line 1247
            .gender = TRAINER_MON_FEMALE,
#line 1250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1249
            .ability = ABILITY_STATIC,
#line 1248
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1251
            .species = SPECIES_HAUNTER,
#line 1251
            .gender = TRAINER_MON_FEMALE,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1252
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1254
            .species = SPECIES_VULPIX,
#line 1254
            .gender = TRAINER_MON_FEMALE,
#line 1256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1255
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1257
    [TRAINER_OC_BADGE2] =
    {
#line 1258
        .trainerName = _("Cooper"),
#line 1259
        .trainerClass = TRAINER_CLASS_LEADER,
#line 1260
        .trainerPic = TRAINER_PIC_BADGE2,
        .encounterMusic_gender = 
#line 1262
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1263
        .items = { ITEM_SODA_POP, ITEM_SODA_POP, ITEM_SODA_POP },
#line 1264
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1266
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1266
            .heldItem = ITEM_ORAN_BERRY,
#line 1269
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1268
            .ability = ABILITY_ANALYTIC,
#line 1267
            .lvl = 24,
#line 1270
            .ball = ITEM_REPEAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1271
                MOVE_CHARGE_BEAM,
                MOVE_SHOCK_WAVE,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 1276
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .heldItem = ITEM_ORAN_BERRY,
#line 1279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 1278
            .ability = ABILITY_POISON_TOUCH,
#line 1277
            .lvl = 25,
#line 1280
            .ball = ITEM_REPEAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1281
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_MINIMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 1286
            .nickname = COMPOUND_STRING("Monad"),
#line 1286
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1286
            .heldItem = ITEM_CHOICE_SPECS,
#line 1290
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
#line 1289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1288
            .ability = ABILITY_SOUNDPROOF,
#line 1287
            .lvl = 27,
#line 1291
            .ball = ITEM_REPEAT_BALL,
#line 1292
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1293
                MOVE_EMP_SPLOSION,
            },
            },
        },
    },
#line 1295
    [TRAINER_OC_R7_KAPPA] =
    {
#line 1296
        .trainerName = _("Lily"),
#line 1297
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1298
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1299
F_TRAINER_FEMALE | 
#line 1300
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1303
            .nickname = COMPOUND_STRING("Dolly"),
#line 1303
            .species = SPECIES_SWADLOON,
#line 1303
            .gender = TRAINER_MON_FEMALE,
#line 1307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1305
            .ability = ABILITY_LEAF_GUARD,
#line 1304
            .lvl = 24,
#line 1306
            .ball = ITEM_DUSK_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1308
            .nickname = COMPOUND_STRING("Rian"),
#line 1308
            .species = SPECIES_LOMBRE,
#line 1308
            .gender = TRAINER_MON_MALE,
#line 1312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1310
            .ability = ABILITY_RAIN_DISH,
#line 1309
            .lvl = 26,
#line 1311
            .ball = ITEM_DUSK_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1313
    [TRAINER_OC_R7_LESK] =
    {
#line 1314
        .trainerName = _("Lesk"),
#line 1315
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1316
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1318
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1319
        .items = { ITEM_SODA_POP, ITEM_SODA_POP, ITEM_SODA_POP, ITEM_SODA_POP },
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1321
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1321
            .heldItem = ITEM_SODA_POP,
#line 1324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1322
            .lvl = 17,
#line 1323
            .ball = ITEM_MASTER_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1325
            .species = SPECIES_FLAAFFY,
#line 1325
            .gender = TRAINER_MON_FEMALE,
#line 1325
            .heldItem = ITEM_SODA_POP,
#line 1329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1327
            .ability = ABILITY_STATIC,
#line 1326
            .lvl = 24,
#line 1328
            .ball = ITEM_DUSK_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1330
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1330
            .heldItem = ITEM_SODA_POP,
#line 1334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .ability = ABILITY_STICKY_HOLD,
#line 1331
            .lvl = 25,
#line 1333
            .ball = ITEM_DUSK_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1335
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1335
            .heldItem = ITEM_SODA_POP,
#line 1339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1337
            .ability = ABILITY_SLUSH_RUSH,
#line 1336
            .lvl = 26,
#line 1338
            .ball = ITEM_DUSK_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1340
    [TRAINER_OC_R7_SPIDEY] =
    {
#line 1341
        .trainerName = _("Peter"),
#line 1342
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1343
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 1345
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 1346
        .items = { ITEM_POTION, ITEM_SUPER_POTION, ITEM_FRESH_WATER, ITEM_SODA_POP },
#line 1347
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1349
            .species = SPECIES_SWADLOON,
#line 1349
            .gender = TRAINER_MON_MALE,
#line 1349
            .heldItem = ITEM_SILVER_POWDER,
#line 1352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1351
            .ability = ABILITY_LEAF_GUARD,
#line 1350
            .lvl = 24,
#line 1353
            .ball = ITEM_NET_BALL,
#line 1354
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1355
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_PIN_MISSILE,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 1360
            .species = SPECIES_RIOLU,
#line 1360
            .gender = TRAINER_MON_MALE,
#line 1360
            .heldItem = ITEM_BLACK_BELT,
#line 1363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1362
            .ability = ABILITY_STEADFAST,
#line 1361
            .lvl = 24,
#line 1364
            .ball = ITEM_GREAT_BALL,
#line 1365
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1366
                MOVE_KARATE_CHOP,
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_COUNTER,
            },
            },
            {
#line 1371
            .species = SPECIES_JOLTIK,
#line 1371
            .gender = TRAINER_MON_MALE,
#line 1371
            .heldItem = ITEM_MAGNET,
#line 1374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1373
            .ability = ABILITY_COMPOUND_EYES,
#line 1372
            .lvl = 25,
#line 1375
            .ball = ITEM_NET_BALL,
#line 1376
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1377
                MOVE_PIN_MISSILE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
                MOVE_STRING_SHOT,
            },
            },
        },
    },
#line 1382
    [TRAINER_OC_R7_GOBLIN] =
    {
#line 1383
        .trainerName = _("Norman"),
#line 1384
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1385
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 1387
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1388
        .items = { ITEM_HYPER_POTION, ITEM_X_ATTACK, ITEM_X_SPECIAL, ITEM_X_SPEED },
#line 1389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1391
            .species = SPECIES_KOFFING,
#line 1391
            .gender = TRAINER_MON_MALE,
#line 1395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1392
            .lvl = 24,
#line 1393
            .ball = ITEM_LUXURY_BALL,
#line 1394
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1396
            .species = SPECIES_PAWNIARD,
#line 1396
            .gender = TRAINER_MON_MALE,
#line 1401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1398
            .ability = ABILITY_PRESSURE,
#line 1397
            .lvl = 25,
#line 1399
            .ball = ITEM_LUXURY_BALL,
#line 1400
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1402
            .species = SPECIES_TYRUNT,
#line 1402
            .gender = TRAINER_MON_MALE,
#line 1407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1404
            .ability = ABILITY_STRONG_JAW,
#line 1403
            .lvl = 25,
#line 1405
            .ball = ITEM_LUXURY_BALL,
#line 1406
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1408
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1410
            .ability = ABILITY_SOUNDPROOF,
#line 1409
            .lvl = 26,
#line 1411
            .ball = ITEM_LUXURY_BALL,
#line 1412
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1413
                MOVE_SHOCK_WAVE,
                MOVE_MEGA_DRAIN,
                MOVE_CHARGE_BEAM,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 1418
    [TRAINER_OC_R7_OCTOPUS] =
    {
#line 1419
        .trainerName = _("Olivia"),
#line 1420
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1421
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1422
F_TRAINER_FEMALE | 
#line 1423
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1424
        .items = { ITEM_SUPER_POTION, ITEM_LEMONADE, ITEM_PARALYZE_HEAL, ITEM_X_SPECIAL },
#line 1425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1427
            .species = SPECIES_TENTACOOL,
#line 1427
            .gender = TRAINER_MON_FEMALE,
#line 1432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1429
            .ability = ABILITY_RAIN_DISH,
#line 1428
            .lvl = 24,
#line 1430
            .ball = ITEM_REPEAT_BALL,
#line 1431
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1433
            .species = SPECIES_VULPIX,
#line 1433
            .gender = TRAINER_MON_FEMALE,
#line 1437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1434
            .lvl = 25,
#line 1435
            .ball = ITEM_REPEAT_BALL,
#line 1436
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1437
                MOVE_MYSTICAL_FIRE,
                MOVE_PSYBEAM,
                MOVE_WILL_O_WISP,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 1442
            .species = SPECIES_OMANYTE,
#line 1442
            .gender = TRAINER_MON_FEMALE,
#line 1447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1444
            .ability = ABILITY_SWIFT_SWIM,
#line 1443
            .lvl = 25,
#line 1445
            .ball = ITEM_REPEAT_BALL,
#line 1446
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1448
            .species = SPECIES_OCTILLERY,
#line 1448
            .gender = TRAINER_MON_FEMALE,
#line 1453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1450
            .ability = ABILITY_ANALYTIC,
#line 1449
            .lvl = 26,
#line 1451
            .ball = ITEM_REPEAT_BALL,
#line 1452
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1453
                MOVE_OCTAZOOKA,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 1458
    [TRAINER_OC_R7_ELECTRO] =
    {
#line 1459
        .trainerName = _("Max"),
#line 1460
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1461
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 1463
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1464
        .items = { ITEM_SODA_POP, ITEM_X_ATTACK, ITEM_X_SPECIAL, ITEM_X_SPEED },
#line 1465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1467
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1469
            .ability = ABILITY_MAGNET_PULL,
#line 1468
            .lvl = 24,
#line 1470
            .ball = ITEM_REPEAT_BALL,
#line 1471
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1473
            .species = SPECIES_CHINCHOU,
#line 1473
            .gender = TRAINER_MON_MALE,
#line 1478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1475
            .ability = ABILITY_VOLT_ABSORB,
#line 1474
            .lvl = 25,
#line 1476
            .ball = ITEM_REPEAT_BALL,
#line 1477
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1479
            .species = SPECIES_EELEKTRIK,
#line 1479
            .gender = TRAINER_MON_MALE,
#line 1483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1480
            .lvl = 26,
#line 1481
            .ball = ITEM_REPEAT_BALL,
#line 1482
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1483
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_BITE,
            },
            },
        },
    },
