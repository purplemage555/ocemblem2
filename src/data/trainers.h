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
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
                MOVE_TACKLE,
                MOVE_WITHDRAW,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 533
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 535
            .ability = ABILITY_SHELL_ARMOR,
#line 534
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 536
                MOVE_BUBBLE,
                MOVE_TACKLE,
                MOVE_WITHDRAW,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 541
    [TRAINER_OC_R3_ELLIOTT] =
    {
#line 542
        .trainerName = _("Elliott"),
#line 543
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 544
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 546
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 549
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .lvl = 13,
#line 551
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 553
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 554
            .lvl = 14,
#line 555
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 557
    [TRAINER_OC_R3_VENDOR] =
    {
#line 558
        .trainerName = _("Hielo"),
#line 559
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 560
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 562
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 565
            .nickname = COMPOUND_STRING("Soft-Serve"),
#line 565
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 566
            .lvl = 13,
#line 567
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 569
            .nickname = COMPOUND_STRING("Gelato"),
#line 569
            .species = SPECIES_VANILLITE,
#line 569
            .gender = TRAINER_MON_MALE,
#line 572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 570
            .lvl = 14,
#line 571
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 573
            .nickname = COMPOUND_STRING("Sorbetes"),
#line 573
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 574
            .lvl = 15,
#line 575
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 577
    [TRAINER_OC_R3_KING] =
    {
#line 578
        .trainerName = _("King"),
#line 579
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 580
        .trainerPic = TRAINER_PIC_KING,
        .encounterMusic_gender = 
#line 582
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 583
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 585
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .heldItem = ITEM_ORAN_BERRY,
#line 590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 587
            .ability = ABILITY_SHEER_FORCE,
#line 586
            .lvl = 16,
#line 588
            .ball = ITEM_LUXURY_BALL,
#line 589
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 590
                MOVE_POISON_STING,
                MOVE_DOUBLE_KICK,
                MOVE_HORN_ATTACK,
                MOVE_LEER,
            },
            },
            {
#line 595
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .heldItem = ITEM_ORAN_BERRY,
#line 599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 596
            .lvl = 18,
#line 597
            .ball = ITEM_LUXURY_BALL,
#line 598
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_GIGA_BEAM,
            },
            },
        },
    },
#line 601
    [TRAINER_OC_R3_SAILOR1] =
    {
#line 602
        .trainerName = _("Bubba"),
#line 603
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 604
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 606
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 609
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 610
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 612
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 613
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 615
    [TRAINER_OC_R3_SAILOR2] =
    {
#line 616
        .trainerName = _("Gump"),
#line 617
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 618
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 620
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 623
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 624
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 626
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 627
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 629
    [TRAINER_OC_R3_SAILOR3] =
    {
#line 630
        .trainerName = _("Usagi"),
#line 631
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 632
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 633
F_TRAINER_FEMALE | 
#line 634
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 637
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 638
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 640
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 641
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 643
    [TRAINER_OC_BADGE1HINT] =
    {
#line 644
        .trainerName = _("Guide"),
#line 645
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 646
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 648
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 649
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 651
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 653
            .ability = ABILITY_SKILL_LINK,
#line 652
            .lvl = 16,
#line 656
            .ball = ITEM_NET_BALL,
#line 657
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 658
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
                MOVE_PROTECT,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 663
    [TRAINER_OC_BADGE1] =
    {
#line 664
        .trainerName = _("Erina"),
#line 665
        .trainerClass = TRAINER_CLASS_LEADER,
#line 666
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .encounterMusic_gender = 
#line 667
F_TRAINER_FEMALE | 
#line 668
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 669
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 670
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 672
            .species = SPECIES_WINGULL,
#line 672
            .gender = TRAINER_MON_FEMALE,
#line 672
            .heldItem = ITEM_ORAN_BERRY,
#line 675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 673
            .lvl = 17,
#line 674
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_WATER_PULSE,
                MOVE_WING_ATTACK,
                MOVE_THUNDER_SHOCK,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 680
            .species = SPECIES_CORPHISH,
#line 680
            .gender = TRAINER_MON_FEMALE,
#line 680
            .heldItem = ITEM_ORAN_BERRY,
#line 684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 682
            .ability = ABILITY_SHELL_ARMOR,
#line 681
            .lvl = 17,
#line 683
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_BUBBLE_BEAM,
                MOVE_BITE,
                MOVE_PROTECT,
                MOVE_LEER,
            },
            },
            {
#line 689
            .nickname = COMPOUND_STRING("Pearlice"),
#line 689
            .species = SPECIES_CLOYSTER,
#line 689
            .gender = TRAINER_MON_FEMALE,
#line 689
            .heldItem = ITEM_APICOT_BERRY,
#line 693
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 691
            .ability = ABILITY_SKILL_LINK,
#line 690
            .lvl = 20,
#line 694
            .ball = ITEM_NET_BALL,
#line 695
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 696
                MOVE_WATER_PULSE,
                MOVE_WITHDRAW,
                MOVE_PROTECT,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 701
    [TRAINER_OC_R4_MAPLE] =
    {
#line 702
        .trainerName = _("Maple"),
#line 703
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 704
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 705
F_TRAINER_FEMALE | 
#line 706
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 707
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 709
            .nickname = COMPOUND_STRING("Terra"),
#line 709
            .species = SPECIES_EEVEE,
#line 709
            .gender = TRAINER_MON_FEMALE,
#line 711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 710
            .lvl = 20,
#line 712
            .ball = ITEM_LUXURY_BALL,
#line 713
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 714
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_SAND_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 719
            .nickname = COMPOUND_STRING("Snowcone"),
#line 719
            .species = SPECIES_VANILLITE,
#line 719
            .gender = TRAINER_MON_MALE,
#line 722
            .ev = TRAINER_PARTY_EVS(3, 9, 5, 3, 3, 2),
#line 721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 720
            .lvl = 22,
#line 723
            .ball = ITEM_GREAT_BALL,
#line 724
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 725
                MOVE_AURORA_BEAM,
                MOVE_ICY_WIND,
                MOVE_SHOCK_WAVE,
                MOVE_MIRROR_SHOT,
            },
            },
            {
#line 730
            .nickname = COMPOUND_STRING("Artoria"),
#line 730
            .species = SPECIES_SWABLU,
#line 730
            .gender = TRAINER_MON_FEMALE,
#line 733
            .ev = TRAINER_PARTY_EVS(7, 15, 17, 15, 15, 6),
#line 732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 731
            .lvl = 24,
#line 734
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 735
                MOVE_WING_ATTACK,
                MOVE_TWISTER,
                MOVE_UPROAR,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 740
    [TRAINER_OC_R4_NEIL] =
    {
#line 741
        .trainerName = _("Neil"),
#line 742
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 743
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 745
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 748
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 749
            .lvl = 16,
#line 750
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 752
            .species = SPECIES_MAKUHITA,
#line 752
            .gender = TRAINER_MON_MALE,
#line 755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 753
            .lvl = 22,
#line 754
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 755
                MOVE_MACH_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_KARATE_CHOP,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 760
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 761
            .lvl = 24,
#line 762
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 763
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 768
    [TRAINER_OC_R4_BUZZ] =
    {
#line 769
        .trainerName = _("Buzz"),
#line 770
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 771
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 773
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 776
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 777
            .lvl = 16,
#line 778
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 780
            .species = SPECIES_MEOWTH,
#line 780
            .gender = TRAINER_MON_MALE,
#line 783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 781
            .lvl = 22,
#line 782
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 784
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 785
            .lvl = 24,
#line 786
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 787
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 792
    [TRAINER_OC_R4_MIKE] =
    {
#line 793
        .trainerName = _("Mike"),
#line 794
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 795
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 797
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 800
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 801
            .lvl = 16,
#line 802
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 804
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 805
            .lvl = 22,
#line 806
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 808
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 809
            .lvl = 24,
#line 810
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 811
                MOVE_CHARGE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 816
    [TRAINER_OC_R4_WOODY] =
    {
#line 817
        .trainerName = _("Woody"),
#line 818
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 819
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 821
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 824
            .species = SPECIES_LOMBRE,
#line 824
            .gender = TRAINER_MON_MALE,
#line 827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 825
            .lvl = 19,
#line 826
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 827
                MOVE_MEGA_DRAIN,
                MOVE_BUBBLE,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 832
            .species = SPECIES_TIMBURR,
#line 832
            .gender = TRAINER_MON_MALE,
#line 835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 833
            .lvl = 21,
#line 834
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 836
            .species = SPECIES_ONIX,
#line 836
            .gender = TRAINER_MON_MALE,
#line 839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 837
            .lvl = 22,
#line 838
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 839
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_WRAP,
                MOVE_CURSE,
            },
            },
            {
#line 844
            .species = SPECIES_SANDILE,
#line 844
            .gender = TRAINER_MON_MALE,
#line 847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 845
            .lvl = 23,
#line 846
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 848
    [TRAINER_OC_R4_JESSIE] =
    {
#line 849
        .trainerName = _("Jessie"),
#line 850
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 851
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 852
F_TRAINER_FEMALE | 
#line 853
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 856
            .species = SPECIES_LOMBRE,
#line 856
            .gender = TRAINER_MON_FEMALE,
#line 859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 857
            .lvl = 19,
#line 858
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 859
                MOVE_MEGA_DRAIN,
                MOVE_BUBBLE,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 864
            .species = SPECIES_ZUBAT,
#line 864
            .gender = TRAINER_MON_FEMALE,
#line 867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 865
            .lvl = 21,
#line 866
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 868
            .species = SPECIES_MEOWTH,
#line 868
            .gender = TRAINER_MON_FEMALE,
#line 871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 869
            .lvl = 22,
#line 870
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 872
            .species = SPECIES_SANDILE,
#line 872
            .gender = TRAINER_MON_FEMALE,
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 873
            .lvl = 23,
#line 874
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 876
    [TRAINER_OC_SPIDERCAVE_KNIGHT1] =
    {
#line 877
        .trainerName = _("Scout"),
#line 878
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 879
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 881
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 883
            .species = SPECIES_PAWNIARD,
#line 883
            .gender = TRAINER_MON_MALE,
#line 886
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 885
            .ability = ABILITY_DEFIANT,
#line 884
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 886
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
            {
#line 891
            .species = SPECIES_PAWNIARD,
#line 891
            .gender = TRAINER_MON_MALE,
#line 894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 893
            .ability = ABILITY_DEFIANT,
#line 892
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 894
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
        },
    },
#line 899
    [TRAINER_OC_SPIDERCAVE_KNIGHT2] =
    {
#line 900
        .trainerName = _("Scout"),
#line 901
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 902
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 904
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 906
            .species = SPECIES_SCRAGGY,
#line 906
            .gender = TRAINER_MON_MALE,
#line 908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 907
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 909
            .species = SPECIES_SCRAGGY,
#line 909
            .gender = TRAINER_MON_MALE,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 912
    [TRAINER_OC_SPIDERCAVE_KNIGHT3] =
    {
#line 913
        .trainerName = _("Guard"),
#line 914
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 915
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 917
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 919
            .species = SPECIES_ARON,
#line 919
            .gender = TRAINER_MON_MALE,
#line 922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 921
            .ability = ABILITY_STURDY,
#line 920
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 923
            .species = SPECIES_ARON,
#line 923
            .gender = TRAINER_MON_MALE,
#line 926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 925
            .ability = ABILITY_STURDY,
#line 924
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 927
    [TRAINER_OC_SPIDERCAVE_KNIGHT4] =
    {
#line 928
        .trainerName = _("Guard"),
#line 929
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 930
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 932
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 934
            .species = SPECIES_ARON,
#line 934
            .gender = TRAINER_MON_MALE,
#line 937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 936
            .ability = ABILITY_STURDY,
#line 935
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 938
            .species = SPECIES_ARON,
#line 938
            .gender = TRAINER_MON_MALE,
#line 941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 940
            .ability = ABILITY_STURDY,
#line 939
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 942
    [TRAINER_OC_SPIDERCAVE_KNIGHT5] =
    {
#line 943
        .trainerName = _("Tunneler"),
#line 944
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 945
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 947
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 949
            .species = SPECIES_DIGLETT,
#line 949
            .gender = TRAINER_MON_MALE,
#line 952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 951
            .ability = ABILITY_ARENA_TRAP,
#line 950
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 953
            .species = SPECIES_GEODUDE,
#line 953
            .gender = TRAINER_MON_MALE,
#line 956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 955
            .ability = ABILITY_STURDY,
#line 954
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 957
    [TRAINER_OC_SPIDERCAVE_KNIGHT6] =
    {
#line 958
        .trainerName = _("Tunneler"),
#line 959
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 960
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 962
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 964
            .species = SPECIES_DIGLETT,
#line 964
            .gender = TRAINER_MON_MALE,
#line 967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 966
            .ability = ABILITY_ARENA_TRAP,
#line 965
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 968
            .species = SPECIES_RHYHORN,
#line 968
            .gender = TRAINER_MON_MALE,
#line 970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 969
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 971
    [TRAINER_OC_SPIDERCAVE_KNIGHT7] =
    {
#line 972
        .trainerName = _("Tunneler"),
#line 973
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 974
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 976
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 978
            .species = SPECIES_DIGLETT,
#line 978
            .gender = TRAINER_MON_MALE,
#line 981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 980
            .ability = ABILITY_ARENA_TRAP,
#line 979
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 982
            .species = SPECIES_RHYHORN,
#line 982
            .gender = TRAINER_MON_MALE,
#line 984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 983
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 985
    [TRAINER_OC_SPIDERCAVE_KNIGHT8] =
    {
#line 986
        .trainerName = _("Sapper"),
#line 987
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 988
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 990
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 992
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 993
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 995
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 997
            .ability = ABILITY_MAGNET_PULL,
#line 996
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 999
    [TRAINER_OC_SPIDERCAVE_KNIGHT9] =
    {
#line 1000
        .trainerName = _("Sapper"),
#line 1001
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1002
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1004
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1006
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1007
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1009
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1011
            .ability = ABILITY_MAGNET_PULL,
#line 1010
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1013
    [TRAINER_OC_SPIDERCAVE_ADMIN] =
    {
#line 1014
        .trainerName = _("Specter"),
#line 1015
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1016
        .trainerPic = TRAINER_PIC_SPECTER,
        .encounterMusic_gender = 
#line 1018
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1019
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1021
            .species = SPECIES_LAMPENT,
#line 1021
            .gender = TRAINER_MON_MALE,
#line 1021
            .heldItem = ITEM_PASSHO_BERRY,
#line 1025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1022
            .lvl = 25,
#line 1023
            .ball = ITEM_DUSK_BALL,
#line 1024
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1025
                MOVE_MYSTICAL_FIRE,
                MOVE_CONFUSE_RAY,
                MOVE_WILL_O_WISP,
                MOVE_CURSE,
            },
            },
            {
#line 1030
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1030
            .heldItem = ITEM_PASSHO_BERRY,
#line 1034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1031
            .lvl = 25,
#line 1032
            .ball = ITEM_DUSK_BALL,
#line 1033
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1034
                MOVE_MUD_SLAP,
                MOVE_SHADOW_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 1039
            .species = SPECIES_YAMASK,
#line 1039
            .gender = TRAINER_MON_MALE,
#line 1039
            .heldItem = ITEM_ORAN_BERRY,
#line 1043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1040
            .lvl = 25,
#line 1041
            .ball = ITEM_DUSK_BALL,
#line 1042
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1043
                MOVE_NIGHT_SHADE,
                MOVE_SHOCK_WAVE,
                MOVE_DISABLE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1048
    [TRAINER_OC_R5_TRAINER1] =
    {
#line 1049
        .trainerName = _("Ivan"),
#line 1050
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1051
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1056
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1057
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1059
    [TRAINER_OC_R5_TRAINER2] =
    {
#line 1060
        .trainerName = _("Wicki"),
#line 1061
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1062
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1063
F_TRAINER_FEMALE | 
#line 1064
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1067
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1068
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1070
    [TRAINER_OC_R5_TRAINER3] =
    {
#line 1071
        .trainerName = _("Maggie"),
#line 1072
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1073
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1074
F_TRAINER_FEMALE | 
#line 1075
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1078
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1079
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
