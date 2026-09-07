#include "global.h"
#include "constants/moves.h"

static const u8 sMoveDescription_None[] = _("An attack with no added effect.");
static const u8 sMoveDescription_Pound[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_KarateChop[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DoubleSlap[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_CometPunch[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_MegaPunch[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_PayDay[] = _(
    "Money is picked up after battle."
    );
static const u8 sMoveDescription_FirePunch[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_IcePunch[] = _(
    "Has a 10% chance to freeze the foe."
    );
static const u8 sMoveDescription_ThunderPunch[] = _(
    "Has a 10% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_Scratch[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_ViseGrip[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Guillotine[] = _(
    "Faints the foe in one hit, but is\n"
    "very inaccurate."
    );
static const u8 sMoveDescription_RazorWind[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. High crit. Hits both foes."
    );
static const u8 sMoveDescription_SwordsDance[] = _(
    "Raises the user's Attack by 2 stages."
    );
static const u8 sMoveDescription_Cut[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Gust[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_WingAttack[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Whirlwind[] = _(
    "Forces the foe to switch out. Ends a\n"
    "wild battle."
    );
static const u8 sMoveDescription_Fly[] = _(
    "Deals damage, then the user switches\n"
    "out."
    );
static const u8 sMoveDescription_Bind[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_Slam[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_VineWhip[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Stomp[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_DoubleKick[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_MegaKick[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_JumpKick[] = _(
    "If it misses, the user is hurt."
    );
static const u8 sMoveDescription_RollingKick[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_SandAttack[] = _(
    "Lowers the foe's accuracy by 1\n"
    "stage."
    );
static const u8 sMoveDescription_Headbutt[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_HornAttack[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_FuryAttack[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_HornDrill[] = _(
    "Faints the foe in one hit, but is\n"
    "very inaccurate."
    );
static const u8 sMoveDescription_Tackle[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_BodySlam[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_Wrap[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_TakeDown[] = _(
    "The user takes 1/4 recoil damage."
    );
static const u8 sMoveDescription_Thrash[] = _(
    "Rampages 2-3 turns, then confuses\n"
    "the user."
    );
static const u8 sMoveDescription_DoubleEdge[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_TailWhip[] = _(
    "Lowers both foes' Defense by 1\n"
    "stage."
    );
static const u8 sMoveDescription_PoisonSting[] = _(
    "Has a 30% chance to poison the foe."
    );
static const u8 sMoveDescription_Twineedle[] = _(
    "Hits twice. Has a 20% chance to\n"
    "poison the foe."
    );
static const u8 sMoveDescription_PinMissile[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_Leer[] = _(
    "Lowers both foes' Defense by 1\n"
    "stage."
    );
static const u8 sMoveDescription_Bite[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_Growl[] = _(
    "Lowers both foes' Attack by 1 stage."
    );
static const u8 sMoveDescription_Roar[] = _(
    "Forces the foe to switch out. Ends a\n"
    "wild battle."
    );
static const u8 sMoveDescription_Sing[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_Supersonic[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_SonicBoom[] = _(
    "Always deals 20 HP of damage."
    );
static const u8 sMoveDescription_Disable[] = _(
    "Disables the foe's last used move for\n"
    "4 turns."
    );
static const u8 sMoveDescription_Acid[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_Ember[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_Flamethrower[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_Mist[] = _(
    "Protects the user's party from stat\n"
    "drops for 5 turns."
    );
static const u8 sMoveDescription_WaterGun[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_HydroPump[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Surf[] = _(
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_IceBeam[] = _(
    "Has a 10% chance to freeze the foe."
    );

static const u8 sMoveDescription_Blizzard[] = _(
    "Has a 10% chance to freeze a foe.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_Psybeam[] = _(
    "Has a 10% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_BubbleBeam[] = _(
    "Has a 10% chance to lower Speed by\n"
    "1 stage."
    );
static const u8 sMoveDescription_AuroraBeam[] = _(
    "Has a 10% chance to lower Attack by\n"
    "1 stage."
    );
static const u8 sMoveDescription_HyperBeam[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_Peck[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DrillPeck[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Submission[] = _(
    "The user takes 1/4 recoil damage."
    );
static const u8 sMoveDescription_LowKick[] = _(
    "The heavier the foe, the greater the\n"
    "power."
    );
static const u8 sMoveDescription_Counter[] = _(
    "Returns double the damage from a\n"
    "physical hit. Moves last."
    );
static const u8 sMoveDescription_SeismicToss[] = _(
    "Deals damage equal to the user's\n"
    "level."
    );
static const u8 sMoveDescription_Strength[] = _(
    "Has a 20% chance to raise the user's\n"
    "Attack by 1 stage."
    );
static const u8 sMoveDescription_Absorb[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_MegaDrain[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_LeechSeed[] = _(
    "Drains 1/8 of the foe's max HP to\n"
    "the user each turn."
    );
static const u8 sMoveDescription_Growth[] = _(
    "Raises the user's Attack and Sp. Atk\n"
    "by 1 stage, or 2 in sun."
    );
static const u8 sMoveDescription_RazorLeaf[] = _(
    "High critical-hit ratio. Hits both\n"
    "foes."
    );
static const u8 sMoveDescription_SolarBeam[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. Attacks at once in sun."
    );
static const u8 sMoveDescription_PoisonPowder[] = _(
    "Poisons the foe."
    );
static const u8 sMoveDescription_StunSpore[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_SleepPowder[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_PetalDance[] = _(
    "Rampages 2-3 turns, then confuses\n"
    "the user."
    );
static const u8 sMoveDescription_StringShot[] = _(
    "Lowers the foe's Speed by 2 stages.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_DragonRage[] = _(
    "Always deals 40 HP of damage."
    );
static const u8 sMoveDescription_FireSpin[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_ThunderShock[] = _(
    "Has a 10% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_Thunderbolt[] = _(
    "Has a 10% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_ThunderWave[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_Thunder[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_RockThrow[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Earthquake[] = _(
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_Fissure[] = _(
    "Faints the foe in one hit, but is\n"
    "very inaccurate."
    );
static const u8 sMoveDescription_Dig[] = _(
    "Digs down on turn 1, untargetable,\n"
    "then strikes on turn 2."
    );
static const u8 sMoveDescription_Toxic[] = _(
    "Badly poisons the foe."
    );
static const u8 sMoveDescription_Confusion[] = _(
    "Has a 10% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_Psychic[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Hypnosis[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_Meditate[] = _(
    "Raises the user's Attack by 1 stage."
    );
static const u8 sMoveDescription_Agility[] = _(
    "Raises the user's Speed by 2 stages."
    );
static const u8 sMoveDescription_QuickAttack[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_Rage[] = _(
    "Raises the user's Attack by 1 stage\n"
    "each time it is hit."
    );
static const u8 sMoveDescription_Teleport[] = _(
    "Switches the user out. A wild user\n"
    "flees instead."
    );
static const u8 sMoveDescription_NightShade[] = _(
    "Deals damage equal to the user's\n"
    "level."
    );
static const u8 sMoveDescription_Mimic[] = _(
    "Uses the last move the foe used."
    );
static const u8 sMoveDescription_Screech[] = _(
    "Lowers the foe's Defense by 2\n"
    "stages."
    );
static const u8 sMoveDescription_DoubleTeam[] = _(
    "Raises the user's evasiveness by 1\n"
    "stage."
    );
static const u8 sMoveDescription_Recover[] = _(
    "Restores up to 1/2 of the user's max\n"
    "HP."
    );
static const u8 sMoveDescription_Harden[] = _(
    "Raises the user's Defense by 1 stage."
    );
static const u8 sMoveDescription_Minimize[] = _(
    "Reduces its own size, raising the\n"
    "user's evasiveness by 2 stages."
    );
static const u8 sMoveDescription_Smokescreen[] = _(
    "Lowers the foe's accuracy by 1\n"
    "stage."
    );
static const u8 sMoveDescription_ConfuseRay[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_Withdraw[] = _(
    "Raises the user's Defense by 1 stage."
    );
static const u8 sMoveDescription_DefenseCurl[] = _(
    "Raises the user's Defense by 1 stage.\n"
    "Powers up Rollout and Ice Ball."
    );
static const u8 sMoveDescription_Barrier[] = _(
    "Raises a sturdy barrier. Raises the\n"
    "user's Defense by 2 stages."
    );
static const u8 sMoveDescription_LightScreen[] = _(
    "Halves special damage to the user's\n"
    "side for 5 turns."
    );
static const u8 sMoveDescription_Haze[] = _(
    "Removes all stat changes from every\n"
    "Pokémon in the field."
    );
static const u8 sMoveDescription_Reflect[] = _(
    "Halves physical damage to the user's\n"
    "side for 5 turns."
    );
static const u8 sMoveDescription_FocusEnergy[] = _(
    "Raises the user's critical-hit ratio\n"
    "by 2 stages."
    );
static const u8 sMoveDescription_Bide[] = _(
    "Endures 2 turns, then deals back\n"
    "double the damage. +1 priority."
    );
static const u8 sMoveDescription_Metronome[] = _(
    "Uses one randomly selected move."
    );
static const u8 sMoveDescription_MirrorMove[] = _(
    "Uses the last move the foe used."
    );
static const u8 sMoveDescription_SelfDestruct[] = _(
    "The user faints. Hits all adjacent\n"
    "Pokémon."
    );
static const u8 sMoveDescription_EggBomb[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Lick[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_Smog[] = _(
    "Has a 40% chance to poison the foe."
    );
static const u8 sMoveDescription_Sludge[] = _(
    "Has a 30% chance to poison the foe."
    );
static const u8 sMoveDescription_BoneClub[] = _(
    "Has a 10% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_FireBlast[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_Waterfall[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_Clamp[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_Swift[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_SkullBash[] = _(
    "Raises Defense by 1 stage on turn 1,\n"
    "attacks on turn 2."
    );
static const u8 sMoveDescription_SpikeCannon[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_Constrict[] = _(
    "Has a 10% chance to lower Speed by\n"
    "1 stage."
    );
static const u8 sMoveDescription_Amnesia[] = _(
    "Raises the user's Sp. Def by 2\n"
    "stages."
    );
static const u8 sMoveDescription_Kinesis[] = _(
    "Lowers the foe's accuracy by 1\n"
    "stage."
    );
static const u8 sMoveDescription_SoftBoiled[] = _(
    "Restores up to 1/2 of the user's max\n"
    "HP."
    );
static const u8 sMoveDescription_HighJumpKick[] = _(
    "If it misses, the user is hurt."
    );
static const u8 sMoveDescription_Glare[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_DreamEater[] = _(
    "Only hits a sleeping foe. Heals the\n"
    "user by half the damage."
    );
static const u8 sMoveDescription_PoisonGas[] = _(
    "Poisons the foe. Hits both foes."
    );
static const u8 sMoveDescription_Barrage[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_LeechLife[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_LovelyKiss[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_SkyAttack[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. High crit; 30% flinch."
    );
static const u8 sMoveDescription_Transform[] = _(
    "Becomes a copy of the foe, with its\n"
    "moves and stats."
    );
static const u8 sMoveDescription_Bubble[] = _(
    "Has a 10% chance to lower Speed by\n"
    "1 stage. Hits both foes."
    );
static const u8 sMoveDescription_DizzyPunch[] = _(
    "Has a 20% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_Spore[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_Flash[] = _(
    "Lowers accuracy by 1 stage, cures\n"
    "Sleep. Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_Psywave[] = _(
    "Deals random damage based on the\n"
    "user's level."
    );
static const u8 sMoveDescription_Splash[] = _(
    "Has no effect in battle."
    );
static const u8 sMoveDescription_AcidArmor[] = _(
    "Raises the user's Defense by 2\n"
    "stages."
    );
static const u8 sMoveDescription_Crabhammer[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Explosion[] = _(
    "The user faints. Hits all adjacent\n"
    "Pokémon."
    );
static const u8 sMoveDescription_FurySwipes[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_Bonemerang[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_Rest[] = _(
    "Fully restores max HP and cures\n"
    "status. The user sleeps for 2 turns."
    );
static const u8 sMoveDescription_RockSlide[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch. Hits both foes."
    );
static const u8 sMoveDescription_HyperFang[] = _(
    "Has a 10% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_Sharpen[] = _(
    "Raises the user's Attack by 1 stage."
    );
static const u8 sMoveDescription_Conversion[] = _(
    "Changes the user's type to match its\n"
    "first move."
    );
static const u8 sMoveDescription_TriAttack[] = _(
    "Has a 20% chance to burn, paralyze\n"
    "or freeze the foe."
    );
static const u8 sMoveDescription_SuperFang[] = _(
    "Halves the foe's current HP."
    );
static const u8 sMoveDescription_Slash[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Substitute[] = _(
    "Creates a decoy using 1/4 of the\n"
    "user's max HP."
    );
static const u8 sMoveDescription_Struggle[] = _(
    "Used only if all PP are gone.\n" 
    "Also hurts the user a little."
    );
static const u8 sMoveDescription_Sketch[] = _(
    "Copies the foe's last move\n"
    "permanently."
    );
static const u8 sMoveDescription_TripleKick[] = _(
    "Hits 3 times in a row, with power\n"
    "rising each hit."
    );
static const u8 sMoveDescription_Thief[] = _(
    "Steals the foe's held item if the\n"
    "user has none."
    );
static const u8 sMoveDescription_SpiderWeb[] = _(
    "Prevents the foe from fleeing or\n"
    "switching out."
    );
static const u8 sMoveDescription_MindReader[] = _(
    "The user's next move is guaranteed\n"
    "to hit."
    );
static const u8 sMoveDescription_Nightmare[] = _(
    "A sleeping foe loses 1/4 of its max\n"
    "HP each turn."
    );
static const u8 sMoveDescription_FlameWheel[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_Snore[] = _(
    "Usable only while asleep. 30%\n"
    "chance to make the foe flinch."
    );
static const u8 sMoveDescription_Curse[] = _(
    "Lowers Speed by 1 stage, but raises\n"
    "Attack and Defense by 1."
    );
static const u8 sMoveDescription_CurseGhost[] = _(
    "The user loses 1/2 max HP; the foe\n"
    "then loses 1/4 max HP each turn."
    );
static const u8 sMoveDescription_Flail[] = _(
    "The lower the user's HP, the greater\n"
    "the power."
    );
static const u8 sMoveDescription_Conversion2[] = _(
    "Changes the user's type to resist the\n"
    "foe's last move."
    );
static const u8 sMoveDescription_Aeroblast[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_CottonSpore[] = _(
    "Lowers both foes' Speed by 2 stages."
    );
static const u8 sMoveDescription_Reversal[] = _(
    "The lower the user's HP, the greater\n"
    "the power."
    );
static const u8 sMoveDescription_Spite[] = _(
    "Cuts 4 PP from the foe's last used\n"
    "move."
    );
static const u8 sMoveDescription_PowderSnow[] = _(
    "Has a 10% chance to freeze a foe.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_Protect[] = _(
    "Fully protects the user this turn.\n"
    "May fail if used in a row."
    );
static const u8 sMoveDescription_MachPunch[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_ScaryFace[] = _(
    "Lowers the foe's Speed by 2 stages."
    );
static const u8 sMoveDescription_FeintAttack[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SweetKiss[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_BellyDrum[] = _(
    "Maxes out the user's Attack, but\n"
    "loses 1/2 of max HP."
    );
static const u8 sMoveDescription_SludgeBomb[] = _(
    "Has a 30% chance to poison the foe."
    );
static const u8 sMoveDescription_MudSlap[] = _(
    "Lowers the foe's accuracy by 1\n"
    "stage."
    );
static const u8 sMoveDescription_Octazooka[] = _(
    "Has a 50% chance to lower accuracy\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Spikes[] = _(
    "Hurts grounded foes switching in:\n"
    "1/8, 1/6 or 1/4 by 1-3 layers."
    );
static const u8 sMoveDescription_ZapCannon[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_Foresight[] = _(
    "Lets Normal and Fighting moves hit\n"
    "Ghosts. User ignores evasion boosts."
    );
static const u8 sMoveDescription_DestinyBond[] = _(
    "If a foe knocks out the user, that\n"
    "foe also faints."
    );
static const u8 sMoveDescription_PerishSong[] = _(
    "All Pokémon that hear it faint in 3\n"
    "turns unless they switch out."
    );
static const u8 sMoveDescription_IcyWind[] = _(
    "Lowers the foe's Speed by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_Detect[] = _(
    "Fully protects the user this turn.\n"
    "May fail if used in a row."
    );
static const u8 sMoveDescription_BoneRush[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_LockOn[] = _(
    "The user's next move is guaranteed\n"
    "to hit."
    );
static const u8 sMoveDescription_Outrage[] = _(
    "Rampages 2-3 turns, then confuses\n"
    "the user."
    );
static const u8 sMoveDescription_Sandstorm[] = _(
    "For 5 turns, raises Rock-types' Sp.\n"
    "Def 50% and chips most types 1/16."
    );
static const u8 sMoveDescription_GigaDrain[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_Endure[] = _(
    "The user survives any hit with 1 HP.\n"
    "May fail if used in a row."
    );
static const u8 sMoveDescription_Charm[] = _(
    "Lowers the foe's Attack by 2 stages."
    );
static const u8 sMoveDescription_Rollout[] = _(
    "Attacks for up to 5 turns, doubling\n"
    "in power each turn."
    );
static const u8 sMoveDescription_FalseSwipe[] = _(
    "Always leaves the foe with at least\n"
    "1 HP."
    );
static const u8 sMoveDescription_Swagger[] = _(
    "Confuses the foe, but raises its\n"
    "Attack by 2 stages."
    );
static const u8 sMoveDescription_MilkDrink[] = _(
    "Restores up to 1/2 of the user's max\n"
    "HP."
    );
static const u8 sMoveDescription_Spark[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_FuryCutter[] = _(
    "Doubles in power with each\n"
    "consecutive use, up to 160 BP."
    );
static const u8 sMoveDescription_SteelWing[] = _(
    "Has a 10% chance to raise the user's\n"
    "Defense by 1 stage."
    );
static const u8 sMoveDescription_MeanLook[] = _(
    "Prevents the foe from fleeing or\n"
    "switching out."
    );
static const u8 sMoveDescription_Attract[] = _(
    "Infatuates a foe of the opposite\n"
    "gender."
    );
static const u8 sMoveDescription_SleepTalk[] = _(
    "Usable only while asleep. Uses a\n"
    "random move the user knows."
    );
static const u8 sMoveDescription_HealBell[] = _(
    "Cures all status conditions of the\n"
    "user's party."
    );
static const u8 sMoveDescription_Return[] = _(
    "The higher the user's friendship, the\n"
    "greater the power."
    );
static const u8 sMoveDescription_Present[] = _(
    "Randomly deals damage or restores\n"
    "the target's HP."
    );
static const u8 sMoveDescription_Frustration[] = _(
    "The lower the user's friendship, the\n"
    "greater the power."
    );
static const u8 sMoveDescription_Safeguard[] = _(
    "Protects the user's party from status\n"
    "conditions for 5 turns."
    );
static const u8 sMoveDescription_PainSplit[] = _(
    "Adds the user's and foe's HP, then\n"
    "shares it equally."
    );
static const u8 sMoveDescription_SacredFire[] = _(
    "Has a 50% chance to burn the foe."
    );
static const u8 sMoveDescription_Magnitude[] = _(
    "Power varies randomly. Hits all\n"
    "adjacent Pokémon."
    );
static const u8 sMoveDescription_DynamicPunch[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_Megahorn[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DragonBreath[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_BatonPass[] = _(
    "Switches out, passing its stat\n"
    "changes to the next Pokémon."
    );
static const u8 sMoveDescription_Encore[] = _(
    "Forces the foe to repeat its last\n"
    "move for 3 turns."
    );
static const u8 sMoveDescription_Pursuit[] = _(
    "Doubles in power and strikes a foe\n"
    "as it switches out."
    );
static const u8 sMoveDescription_RapidSpin[] = _(
    "Frees the user from hazards and\n"
    "traps, raising its Speed by 1 stage."
    );
static const u8 sMoveDescription_SweetScent[] = _(
    "Lowers the foe's evasiveness by 2\n"
    "stages. Hits both foes."
    );
static const u8 sMoveDescription_IronTail[] = _(
    "Has a 30% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_MetalClaw[] = _(
    "Has a 10% chance to raise the user's\n"
    "Attack by 1 stage."
    );
static const u8 sMoveDescription_VitalThrow[] = _(
    "Moves last with -1 priority."
    );
static const u8 sMoveDescription_MorningSun[] = _(
    "Restores max HP: 1/2 normally, 2/3\n"
    "in sun, 1/4 in other weather."
    );
static const u8 sMoveDescription_Synthesis[] = _(
    "Restores max HP: 1/2 normally, 2/3\n"
    "in sun, 1/4 in other weather."
    );
static const u8 sMoveDescription_Moonlight[] = _(
    "Restores max HP: 1/2 normally, 2/3\n"
    "in sun, 1/4 in other weather."
    );
static const u8 sMoveDescription_HiddenPower[] = _(
    "The type varies with the user."
    );
static const u8 sMoveDescription_CrossChop[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Twister[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch. Hits both foes."
    );
static const u8 sMoveDescription_RainDance[] = _(
    "For 5 turns, empowers Water moves\n"
    "and weakens Fire moves by 50%."
    );
static const u8 sMoveDescription_SunnyDay[] = _(
    "For 5 turns, empowers Fire moves and\n"
    "weakens Water moves by 50%."
    );
static const u8 sMoveDescription_Crunch[] = _(
    "Has a 20% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_MirrorCoat[] = _(
    "Returns double the damage from a\n"
    "special hit. Moves last."
    );
static const u8 sMoveDescription_PsychUp[] = _(
    "Psychs up, copying the target's stat\n"
    "changes."
    );
static const u8 sMoveDescription_ExtremeSpeed[] = _(
    "Moves first with +2 priority."
    );
static const u8 sMoveDescription_AncientPower[] = _(
    "Has a 10% chance to raise all of\n"
    "the user's stats."
    );
static const u8 sMoveDescription_ShadowBall[] = _(
    "Has a 20% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_FutureSight[] = _(
    "Strikes 2 turns after this move is\n"
    "used."
    );
static const u8 sMoveDescription_RockSmash[] = _(
    "Has a 50% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Whirlpool[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_BeatUp[] = _(
    "Each conscious party Pokémon joins\n"
    "in the attack."
    );
static const u8 sMoveDescription_FakeOut[] = _(
    "Makes the foe flinch. Only turn 1.\n"
    "Moves first with +3 priority."
    );
static const u8 sMoveDescription_Uproar[] = _(
    "Causes an uproar for 3 turns; no\n"
    "Pokémon can fall asleep."
    );
static const u8 sMoveDescription_Stockpile[] = _(
    "Stores power and raises Defense and\n"
    "Sp. Def by 1 stage. Up to 3 uses."
    );
static const u8 sMoveDescription_SpitUp[] = _(
    "Power grows with each Stockpile\n"
    "used, up to 3. Resets the count."
    );
static const u8 sMoveDescription_Swallow[] = _(
    "Uses Stockpiles to restore 1/4, 1/2\n"
    "or all max HP by count."
    );
static const u8 sMoveDescription_HeatWave[] = _(
    "Has a 10% chance to burn the foe.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_Hail[] = _(
    "For 5 turns, damages all Pokémon\n"
    "1/16 each turn, except Ice-types."
    );
static const u8 sMoveDescription_Torment[] = _(
    "Stops the foe from using the same\n"
    "move twice in a row."
    );
static const u8 sMoveDescription_Flatter[] = _(
    "Confuses the foe, but raises its Sp.\n"
    "Atk by 1 stage."
    );
static const u8 sMoveDescription_WillOWisp[] = _(
    "Burns the foe."
    );
static const u8 sMoveDescription_Memento[] = _(
    "The user faints and lowers the foe's\n"
    "Attack and Sp. Atk by 2 stages."
    );
static const u8 sMoveDescription_Facade[] = _(
    "Doubles in power if the user is\n"
    "burned, poisoned or paralyzed."
    );
static const u8 sMoveDescription_FocusPunch[] = _(
    "Moves last. The user flinches if hit\n"
    "before attacking."
    );
static const u8 sMoveDescription_SmellingSalts[] = _(
    "Doubles against a paralyzed foe, but\n"
    "cures its paralysis."
    );
static const u8 sMoveDescription_FollowMe[] = _(
    "Draws all foes' attacks onto the user\n"
    "this turn."
    );
static const u8 sMoveDescription_NaturePower[] = _(
    "Becomes a different move depending\n"
    "on the environment."
    );
static const u8 sMoveDescription_Charge[] = _(
    "Raises Sp. Def by 1 stage. Powers up\n"
    "the next Electric move."
    );
static const u8 sMoveDescription_Taunt[] = _(
    "For 3 turns, the foe can use only\n"
    "damaging moves."
    );
static const u8 sMoveDescription_HelpingHand[] = _(
    "Boosts the power of an ally's move\n"
    "by 50%."
    );
static const u8 sMoveDescription_Trick[] = _(
    "Swaps held items with the foe."
    );
static const u8 sMoveDescription_RolePlay[] = _(
    "Copies the foe's Ability onto the\n"
    "user."
    );
static const u8 sMoveDescription_Wish[] = _(
    "Restores 1/2 of max HP at the end\n"
    "of the next turn."
    );
static const u8 sMoveDescription_Assist[] = _(
    "Uses a random move from the user's\n"
    "party."
    );
static const u8 sMoveDescription_Ingrain[] = _(
    "Restores 1/16 of max HP each turn,\n"
    "but the user can't switch out."
    );
static const u8 sMoveDescription_Superpower[] = _(
    "Lowers the user's Attack and Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_MagicCoat[] = _(
    "Reflects status moves back at the\n"
    "foe this turn."
    );
static const u8 sMoveDescription_Recycle[] = _(
    "Recovers the user's last used held\n"
    "item."
    );
static const u8 sMoveDescription_Revenge[] = _(
    "Moves last. Doubles in power if the\n"
    "user was hit first."
    );
static const u8 sMoveDescription_BrickBreak[] = _(
    "Removes screens from the foe's side\n"
    "and deals damage."
    );
static const u8 sMoveDescription_Yawn[] = _(
    "Makes the foe fall asleep at the end\n"
    "of the next turn."
    );
static const u8 sMoveDescription_KnockOff[] = _(
    "Deals 50% more against a foe with a\n"
    "removable item, then removes it."
    );
static const u8 sMoveDescription_Endeavor[] = _(
    "Cuts the foe's HP down to equal the\n"
    "user's current HP."
    );
static const u8 sMoveDescription_Eruption[] = _(
    "The higher the user's HP, the\n"
    "greater the power. Hits both foes."
    );
static const u8 sMoveDescription_SkillSwap[] = _(
    "Swaps Abilities with the foe."
    );
static const u8 sMoveDescription_Imprison[] = _(
    "Foes cannot use any move that the\n"
    "user also knows."
    );
static const u8 sMoveDescription_Refresh[] = _(
    "Cures the user's poison, paralysis or\n"
    "burn."
    );
static const u8 sMoveDescription_Grudge[] = _(
    "If the user faints to a move, that\n"
    "move loses all its PP."
    );
static const u8 sMoveDescription_Snatch[] = _(
    "Steals the foe's next beneficial\n"
    "status move."
    );
static const u8 sMoveDescription_SecretPower[] = _(
    "Added effect varies by terrain."
    );
static const u8 sMoveDescription_Dive[] = _(
    "Dives under on turn 1, untargetable,\n"
    "then strikes on turn 2."
    );
static const u8 sMoveDescription_ArmThrust[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_Camouflage[] = _(
    "Changes the user's type to match the\n"
    "environment."
    );
static const u8 sMoveDescription_TailGlow[] = _(
    "Raises the user's Sp. Atk by 3\n"
    "stages."
    );
static const u8 sMoveDescription_LusterPurge[] = _(
    "Has a 50% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_MistBall[] = _(
    "Has a 50% chance to lower Sp. Atk\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_FeatherDance[] = _(
    "Lowers the foe's Attack by 2 stages."
    );
static const u8 sMoveDescription_TeeterDance[] = _(
    "Confuses all adjacent Pokémon."
    );
static const u8 sMoveDescription_BlazeKick[] = _(
    "High critical-hit ratio. Has a 10%\n"
    "chance to burn the foe."
    );
static const u8 sMoveDescription_MudSport[] = _(
    "For 5 turns, weakens all\n"
    "Electric-type moves."
    );
static const u8 sMoveDescription_IceBall[] = _(
    "Attacks for up to 5 turns, doubling\n"
    "in power each turn."
    );
static const u8 sMoveDescription_NeedleArm[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_SlackOff[] = _(
    "Restores up to 1/2 of the user's max\n"
    "HP."
    );
static const u8 sMoveDescription_HyperVoice[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_PoisonFang[] = _(
    "Has a 50% chance to badly poison\n"
    "the foe."
    );
static const u8 sMoveDescription_CrushClaw[] = _(
    "Has a 50% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_BlastBurn[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_HydroCannon[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_MeteorMash[] = _(
    "Has a 20% chance to raise the user's\n"
    "Attack by 1 stage."
    );
static const u8 sMoveDescription_Astonish[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_WeatherBall[] = _(
    "Doubles its power in weather and its\n"
    "type changes to match it."
    );
static const u8 sMoveDescription_Aromatherapy[] = _(
    "Cures all status conditions of the\n"
    "user's party."
    );
static const u8 sMoveDescription_FakeTears[] = _(
    "Lowers the foe's Sp. Def by 2\n"
    "stages."
    );
static const u8 sMoveDescription_AirCutter[] = _(
    "High critical-hit ratio. Hits both\n"
    "foes."
    );
static const u8 sMoveDescription_Overheat[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_OdorSleuth[] = _(
    "Lets Normal and Fighting moves hit\n"
    "Ghosts. User ignores evasion boosts."
    );
static const u8 sMoveDescription_RockTomb[] = _(
    "Lowers the foe's Speed by 1 stage."
    );
static const u8 sMoveDescription_SilverWind[] = _(
    "Has a 10% chance to raise all of\n"
    "the user's stats."
    );
static const u8 sMoveDescription_MetalSound[] = _(
    "Lowers the foe's Sp. Def by 2\n"
    "stages."
    );
static const u8 sMoveDescription_GrassWhistle[] = _(
    "Puts the foe to sleep."
    );
static const u8 sMoveDescription_Tickle[] = _(
    "Lowers the foe's Attack and Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_CosmicPower[] = _(
    "Raises the user's Defense and Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_WaterSpout[] = _(
    "The higher the user's HP, the\n"
    "greater the power. Hits both foes."
    );
static const u8 sMoveDescription_SignalBeam[] = _(
    "Has a 10% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_ShadowPunch[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Extrasensory[] = _(
    "Has a 10% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_SkyUppercut[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SandTomb[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_SheerCold[] = _(
    "Faints the foe in one hit, but is\n"
    "very inaccurate."
    );
static const u8 sMoveDescription_MuddyWater[] = _(
    "Has a 30% chance to lower accuracy\n"
    "by 1 stage. Hits both foes."
    );
static const u8 sMoveDescription_BulletSeed[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_AerialAce[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_IcicleSpear[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_IronDefense[] = _(
    "Raises the user's Defense by 2\n"
    "stages."
    );
static const u8 sMoveDescription_Block[] = _(
    "Prevents the foe from fleeing or\n"
    "switching out."
    );
static const u8 sMoveDescription_Howl[] = _(
    "Howls to raise the Attack of the\n"
    "user and its ally by 1 stage."
    );
static const u8 sMoveDescription_DragonClaw[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_FrenzyPlant[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_BulkUp[] = _(
    "Raises the user's Attack and Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Bounce[] = _(
    "Springs up on turn 1, untargetable,\n"
    "then strikes. 30% paralyze."
    );
static const u8 sMoveDescription_MudShot[] = _(
    "Lowers the foe's Speed by 1 stage."
    );
static const u8 sMoveDescription_PoisonTail[] = _(
    "High critical-hit ratio. Has a 10%\n"
    "chance to poison the foe."
    );
static const u8 sMoveDescription_Covet[] = _(
    "Steals the foe's held item if the\n"
    "user has none."
    );
static const u8 sMoveDescription_VoltTackle[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_MagicalLeaf[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_WaterSport[] = _(
    "For 5 turns, weakens all Fire-type\n"
    "moves."
    );
static const u8 sMoveDescription_CalmMind[] = _(
    "Raises the user's Sp. Atk and Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_LeafBlade[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DragonDance[] = _(
    "Raises the user's Attack and Speed\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_RockBlast[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_ShockWave[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_WaterPulse[] = _(
    "Has a 20% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_DoomDesire[] = _(
    "Strikes 2 turns after this move is\n"
    "used."
    );
static const u8 sMoveDescription_PsychoBoost[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_Roost[] = _(
    "Restores 1/2 of max HP. The user\n"
    "loses its Flying type this turn."
    );
static const u8 sMoveDescription_Gravity[] = _(
    "For 5 turns, grounds all Pokémon and\n"
    "raises accuracy by 67%."
    );
static const u8 sMoveDescription_MiracleEye[] = _(
    "Lets Psychic moves hit Dark-types.\n"
    "User ignores evasion boosts."
    );
static const u8 sMoveDescription_WakeUpSlap[] = _(
    "Doubles against a sleeping foe, but\n"
    "wakes it up."
    );
static const u8 sMoveDescription_HammerArm[] = _(
    "Lowers the user's Speed by 1 stage."
    );
static const u8 sMoveDescription_GyroBall[] = _(
    "The slower the user is than the foe,\n"
    "the greater the power."
    );
static const u8 sMoveDescription_HealingWish[] = _(
    "The user faints; the next Pokémon is\n"
    "fully healed."
    );
static const u8 sMoveDescription_Brine[] = _(
    "Doubles in power if the foe is at\n"
    "half HP or less."
    );
static const u8 sMoveDescription_NaturalGift[] = _(
    "Its type and power depend on the\n"
    "held Berry, which is preserved."
    );
static const u8 sMoveDescription_Feint[] = _(
    "Lifts the foe's protection. Moves\n"
    "first with +2 priority."
    );
static const u8 sMoveDescription_Pluck[] = _(
    "Eats the foe's Berry to use its\n"
    "effect."
    );
static const u8 sMoveDescription_Tailwind[] = _(
    "Doubles the Speed of the user's\n"
    "party for 4 turns."
    );
static const u8 sMoveDescription_Acupressure[] = _(
    "Raises a random stat of the user by\n"
    "2 stages."
    );
static const u8 sMoveDescription_MetalBurst[] = _(
    "Returns 50% more than the damage\n"
    "taken from the last hit."
    );
static const u8 sMoveDescription_UTurn[] = _(
    "Deals damage, then the user switches\n"
    "out."
    );
static const u8 sMoveDescription_CloseCombat[] = _(
    "Lowers the user's Defense and Sp.\n"
    "Def by 1 stage."
    );
static const u8 sMoveDescription_Payback[] = _(
    "Doubles in power if the user moves\n"
    "after the foe."
    );
static const u8 sMoveDescription_Assurance[] = _(
    "Doubles in power if the foe was\n"
    "already hurt this turn."
    );
static const u8 sMoveDescription_Embargo[] = _(
    "Prevents the foe from using items for\n"
    "5 turns."
    );
static const u8 sMoveDescription_Fling[] = _(
    "Throws the held item; its power\n"
    "depends on the item."
    );
static const u8 sMoveDescription_PsychoShift[] = _(
    "Transfers the user's status condition\n"
    "to the foe."
    );
static const u8 sMoveDescription_TrumpCard[] = _(
    "The less PP this move has left, the\n"
    "greater the power."
    );
static const u8 sMoveDescription_HealBlock[] = _(
    "Prevents foes from recovering HP for\n"
    "5 turns."
    );
static const u8 sMoveDescription_WringOut[] = _(
    "The higher the foe's HP, the greater\n"
    "the power."
    );
static const u8 sMoveDescription_PowerTrick[] = _(
    "Swaps the user's Attack and Defense\n"
    "stats."
    );
static const u8 sMoveDescription_GastroAcid[] = _(
    "Suppresses the foe's Ability."
    );
static const u8 sMoveDescription_LuckyChant[] = _(
    "Protects the user's party from\n"
    "critical hits for 5 turns."
    );
static const u8 sMoveDescription_MeFirst[] = _(
    "Uses the foe's move first, boosted by\n"
    "50%. Always hits."
    );
static const u8 sMoveDescription_Copycat[] = _(
    "Copies and uses the most recently\n"
    "used move."
    );
static const u8 sMoveDescription_PowerSwap[] = _(
    "Swaps Attack and Sp. Atk stat\n"
    "changes with the foe."
    );
static const u8 sMoveDescription_GuardSwap[] = _(
    "Swaps Defense and Sp. Def stat\n"
    "changes with the foe."
    );
static const u8 sMoveDescription_Punishment[] = _(
    "Gains 20 power for every raised stat\n"
    "stage the foe has."
    );
static const u8 sMoveDescription_LastResort[] = _(
    "Usable only after all the user's\n"
    "other moves have been used."
    );
static const u8 sMoveDescription_WorrySeed[] = _(
    "Changes the foe's Ability to\n"
    "Insomnia."
    );
static const u8 sMoveDescription_SuckerPunch[] = _(
    "Only works if the foe is attacking.\n"
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_ToxicSpikes[] = _(
    "Poisons grounded foes switching in; 2\n"
    "layers deliver bad poison."
    );
static const u8 sMoveDescription_HeartSwap[] = _(
    "Swaps all stat changes with the foe."
    );
static const u8 sMoveDescription_AquaRing[] = _(
    "Restores 1/16 of max HP each turn."
    );
static const u8 sMoveDescription_MagnetRise[] = _(
    "The user is immune to Ground-type\n"
    "moves for 5 turns."
    );
static const u8 sMoveDescription_FlareBlitz[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_ForcePalm[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_AuraSphere[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_RockPolish[] = _(
    "Raises the user's Speed by 2 stages."
    );
static const u8 sMoveDescription_PoisonJab[] = _(
    "Has a 30% chance to poison the foe."
    );
static const u8 sMoveDescription_DarkPulse[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_NightSlash[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_AquaTail[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SeedBomb[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_AirSlash[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_XScissor[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_BugBuzz[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_DragonPulse[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DragonRush[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_PowerGem[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DrainPunch[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_VacuumWave[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_FocusBlast[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_EnergyBall[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_BraveBird[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_EarthPower[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Switcheroo[] = _(
    "Swaps held items with the foe."
    );
static const u8 sMoveDescription_GigaImpact[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_NastyPlot[] = _(
    "Raises the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_BulletPunch[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_Avalanche[] = _(
    "Moves last. Doubles in power if the\n"
    "user was hit first."
    );
static const u8 sMoveDescription_IceShard[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_ShadowClaw[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ThunderFang[] = _(
    "10% chance each to paralyze or\n"
    "flinch the foe."
    );
static const u8 sMoveDescription_IceFang[] = _(
    "10% chance each to freeze or make\n"
    "the foe flinch."
    );
static const u8 sMoveDescription_FireFang[] = _(
    "10% chance each to burn or flinch\n"
    "the foe."
    );
static const u8 sMoveDescription_ShadowSneak[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_MudBomb[] = _(
    "Has a 30% chance to lower accuracy\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_PsychoCut[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ZenHeadbutt[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_MirrorShot[] = _(
    "Has a 30% chance to lower accuracy\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_FlashCannon[] = _(
    "Has a 10% chance to lower Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_RockClimb[] = _(
    "Has a 20% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_Defog[] = _(
    "Removes hazards and screens. Lowers\n"
    "the foe's evasiveness by 1 stage."
    );
static const u8 sMoveDescription_TrickRoom[] = _(
    "For 5 turns, slower Pokémon move\n"
    "first."
    );
static const u8 sMoveDescription_DracoMeteor[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_Discharge[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe. Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_LavaPlume[] = _(
    "Has a 30% chance to burn the foe.\n"
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_LeafStorm[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_PowerWhip[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_RockWrecker[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_CrossPoison[] = _(
    "High critical-hit ratio. Has a 10%\n"
    "chance to poison the foe."
    );
static const u8 sMoveDescription_GunkShot[] = _(
    "Has a 30% chance to poison the foe."
    );
static const u8 sMoveDescription_IronHead[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_MagnetBomb[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_StoneEdge[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Captivate[] = _(
    "Lowers opposite-gender foes' Sp. Atk\n"
    "by 2 stages."
    );
static const u8 sMoveDescription_StealthRock[] = _(
    "Foes switching in take 1/8 base,\n"
    "1/32 to 1/2 by Rock weakness."
    );
static const u8 sMoveDescription_GrassKnot[] = _(
    "The heavier the foe, the greater the\n"
    "power."
    );
static const u8 sMoveDescription_Chatter[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_Judgment[] = _(
    "The type varies with the kind\n" 
    "of Plate held."
    );
static const u8 sMoveDescription_BugBite[] = _(
    "Eats the foe's Berry to use its\n"
    "effect."
    );
static const u8 sMoveDescription_ChargeBeam[] = _(
    "Has a 70% chance to raise the user's\n"
    "Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_WoodHammer[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_AquaJet[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_AttackOrder[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DefendOrder[] = _(
    "Raises the user's Defense and Sp. Def\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_HealOrder[] = _(
    "Restores up to 1/2 of the user's max\n"
    "HP."
    );
static const u8 sMoveDescription_HeadSmash[] = _(
    "The user takes 1/2 recoil damage."
    );
static const u8 sMoveDescription_DoubleHit[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_RoarOfTime[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_SpacialRend[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_LunarDance[] = _(
    "The user faints; the next Pokémon is\n"
    "healed and its PP restored."
    );
static const u8 sMoveDescription_CrushGrip[] = _(
    "The higher the foe's HP, the greater\n"
    "the power."
    );
static const u8 sMoveDescription_MagmaStorm[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_DarkVoid[] = _(
    "Puts both foes to sleep."
    );
static const u8 sMoveDescription_SeedFlare[] = _(
    "Has a 40% chance to lower Sp. Def\n"
    "by 2 stages."
    );
static const u8 sMoveDescription_OminousWind[] = _(
    "Has a 10% chance to raise all of\n"
    "the user's stats."
    );
static const u8 sMoveDescription_ShadowForce[] = _(
    "Vanishes on turn 1, then strikes on\n"
    "turn 2 through protection."
    );
static const u8 sMoveDescription_HoneClaws[] = _(
    "Raises the user's Attack and\n"
    "accuracy by 1 stage."
    );
static const u8 sMoveDescription_WideGuard[] = _(
    "Protects the user's side from\n"
    "multi-target moves this turn."
    );
static const u8 sMoveDescription_GuardSplit[] = _(
    "Averages the user's and foe's Defense\n"
    "and Sp. Def."
    );
static const u8 sMoveDescription_PowerSplit[] = _(
    "Averages the user's and foe's Attack\n"
    "and Sp. Atk."
    );
static const u8 sMoveDescription_WonderRoom[] = _(
    "For 5 turns, every Pokémon's Defense\n"
    "and Sp. Def are swapped."
    );
static const u8 sMoveDescription_Psyshock[] = _(
    "Inflicts Special damage based on the\n"
    "target's Defense, not Sp. Def."
    );
static const u8 sMoveDescription_Venoshock[] = _(
    "Doubles in power if the foe is\n"
    "poisoned."
    );
static const u8 sMoveDescription_Autotomize[] = _(
    "Raises the user's Speed by 2 stages\n"
    "and reduces its weight."
    );
static const u8 sMoveDescription_RagePowder[] = _(
    "Draws all foes' attacks onto the user\n"
    "this turn."
    );
static const u8 sMoveDescription_Telekinesis[] = _(
    "For 3 turns, the foe floats and is\n"
    "easy to hit."
    );
static const u8 sMoveDescription_MagicRoom[] = _(
    "For 5 turns, all held items lose\n"
    "their effects."
    );
static const u8 sMoveDescription_SmackDown[] = _(
    "Deals damage and grounds the foe."
    );
static const u8 sMoveDescription_StormThrow[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_FlameBurst[] = _(
    "Also hits Pokémon next to the\n"
    "target."
    );
static const u8 sMoveDescription_SludgeWave[] = _(
    "Has a 10% chance to poison the foe.\n"
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_QuiverDance[] = _(
    "Raises the user's Sp. Atk, Sp. Def\n"
    "and Speed by 1 stage."
    );
static const u8 sMoveDescription_HeavySlam[] = _(
    "The more the user outweighs the foe,\n"
    "the greater the power."
    );
static const u8 sMoveDescription_Synchronoise[] = _(
    "Damages all Pokémon that share a\n"
    "type with the user."
    );
static const u8 sMoveDescription_ElectroBall[] = _(
    "The faster the user is than the foe,\n"
    "the greater the power."
    );
static const u8 sMoveDescription_Soak[] = _(
    "Changes the foe's type to pure\n"
    "Water."
    );
static const u8 sMoveDescription_FlameCharge[] = _(
    "Raises the user's Speed by 1 stage."
    );
static const u8 sMoveDescription_Coil[] = _(
    "Raises the user's Attack, Defense and\n"
    "accuracy by 1 stage."
    );
static const u8 sMoveDescription_LowSweep[] = _(
    "Lowers the foe's Speed by 1 stage."
    );
static const u8 sMoveDescription_AcidSpray[] = _(
    "Lowers the foe's Sp. Def by 2\n"
    "stages."
    );
static const u8 sMoveDescription_FoulPlay[] = _(
    "Uses the foe's Attack to deal\n"
    "damage."
    );
static const u8 sMoveDescription_SimpleBeam[] = _(
    "Changes the foe's Ability to Simple."
    );
static const u8 sMoveDescription_Entrainment[] = _(
    "Changes the foe's Ability to match\n"
    "the user's."
    );
static const u8 sMoveDescription_AfterYou[] = _(
    "Lets the target move next, out of\n"
    "turn order."
    );
static const u8 sMoveDescription_Round[] = _(
    "An ally can join in. Doubles if used\n"
    "after another Round."
    );
static const u8 sMoveDescription_EchoedVoice[] = _(
    "Gains 40 BP with each consecutive\n"
    "use, up to 200 BP."
    );
static const u8 sMoveDescription_ChipAway[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_ClearSmog[] = _(
    "Resets the foe's stat changes."
    );
static const u8 sMoveDescription_StoredPower[] = _(
    "Gains 20 power for every raised stat\n"
    "stage the user has."
    );
static const u8 sMoveDescription_QuickGuard[] = _(
    "Protects the user's side from priority\n"
    "moves this turn."
    );
static const u8 sMoveDescription_AllySwitch[] = _(
    "The user swaps places with its ally."
    );
static const u8 sMoveDescription_Scald[] = _(
    "Has a 30% chance to burn the foe."
    );
static const u8 sMoveDescription_ShellSmash[] = _(
    "Raises Atk, Sp. Atk, Speed by 2\n"
    "stages; lowers Def, Sp. Def by 1."
    );
static const u8 sMoveDescription_HealPulse[] = _(
    "Restores 1/2 of the target's max HP."
    );
static const u8 sMoveDescription_Hex[] = _(
    "Doubles in power if the foe has a\n"
    "status condition."
    );
static const u8 sMoveDescription_SkyDrop[] = _(
    "Takes the foe up on turn 1, drops it\n"
    "for damage on turn 2."
    );
static const u8 sMoveDescription_ShiftGear[] = _(
    "Raises the user's Attack by 1 stage\n"
    "and Speed by 2 stages."
    );
static const u8 sMoveDescription_CircleThrow[] = _(
    "Deals damage and forces the foe to\n"
    "switch out."
    );
static const u8 sMoveDescription_Incinerate[] = _(
    "Burns the foe's Berry or Gem. Hits\n"
    "both foes."
    );
static const u8 sMoveDescription_Quash[] = _(
    "Forces the target to move last this\n"
    "turn."
    );
static const u8 sMoveDescription_Acrobatics[] = _(
    "Doubles in power if the user has no\n"
    "item."
    );
static const u8 sMoveDescription_ReflectType[] = _(
    "Changes the user's type to match the\n"
    "foe's."
    );
static const u8 sMoveDescription_Retaliate[] = _(
    "Doubles in power if an ally fainted\n"
    "last turn."
    );
static const u8 sMoveDescription_FinalGambit[] = _(
    "Deals damage equal to the user's\n"
    "current HP, then the user faints."
    );
static const u8 sMoveDescription_Bestow[] = _(
    "Gives the user's held item to a foe\n"
    "that has none."
    );
static const u8 sMoveDescription_Inferno[] = _(
    "Burns the foe."
    );
static const u8 sMoveDescription_WaterPledge[] = _(
    "Deals damage; pairs with another\n"
    "Pledge for a field effect."
    );
static const u8 sMoveDescription_FirePledge[] = _(
    "Deals damage; pairs with another\n"
    "Pledge for a field effect."
    );
static const u8 sMoveDescription_GrassPledge[] = _(
    "Deals damage; pairs with another\n"
    "Pledge for a field effect."
    );
static const u8 sMoveDescription_VoltSwitch[] = _(
    "Deals damage, then the user switches\n"
    "out."
    );
static const u8 sMoveDescription_StruggleBug[] = _(
    "Lowers the foe's Sp. Atk by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_Bulldoze[] = _(
    "Hits all adjacent Pokémon and lowers\n"
    "their Speed by 1 stage."
    );
static const u8 sMoveDescription_FrostBreath[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DragonTail[] = _(
    "Deals damage and forces the foe to\n"
    "switch out."
    );
static const u8 sMoveDescription_WorkUp[] = _(
    "Raises the user's Attack and Sp. Atk\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Electroweb[] = _(
    "Lowers the foe's Speed by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_WildCharge[] = _(
    "The user takes 1/4 recoil damage."
    );
static const u8 sMoveDescription_DrillRun[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DualChop[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_HeartStamp[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_HornLeech[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_SacredSword[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_RazorShell[] = _(
    "Has a 50% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_HeatCrash[] = _(
    "The more the user outweighs the foe,\n"
    "the greater the power."
    );
static const u8 sMoveDescription_LeafTornado[] = _(
    "Has a 50% chance to lower accuracy\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Steamroller[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_CottonGuard[] = _(
    "Raises the user's Defense by 3\n"
    "stages."
    );
static const u8 sMoveDescription_NightDaze[] = _(
    "Has a 40% chance to lower accuracy\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Psystrike[] = _(
    "Inflicts Special damage based on the\n"
    "target's Defense, not Sp. Def."
    );
static const u8 sMoveDescription_TailSlap[] = _(
    "Hits 2 to 5 times."
    );
static const u8 sMoveDescription_Hurricane[] = _(
    "Has a 30% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_HeadCharge[] = _(
    "The user takes 1/4 recoil damage."
    );
static const u8 sMoveDescription_GearGrind[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_SearingShot[] = _(
    "Has a 30% chance to burn the foe.\n"
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_TechnoBlast[] = _(
    "The type varies with the kind\n" 
    "of Drive held."
    );
static const u8 sMoveDescription_RelicSong[] = _(
    "Has a 10% chance to put the foe to\n"
    "sleep. Hits both foes."
    );
static const u8 sMoveDescription_SecretSword[] = _(
    "Inflicts Special damage based on the\n"
    "target's Defense, not Sp. Def."
    );
static const u8 sMoveDescription_Glaciate[] = _(
    "Lowers the foe's Speed by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_BoltStrike[] = _(
    "Has a 20% chance to paralyze the\n"
    "foe."
    );
static const u8 sMoveDescription_BlueFlare[] = _(
    "Has a 20% chance to burn the foe."
    );
static const u8 sMoveDescription_FieryDance[] = _(
    "Has a 50% chance to raise the user's\n"
    "Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_FreezeShock[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. 30% chance to paralyze."
    );
static const u8 sMoveDescription_IceBurn[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. 30% chance to burn."
    );
static const u8 sMoveDescription_Snarl[] = _(
    "Lowers the foe's Sp. Atk by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_IcicleCrash[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_VCreate[] = _(
    "Lowers the user's Defense, Sp. Def\n"
    "and Speed by 1 stage."
    );
static const u8 sMoveDescription_FusionFlare[] = _(
    "Summons a fireball. Works well\n" 
    "with a thunderbolt."
    );
static const u8 sMoveDescription_FusionBolt[] = _(
    "Summons a thunderbolt. Works\n" 
    "well with a fireball."
    );
static const u8 sMoveDescription_FlyingPress[] = _(
    "Deals both Fighting and Flying-type\n"
    "damage."
    );
static const u8 sMoveDescription_MatBlock[] = _(
    "Protects the user's side from damage.\n"
    "Only on the first turn."
    );
static const u8 sMoveDescription_Belch[] = _(
    "Uses up the user's held Berry to\n"
    "attack. Fails without one."
    );
static const u8 sMoveDescription_Rototiller[] = _(
    "Raises the Attack and Sp. Atk of all\n"
    "Grass-types by 1 stage."
    );
static const u8 sMoveDescription_StickyWeb[] = _(
    "Lowers grounded foes' Speed by 1\n"
    "stage on switch-in."
    );
static const u8 sMoveDescription_FellStinger[] = _(
    "Raises the user's Attack by 3 stages\n"
    "if it knocks out the foe."
    );
static const u8 sMoveDescription_PhantomForce[] = _(
    "Vanishes on turn 1, then strikes on\n"
    "turn 2 through protection."
    );
static const u8 sMoveDescription_TrickOrTreat[] = _(
    "Adds the Ghost type to the foe."
    );
static const u8 sMoveDescription_NobleRoar[] = _(
    "Lowers the foe's Attack and Sp. Atk\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_IonDeluge[] = _(
    "Turns Normal-type moves into\n"
    "Electric-type this turn."
    );
static const u8 sMoveDescription_ParabolicCharge[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_ForestsCurse[] = _(
    "Adds the Grass type to the foe."
    );
static const u8 sMoveDescription_PetalBlizzard[] = _(
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_FreezeDry[] = _(
    "Super effective on Water-types. 10%\n"
    "chance to freeze the foe."
    );
static const u8 sMoveDescription_DisarmingVoice[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_PartingShot[] = _(
    "Lowers the foe's Attack and Sp. Atk\n"
    "by 1 stage, then switches out."
    );
static const u8 sMoveDescription_TopsyTurvy[] = _(
    "Reverses all of the target's stat\n"
    "changes."
    );
static const u8 sMoveDescription_DrainingKiss[] = _(
    "Heals the user by 3/4 of the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_CraftyShield[] = _(
    "Protects the user's side from status\n"
    "moves this turn."
    );
static const u8 sMoveDescription_FlowerShield[] = _(
    "Raises the Defense of all\n"
    "Grass-types by 1 stage."
    );
static const u8 sMoveDescription_GrassyTerrain[] = _(
    "For 5 turns, heals grounded Pokémon\n"
    "1/16 a turn; Grass moves +30%."
    );
static const u8 sMoveDescription_MistyTerrain[] = _(
    "For 5 turns, grounded Pokémon resist\n"
    "status and confusion; halves Dragon."
    );
static const u8 sMoveDescription_Electrify[] = _(
    "Makes the foe's move Electric-type\n"
    "this turn."
    );
static const u8 sMoveDescription_PlayRough[] = _(
    "Has a 10% chance to lower Attack by\n"
    "1 stage."
    );
static const u8 sMoveDescription_FairyWind[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Moonblast[] = _(
    "Has a 10% chance to lower Sp. Atk\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Boomburst[] = _(
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_FairyLock[] = _(
    "Prevents all Pokémon from escaping\n"
    "next turn."
    );
static const u8 sMoveDescription_KingsShield[] = _(
    "Blocks damage; lowers the foe's\n"
    "Attack by 2 stages on contact."
    );
static const u8 sMoveDescription_PlayNice[] = _(
    "Lowers the foe's Attack by 1 stage."
    );
static const u8 sMoveDescription_Confide[] = _(
    "Lowers the foe's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_DiamondStorm[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_SteamEruption[] = _(
    "Has a 30% chance to burn the foe."
    );
static const u8 sMoveDescription_HyperspaceHole[] = _(
    "Lifts the foe's protection."
    );
static const u8 sMoveDescription_WaterShuriken[] = _(
    "Hits 2 to 5 times. Moves first with\n"
    "+1 priority."
    );
static const u8 sMoveDescription_MysticalFire[] = _(
    "Lowers the foe's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_SpikyShield[] = _(
    "Protects the user; a contact\n"
    "attacker loses 1/8 of its max HP."
    );
static const u8 sMoveDescription_AromaticMist[] = _(
    "Raises an ally's Sp. Def by 1 stage."
    );
static const u8 sMoveDescription_EerieImpulse[] = _(
    "Lowers the foe's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_VenomDrench[] = _(
    "Lowers poisoned foes' Attack, Sp. Atk\n"
    "and Speed by 1 stage."
    );
static const u8 sMoveDescription_Powder[] = _(
    "This turn, a foe's Fire move fails\n"
    "and costs it 1/4 max HP."
    );
static const u8 sMoveDescription_Geomancy[] = _(
    "Charges on turn 1, then raises Sp.\n"
    "Atk, Sp. Def and Speed by 2 stages."
    );
static const u8 sMoveDescription_MagneticFlux[] = _(
    "Raises Def and Sp. Def by 1 stage\n"
    "for those with Plus or Minus."
    );
static const u8 sMoveDescription_HappyHour[] = _(
    "Doubles the amount of Prize\n" 
    "Money received."
    );
static const u8 sMoveDescription_ElectricTerrain[] = _(
    "For 5 turns, Electric moves +30%;\n"
    "grounded Pokémon can't sleep."
    );
static const u8 sMoveDescription_DazzlingGleam[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_Celebrate[] = _(
    "Congratulates you on your\n" 
    "special day."
    );
static const u8 sMoveDescription_HoldHands[] = _(
    "Has no effect in battle."
    );
static const u8 sMoveDescription_BabyDollEyes[] = _(
    "Lowers the foe's Attack by 1 stage.\n"
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_Nuzzle[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_HoldBack[] = _(
    "Always leaves the foe with at least\n"
    "1 HP."
    );
static const u8 sMoveDescription_Infestation[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_PowerUpPunch[] = _(
    "Raises the user's Attack by 1 stage."
    );
static const u8 sMoveDescription_OblivionWing[] = _(
    "Heals the user by 3/4 of the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_ThousandArrows[] = _(
    "Can hit Flying foes, then\n" 
    "knocks them to the ground."
    );
static const u8 sMoveDescription_ThousandWaves[] = _(
    "Prevents the foe from escaping. Hits\n"
    "both foes."
    );
static const u8 sMoveDescription_LandsWrath[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_LightOfRuin[] = _(
    "The user takes 1/2 recoil damage."
    );
static const u8 sMoveDescription_OriginPulse[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_PrecipiceBlades[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_DragonAscent[] = _(
    "Lowers the user's Defense and Sp.\n"
    "Def by 1 stage."
    );
static const u8 sMoveDescription_HyperspaceFury[] = _(
    "Ignores protection. Lowers the user's\n"
    "Defense by 1 stage."
    );
static const u8 sMoveDescription_ShoreUp[] = _(
    "Restores 1/2 of max HP, or 2/3 in a\n"
    "sandstorm."
    );
static const u8 sMoveDescription_FirstImpression[] = _(
    "Only works on the first turn. Moves\n"
    "first with +2 priority."
    );
static const u8 sMoveDescription_BanefulBunker[] = _(
    "Protects the user; poisons the foe if\n"
    "it makes contact."
    );
static const u8 sMoveDescription_SpiritShackle[] = _(
    "Prevents the foe from escaping."
    );
static const u8 sMoveDescription_DarkestLariat[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SparklingAria[] = _(
    "Cures Sleep. Hits all adjacent\n"
    "Pokémon."
    );
static const u8 sMoveDescription_IceHammer[] = _(
    "Lowers the user's Speed by 1 stage."
    );
static const u8 sMoveDescription_FloralHealing[] = _(
    "Restores 1/2 of an ally's max HP, or\n"
    "2/3 on Grassy Terrain."
    );
static const u8 sMoveDescription_HighHorsepower[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_StrengthSap[] = _(
    "Heals by the foe's Attack, then\n"
    "lowers its Attack by 1 stage."
    );
static const u8 sMoveDescription_SolarBlade[] = _(
    "Charges on turn 1, attacks on turn\n"
    "2. Attacks at once in sun."
    );
static const u8 sMoveDescription_Leafage[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Spotlight[] = _(
    "Forces the target's foes to attack it\n"
    "this turn."
    );
static const u8 sMoveDescription_ToxicThread[] = _(
    "Poisons the foe and lowers its Speed\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_LaserFocus[] = _(
    "The user's next move is a guaranteed\n"
    "critical hit."
    );
static const u8 sMoveDescription_GearUp[] = _(
    "Raises the Attack and Sp. Atk of\n"
    "Plus/Minus allies by 1 stage."
    );
static const u8 sMoveDescription_ThroatChop[] = _(
    "Blocks the foe's sound moves for 2\n"
    "turns."
    );
static const u8 sMoveDescription_PollenPuff[] = _(
    "Damages a foe, or restores 1/2 of an\n"
    "ally's max HP."
    );
static const u8 sMoveDescription_AnchorShot[] = _(
    "Prevents the foe from escaping."
    );
static const u8 sMoveDescription_PsychicTerrain[] = _(
    "For 5 turns, Psychic moves +30%;\n"
    "blocks priority on the grounded."
    );
static const u8 sMoveDescription_Lunge[] = _(
    "Lowers the foe's Attack by 1 stage."
    );
static const u8 sMoveDescription_FireLash[] = _(
    "Lowers the foe's Defense by 1 stage."
    );
static const u8 sMoveDescription_PowerTrip[] = _(
    "Gains 20 power for every raised stat\n"
    "stage the user has."
    );
static const u8 sMoveDescription_BurnUp[] = _(
    "Fully removes the user's Fire type\n"
    "after it attacks."
    );
static const u8 sMoveDescription_SpeedSwap[] = _(
    "Swaps Speed stats with the foe."
    );
static const u8 sMoveDescription_SmartStrike[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Purify[] = _(
    "Cures the foe's status; if it does,\n"
    "restores 1/2 max HP."
    );
static const u8 sMoveDescription_RevelationDance[] = _(
    "Its type matches the user's primary\n"
    "type."
    );
static const u8 sMoveDescription_CoreEnforcer[] = _(
    "Nullifies the foe's Ability if it has\n"
    "moved."
    );
static const u8 sMoveDescription_TropKick[] = _(
    "Lowers the foe's Attack by 1 stage."
    );
static const u8 sMoveDescription_Instruct[] = _(
    "Forces the target to repeat its last\n"
    "move."
    );
static const u8 sMoveDescription_BeakBlast[] = _(
    "Burns any foe that makes contact\n"
    "before the user attacks."
    );
static const u8 sMoveDescription_ClangingScales[] = _(
    "Lowers the user's Defense by 1\n"
    "stage. Hits both foes."
    );
static const u8 sMoveDescription_DragonHammer[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_BrutalSwing[] = _(
    "Hits all adjacent Pokémon."
    );
static const u8 sMoveDescription_AuroraVeil[] = _(
    "Halves physical and special damage\n"
    "to the user's side for 5 turns."
    );
static const u8 sMoveDescription_ShellTrap[] = _(
    "Fails unless a foe first hits the\n"
    "user with a physical move."
    );
static const u8 sMoveDescription_FleurCannon[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages."
    );
static const u8 sMoveDescription_PsychicFangs[] = _(
    "Breaks Light Screen and Reflect."
    );
static const u8 sMoveDescription_StompingTantrum[] = _(
    "Doubles in power if the user's last\n"
    "move failed."
    );
static const u8 sMoveDescription_ShadowBone[] = _(
    "Has a 20% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_Accelerock[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_Liquidation[] = _(
    "Has a 20% chance to lower Defense\n"
    "by 1 stage."
    );
static const u8 sMoveDescription_PrismaticLaser[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_SpectralThief[] = _(
    "Steals the foe's stat boosts."
    );
static const u8 sMoveDescription_SunsteelStrike[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MoongeistBeam[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TearfulLook[] = _(
    "Lowers the foe's Attack and Sp. Atk\n"
    "by 1 stage. Never misses."
    );
static const u8 sMoveDescription_ZingZap[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_NaturesMadness[] = _(
    "Halves the foe's current HP."
    );
static const u8 sMoveDescription_MultiAttack[] = _(
    "An attack that changes with\n" 
    "Memories."
    );
static const u8 sMoveDescription_MindBlown[] = _(
    "The user loses 1/2 of its max HP."
    );
static const u8 sMoveDescription_PlasmaFists[] = _(
    "Turns Normal moves Electric this\n"
    "turn."
    );
static const u8 sMoveDescription_PhotonGeyser[] = _(
    "Uses the user's higher of Attack or\n"
    "Sp. Atk."
    );
static const u8 sMoveDescription_ZippyZap[] = _(
    "Raises the user's evasiveness by 1\n"
    "stage. Moves first with +2 priority."
    );
static const u8 sMoveDescription_SplishySplash[] = _(
    "Has a 30% chance to paralyze the\n"
    "foe. Hits both foes."
    );
static const u8 sMoveDescription_FloatyFall[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_PikaPapow[] = _(
    "Power rises with friendship. Never\n"
    "misses."
    );
static const u8 sMoveDescription_BouncyBubble[] = _(
    "Heals the user by all the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_BuzzyBuzz[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_SizzlySlide[] = _(
    "Burns the foe."
    );
static const u8 sMoveDescription_GlitzyGlow[] = _(
    "Also sets up Light Screen."
    );
static const u8 sMoveDescription_BaddyBad[] = _(
    "Also sets up Reflect."
    );
static const u8 sMoveDescription_SappySeed[] = _(
    "Plants a seed that drains HP each\n"
    "turn."
    );
static const u8 sMoveDescription_FreezyFrost[] = _(
    "Resets all stat changes."
    );
static const u8 sMoveDescription_SparklySwirl[] = _(
    "Cures status of the user's party."
    );
static const u8 sMoveDescription_VeeveeVolley[] = _(
    "Power rises with friendship. Never\n"
    "misses."
    );
static const u8 sMoveDescription_DoubleIronBash[] = _(
    "Hits twice. Has a 30% chance to\n"
    "make the foe flinch."
    );
static const u8 sMoveDescription_DynamaxCannon[] = _(
    "Unleashes core energy. 2x\n" 
    "against Dynamaxed foes."
    );
static const u8 sMoveDescription_SnipeShot[] = _(
    "Ignores effects that redirect\n"
    "attacks."
    );
static const u8 sMoveDescription_JawLock[] = _(
    "Neither Pokémon can escape."
    );
static const u8 sMoveDescription_StuffCheeks[] = _(
    "Eats the user's Berry and raises\n"
    "Defense by 2 stages."
    );
static const u8 sMoveDescription_NoRetreat[] = _(
    "Raises all of the user's stats by 1\n"
    "stage, but prevents escape."
    );
static const u8 sMoveDescription_TarShot[] = _(
    "Lowers the foe's Speed by 1 stage\n"
    "and doubles Fire-type damage to it."
    );
static const u8 sMoveDescription_MagicPowder[] = _(
    "Changes the foe's type to pure\n"
    "Psychic."
    );
static const u8 sMoveDescription_DragonDarts[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_Teatime[] = _(
    "Makes all Pokémon on the field eat\n"
    "their Berries."
    );
static const u8 sMoveDescription_Octolock[] = _(
    "Traps the foe, lowering its Def and\n"
    "Sp. Def by 1 stage each turn."
    );
static const u8 sMoveDescription_BoltBeak[] = _(
    "Doubles in power if the user moves\n"
    "before the foe."
    );
static const u8 sMoveDescription_FishiousRend[] = _(
    "Doubles in power if the user moves\n"
    "before the foe."
    );
static const u8 sMoveDescription_CourtChange[] = _(
    "Swaps the effects on each side of\n"
    "the field."
    );
static const u8 sMoveDescription_ClangorousSoul[] = _(
    "Uses 1/3 of max HP to raise all of\n"
    "the user's stats by 1 stage."
    );
static const u8 sMoveDescription_BodyPress[] = _(
    "Uses the user's Defense to deal\n"
    "damage."
    );
static const u8 sMoveDescription_Decorate[] = _(
    "Raises the target's Attack and Sp.\n"
    "Atk by 2 stages."
    );
static const u8 sMoveDescription_DrumBeating[] = _(
    "Lowers the foe's Speed by 1 stage."
    );
static const u8 sMoveDescription_SnapTrap[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_PyroBall[] = _(
    "Has a 10% chance to burn the foe."
    );
static const u8 sMoveDescription_BehemothBlade[] = _(
    "Strikes as a sword. Deals 2x\n" 
    "damage to Dynamaxed foes."
    );
static const u8 sMoveDescription_BehemothBash[] = _(
    "Attacks as a shield. Deals 2x\n" 
    "damage to Dynamaxed foes."
    );
static const u8 sMoveDescription_AuraWheel[] = _(
    "Raises the user's Speed by 1 stage.\n"
    "Type varies by form."
    );
static const u8 sMoveDescription_BreakingSwipe[] = _(
    "Lowers the foe's Attack by 1 stage.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_BranchPoke[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Overdrive[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_AppleAcid[] = _(
    "Lowers the foe's Sp. Def by 1 stage."
    );
static const u8 sMoveDescription_GravApple[] = _(
    "Lowers the foe's Defense by 1 stage.\n"
    "Stronger under Gravity."
    );
static const u8 sMoveDescription_SpiritBreak[] = _(
    "Lowers the foe's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_StrangeSteam[] = _(
    "Has a 20% chance to confuse the\n"
    "foe."
    );
static const u8 sMoveDescription_LifeDew[] = _(
    "Restores 1/4 of the max HP of the\n"
    "user and its allies."
    );
static const u8 sMoveDescription_Obstruct[] = _(
    "Protects the user; lowers the foe's\n"
    "Defense by 2 stages on contact."
    );
static const u8 sMoveDescription_FalseSurrender[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MeteorAssault[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_Eternabeam[] = _(
    "The user must recharge next turn."
    );
static const u8 sMoveDescription_SteelBeam[] = _(
    "The user loses 1/2 of its max HP."
    );
static const u8 sMoveDescription_ExpandingForce[] = _(
    "On Psychic Terrain, gains 50% power\n"
    "and hits both foes."
    );
static const u8 sMoveDescription_SteelRoller[] = _(
    "Deals damage and removes the\n"
    "terrain. Fails without terrain."
    );
static const u8 sMoveDescription_ScaleShot[] = _(
    "Hits 2 to 5 times, then raises Speed\n"
    "and lowers Defense by 1 stage."
    );
static const u8 sMoveDescription_MeteorBeam[] = _(
    "Raises Sp. Atk by 1 stage on turn 1,\n"
    "attacks at once in sandstorm."
    );
static const u8 sMoveDescription_ShellSideArm[] = _(
    "Uses the better of physical or\n"
    "special. 20% chance to poison."
    );
static const u8 sMoveDescription_MistyExplosion[] = _(
    "The user faints. Hits all foes, 50%\n"
    "stronger on Misty Terrain."
    );
static const u8 sMoveDescription_GrassyGlide[] = _(
    "Gains +1 priority on Grassy Terrain."
    );
static const u8 sMoveDescription_RisingVoltage[] = _(
    "Base Power doubles on Electric\n"
    "Terrain."
    );
static const u8 sMoveDescription_TerrainPulse[] = _(
    "Doubles its power in terrain and its\n"
    "type changes to match it."
    );
static const u8 sMoveDescription_SkitterSmack[] = _(
    "Lowers the foe's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_BurningJealousy[] = _(
    "Burns the foe. Hits both foes."
    );
static const u8 sMoveDescription_LashOut[] = _(
    "Doubles in power if the user's stats\n"
    "fell this turn."
    );
static const u8 sMoveDescription_Poltergeist[] = _(
    "Attacks using the foe's item. Fails if\n"
    "the foe has no item."
    );
static const u8 sMoveDescription_CorrosiveGas[] = _(
    "Destroys the held items of all\n"
    "adjacent Pokémon."
    );
static const u8 sMoveDescription_Coaching[] = _(
    "Raises the Attack and Defense of the\n"
    "user's allies by 1 stage."
    );
static const u8 sMoveDescription_FlipTurn[] = _(
    "Deals damage, then the user switches\n"
    "out."
    );
static const u8 sMoveDescription_TripleAxel[] = _(
    "Hits 3 times in a row, with power\n"
    "rising each hit."
    );
static const u8 sMoveDescription_DualWingbeat[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_ScorchingSand[] = _(
    "Has a 30% chance to burn the foe."
    );
static const u8 sMoveDescription_JungleHealing[] = _(
    "Restores 1/4 max HP and cures status\n"
    "of the user and allies."
    );
static const u8 sMoveDescription_WickedBlow[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SurgingStrikes[] = _(
    "Hits 3 times."
    );
static const u8 sMoveDescription_ThunderCage[] = _(
    "Traps the foe for 4 to 5 turns,\n"
    "dealing damage each turn."
    );
static const u8 sMoveDescription_DragonEnergy[] = _(
    "The higher the user's HP, the\n"
    "greater the power. Hits both foes."
    );
static const u8 sMoveDescription_FreezingGlare[] = _(
    "Has a 10% chance to freeze the foe."
    );
static const u8 sMoveDescription_FieryWrath[] = _(
    "Has a 20% chance to make the foe\n"
    "flinch. Hits both foes."
    );
static const u8 sMoveDescription_ThunderousKick[] = _(
    "Lowers the foe's Defense by 1 stage."
    );
static const u8 sMoveDescription_GlacialLance[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_AstralBarrage[] = _(
    "Hits both foes."
    );
static const u8 sMoveDescription_EerieSpell[] = _(
    "Cuts 3 PP from the foe's last move."
    );
static const u8 sMoveDescription_DireClaw[] = _(
    "Has a 30% chance to poison,\n"
    "paralyze, or make the foe sleep."
    );
static const u8 sMoveDescription_PsyshieldBash[] = _(
    "Raises the user's Defense by 1 stage."
    );
static const u8 sMoveDescription_PowerShift[] = _(
    "The user swaps its Attack and\n"
    "Defense stats."
    );
static const u8 sMoveDescription_StoneAxe[] = _(
    "High critical-hit ratio. Sets Stealth\n"
    "Rock on the foe's side."
    );
static const u8 sMoveDescription_SpringtideStorm[] = _(
    "Has a 30% chance to lower Attack by\n"
    "1 stage. Hits both foes."
    );
static const u8 sMoveDescription_MysticalPower[] = _(
    "Raises the user's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_RagingFury[] = _(
    "Rampages 2-3 turns, then confuses\n"
    "the user."
    );
static const u8 sMoveDescription_WaveCrash[] = _(
    "The user takes 1/3 recoil damage."
    );
static const u8 sMoveDescription_Chloroblast[] = _(
    "The user loses 1/2 of its max HP."
    );
static const u8 sMoveDescription_MountainGale[] = _(
    "Has a 30% chance to make the foe\n"
    "flinch."
    );
static const u8 sMoveDescription_VictoryDance[] = _(
    "Raises the user's Attack, Defense and\n"
    "Speed by 1 stage."
    );
static const u8 sMoveDescription_HeadlongRush[] = _(
    "Lowers the user's Defense and Sp.\n"
    "Def by 1 stage."
    );
static const u8 sMoveDescription_BarbBarrage[] = _(
    "Has a 50% chance to poison. Doubles\n"
    "against a poisoned foe."
    );
static const u8 sMoveDescription_EsperWing[] = _(
    "High critical-hit ratio. Raises the\n"
    "user's Speed by 1 stage."
    );
static const u8 sMoveDescription_BitterMalice[] = _(
    "Lowers the foe's Attack by 1 stage."
    );
static const u8 sMoveDescription_Shelter[] = _(
    "Raises the user's Defense by 2\n"
    "stages."
    );
static const u8 sMoveDescription_TripleArrows[] = _(
    "High crit. 50% to lower Defense by 1\n"
    "stage; 30% flinch."
    );
static const u8 sMoveDescription_InfernalParade[] = _(
    "Has a 30% chance to burn. Doubles\n"
    "if the foe has a status."
    );
static const u8 sMoveDescription_CeaselessEdge[] = _(
    "High critical-hit ratio. Sets Spikes\n"
    "that hurt foes switching in."
    );
static const u8 sMoveDescription_BleakwindStorm[] = _(
    "Has a 30% chance to lower Speed by\n"
    "1 stage. Hits both foes."
    );
static const u8 sMoveDescription_WildboltStorm[] = _(
    "Has a 20% chance to paralyze the\n"
    "foe. Hits both foes."
    );
static const u8 sMoveDescription_SandsearStorm[] = _(
    "Has a 20% chance to burn the foe.\n"
    "Hits both foes."
    );
static const u8 sMoveDescription_LunarBlessing[] = _(
    "Restores 1/4 max HP and cures status\n"
    "of the user and allies."
    );
static const u8 sMoveDescription_TakeHeart[] = _(
    "Cures the user's status; raises Sp.\n"
    "Atk and Sp. Def by 1 stage."
    );
static const u8 sMoveDescription_TeraBlast[] = _(
    "If the user's Terastallized,\n" 
    "it hits with its Tera type."
    );
static const u8 sMoveDescription_SilkTrap[] = _(
    "Protects the user; lowers the foe's\n"
    "Speed by 1 stage on contact."
    );
static const u8 sMoveDescription_AxeKick[] = _(
    "If it misses, the user is hurt."
    );
static const u8 sMoveDescription_LastRespects[] = _(
    "Gains 50 BP for each fainted ally."
    );
static const u8 sMoveDescription_LuminaCrash[] = _(
    "Lowers the foe's Sp. Def by 2\n"
    "stages."
    );
static const u8 sMoveDescription_OrderUp[] = _(
    "Boosts a stat based on Tatsugiri's\n"
    "form."
    );
static const u8 sMoveDescription_JetPunch[] = _(
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_SpicyExtract[] = _(
    "Raises the foe's Attack by 2 stages\n"
    "but lowers its Defense by 2."
    );
static const u8 sMoveDescription_SpinOut[] = _(
    "Lowers the user's Speed by 2 stages."
    );
static const u8 sMoveDescription_PopulationBomb[] = _(
    "Hits up to 10 times in one turn."
    );
static const u8 sMoveDescription_IceSpinner[] = _(
    "Deals damage and removes the active\n"
    "terrain."
    );
static const u8 sMoveDescription_GlaiveRush[] = _(
    "The user then takes double damage\n"
    "until it acts."
    );
static const u8 sMoveDescription_RevivalBlessing[] = _(
    "Revives a fainted party {PKMN} with half\n"
    "its max HP."
    );
static const u8 sMoveDescription_SaltCure[] = _(
    "Salts the foe, hurting it each turn."
    );
static const u8 sMoveDescription_TripleDive[] = _(
    "Hits 3 times."
    );
static const u8 sMoveDescription_MortalSpin[] = _(
    "Removes hazards and traps from the\n"
    "user, then poisons adjacent foes."
    );
static const u8 sMoveDescription_Doodle[] = _(
    "Changes the user and ally's Ability\n"
    "to the foe's."
    );
static const u8 sMoveDescription_FilletAway[] = _(
    "Raises Atk, Sp. Atk and Speed by 2\n"
    "stages, but loses 1/2 of max HP."
    );
static const u8 sMoveDescription_KowtowCleave[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_FlowerTrick[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TorchSong[] = _(
    "Raises the user's Sp. Atk by 1 stage."
    );
static const u8 sMoveDescription_AquaStep[] = _(
    "Raises the user's Speed by 1 stage."
    );
static const u8 sMoveDescription_RagingBull[] = _(
    "Removes screens from the foe's side\n"
    "and deals damage."
    );
static const u8 sMoveDescription_MakeItRain[] = _(
    "Lowers the user's Sp. Atk by 2\n"
    "stages. Hits both foes."
    );
static const u8 sMoveDescription_Ruination[] = _(
    "Halves the foe's current HP."
    );
static const u8 sMoveDescription_CollisionCourse[] = _(
    "Boosted even more if it is super\n"
    "effective."
    );
static const u8 sMoveDescription_ElectroDrift[] = _(
    "Boosted even more if it is super\n"
    "effective."
    );
static const u8 sMoveDescription_ShedTail[] = _(
    "Makes a Substitute using HP, then\n"
    "the user switches out."
    );
static const u8 sMoveDescription_ChillyReception[] = _(
    "Summons a snowstorm, then the user\n"
    "switches out."
    );
static const u8 sMoveDescription_TidyUp[] = _(
    "Clears hazards and Substitutes, then\n"
    "raises Attack and Speed by 1 stage."
    );
static const u8 sMoveDescription_Snowscape[] = _(
    "For 5 turns, raises Ice-types'\n"
    "Defense by 50%."
    );
static const u8 sMoveDescription_Pounce[] = _(
    "Lowers the foe's Speed by 1 stage."
    );
static const u8 sMoveDescription_Trailblaze[] = _(
    "Raises the user's Speed by 1 stage."
    );
static const u8 sMoveDescription_ChillingWater[] = _(
    "Lowers the foe's Attack by 1 stage."
    );
static const u8 sMoveDescription_HyperDrill[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TwinBeam[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_RageFist[] = _(
    "Gains 50 BP each time the user is\n"
    "hit. Resets on switch."
    );
static const u8 sMoveDescription_ArmorCannon[] = _(
    "Lowers the user's Defense and Sp.\n"
    "Def by 1 stage."
    );
static const u8 sMoveDescription_BitterBlade[] = _(
    "Heals the user by half the damage\n"
    "dealt."
    );
static const u8 sMoveDescription_DoubleShock[] = _(
    "Fully removes the user's Electric\n"
    "type after it attacks."
    );
static const u8 sMoveDescription_GigatonHammer[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Comeuppance[] = _(
    "Returns 50% more than the damage\n"
    "taken from the last hit."
    );
static const u8 sMoveDescription_AquaCutter[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_BlazingTorque[] = _("Has a 30% chance to burn the foe.");
static const u8 sMoveDescription_WickedTorque[] = _("Has a 10% chance to put the foe to\n"
    "sleep.");
static const u8 sMoveDescription_NoxiousTorque[] = _("Has a 30% chance to poison the foe.");
static const u8 sMoveDescription_CombatTorque[] = _("Has a 30% chance to paralyze the\n"
    "foe.");
static const u8 sMoveDescription_MagicalTorque[] = _("Has a 30% chance to confuse the\n"
    "foe.");
static const u8 sMoveDescription_Psyblade[] = _(
    "This move's power increases\n" 
    "when on Electric Terrain."
    );
static const u8 sMoveDescription_HydroSteam[] = _(
    "This move's power increases\n" 
    "under harsh sunlight."
    );
static const u8 sMoveDescription_BloodMoon[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MatchaGotcha[] = _(
    "Heals 1/2 of the damage dealt. 20%\n"
    "chance to burn."
    );
static const u8 sMoveDescription_SyrupBomb[] = _(
    "Lowers the foe's Speed by 1 stage\n"
    "each turn for 3 turns."
    );
static const u8 sMoveDescription_IvyCudgel[] = _(
    "Type changes with held mask.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ElectroShot[] = _(
    "Raises Sp. Atk by 1 stage on turn 1;\n"
    "attacks at once in rain."
    );
static const u8 sMoveDescription_TeraStarstorm[] = _(
    "In Terapagos's Stellar Form,\n" 
    "it hits all foes."
    );
static const u8 sMoveDescription_FickleBeam[] = _(
    "Has a 30% chance to double its\n"
    "power."
    );
static const u8 sMoveDescription_BurningBulwark[] = _(
    "Protects the user; burns the foe if\n"
    "it makes contact."
    );
static const u8 sMoveDescription_Thunderclap[] = _(
    "Only works if the foe is attacking.\n"
    "Moves first with +1 priority."
    );
static const u8 sMoveDescription_MightyCleave[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TachyonCutter[] = _(
    "Hits twice."
    );
static const u8 sMoveDescription_HardPress[] = _(
    "The higher the foe's HP, the greater\n"
    "the power."
    );
static const u8 sMoveDescription_DragonCheer[] = _(
    "Raises allies' critical-hit ratio by 1\n"
    "stage, or 2 for Dragon-types."
    );
static const u8 sMoveDescription_AlluringVoice[] = _(
    "Confuses the foe."
    );
static const u8 sMoveDescription_TemperFlare[] = _(
    "Doubles in power if the user's last\n"
    "move failed."
    );
static const u8 sMoveDescription_SupercellSlam[] = _(
    "If it misses, the user is hurt."
    );
static const u8 sMoveDescription_PsychicNoise[] = _(
    "Blocks the foe's healing for 2 turns."
    );
static const u8 sMoveDescription_UpperHand[] = _(
    "Flinches the foe if it is readying a\n"
    "priority move."
    );
static const u8 sMoveDescription_MalignantChain[] = _(
    "Has a 50% chance to badly poison\n"
    "the foe."
    );
static const u8 sMoveDescription_BreakneckBlitz[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_AllOutPummeling[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SupersonicSkystrike[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_AcidDownpour[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TectonicRage[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_ContinentalCrush[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SavageSpinOut[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_NeverEndingNightmare[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_CorkscrewCrash[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_InfernoOverdrive[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_HydroVortex[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_BloomDoom[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_GigavoltHavoc[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_ShatteredPsyche[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SubzeroSlammer[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_DevastatingDrake[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_BlackHoleEclipse[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_TwinkleTackle[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_Catastropika[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_10000000VoltThunderbolt[] = _(
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_StokedSparksurfer[] = _(
    "Paralyzes the foe."
    );
static const u8 sMoveDescription_ExtremeEvoboost[] = _(
    "Eevee gets energy from its\n" 
    "friends. Boosts stats."
    );
static const u8 sMoveDescription_PulverizingPancake[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_GenesisSupernova[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SinisterArrowRaid[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MaliciousMoonsault[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_OceanicOperetta[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_SplinteredStormshards[] = _(
    "Lycanroc attacks with full\n" 
    "force. Removes all terrain."
    );
static const u8 sMoveDescription_LetsSnuggleForever[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_ClangorousSoulblaze[] = _(
    "Raises all of the user's stats. Hits\n"
    "both foes."
    );
static const u8 sMoveDescription_GuardianOfAlola[] = _(
    "Cuts the foe's current HP by 3/4."
    );
static const u8 sMoveDescription_SearingSunrazeSmash[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MenacingMoonrazeMaelstrom[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_LightThatBurnsTheSky[] = _(
    "Uses the higher attack stat. Ignores\n"
    "abilities."
    );
static const u8 sMoveDescription_SoulStealing7StarStrike[] = _(
    "An attack with no added effect."
    );
static const u8 sMoveDescription_MaxGuard[] = _(
    "Evades attack, but may fail if\n" 
    "used in succession."
    );
static const u8 sMoveDescription_MaxFlare[] = _(
    "Fire Dynamax attack.\n" 
    "Intensifies sun for 5 turns."
    );
static const u8 sMoveDescription_MaxFlutterby[] = _(
    "Bug Dynamax attack. Lowers\n" 
    "foe's Sp. Atk stat."
    );
static const u8 sMoveDescription_MaxLightning[] = _(
    "Electric Dynamax attack. Turns\n" 
    "the terrain electric."
    );
static const u8 sMoveDescription_MaxStrike[] = _(
    "Normal Dynamax attack. Lowers\n" 
    "foe's Speed stat."
    );
static const u8 sMoveDescription_MaxKnuckle[] = _(
    "Fighting Dynamax attack.\n" 
    "Boosts ally Attack stats."
    );
static const u8 sMoveDescription_MaxPhantasm[] = _(
    "Ghost Dynamax attack. Lowers\n" 
    "foe's Defense stat."
    );
static const u8 sMoveDescription_MaxHailstorm[] = _(
    "Ice Dynamax attack. Summons\n" 
    "hail for 5 turns."
    );
static const u8 sMoveDescription_MaxOoze[] = _(
    "Poison Dynamax attack. Boosts\n" 
    "ally Sp. Atk stats."
    );
static const u8 sMoveDescription_MaxGeyser[] = _(
    "Water Dynamax attack. Summons\n" 
    "rain for 5 turns."
    );
static const u8 sMoveDescription_MaxAirstream[] = _(
    "Flying Dynamax attack. Boosts\n" 
    "ally Speed stats."
    );
static const u8 sMoveDescription_MaxStarfall[] = _(
    "Fairy Dynamax attack. Turns\n" 
    "the terrain Misty."
    );
static const u8 sMoveDescription_MaxWyrmwind[] = _(
    "Dragon Dynamax attack. Lowers\n" 
    "foe's Attack stat."
    );
static const u8 sMoveDescription_MaxMindstorm[] = _(
    "Psychic Dynamax attack. Turns\n" 
    "the terrain psychic."
    );
static const u8 sMoveDescription_MaxRockfall[] = _(
    "Rock Dynamax attack. Summons a\n" 
    "sandstorm."
    );
static const u8 sMoveDescription_MaxQuake[] = _(
    "Ground Dynamax attack. Boosts\n" 
    "ally Sp. Def stats."
    );
static const u8 sMoveDescription_MaxDarkness[] = _(
    "Dark Dynamax attack. Lowers\n" 
    "foe's Sp. Def stat."
    );
static const u8 sMoveDescription_MaxOvergrowth[] = _(
    "Grass Dynamax attack. Turns\n" 
    "the terrain grassy."
    );
static const u8 sMoveDescription_MaxSteelspike[] = _(
    "Steel Dynamax attack. Boosts\n" 
    "ally Defense stats."
    );
static const u8 sMoveDescription_GMaxVineLash[] = _(
    "G-max Venusaur attack. Damages\n" 
    "for 4 turns."
    );
static const u8 sMoveDescription_GMaxWildfire[] = _(
    "G-max Charizard attack.\n" 
    "Damages for 4 turns."
    );
static const u8 sMoveDescription_GMaxCannonade[] = _(
    "G-max Blastoise attack.\n" 
    "Damages for 4 turns."
    );
static const u8 sMoveDescription_GMaxBefuddle[] = _(
    "G-max Butterfree attack.\n" 
    "Poison, paralysis, or sleep."
    );
static const u8 sMoveDescription_GMaxVoltCrash[] = _(
    "G-max Pikachu attack.\n" 
    "Paralyzes opponents."
    );
static const u8 sMoveDescription_GMaxGoldRush[] = _(
    "G-max Meowth attack. Confuses\n" 
    "and earns money."
    );
static const u8 sMoveDescription_GMaxChiStrike[] = _(
    "G-max Machamp attack. Boosts\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_GMaxTerror[] = _(
    "G-max Gengar attack. Prevents\n" 
    "foes from escaping."
    );
static const u8 sMoveDescription_GMaxFoamBurst[] = _(
    "G-max Kingler attack. Harshly\n" 
    "lowers foe's Speed."
    );
static const u8 sMoveDescription_GMaxResonance[] = _(
    "G-max Lapras attack. Reduces\n" 
    "damage for 5 turns."
    );
static const u8 sMoveDescription_GMaxCuddle[] = _(
    "G-max Eevee attack. Infatuates\n" 
    "opponents."
    );
static const u8 sMoveDescription_GMaxReplenish[] = _(
    "G-max Snorlax attack. Restores\n" 
    "eaten Berries."
    );
static const u8 sMoveDescription_GMaxMalodor[] = _(
    "G-max Garbodor attack. Poisons\n" 
    "opponents."
    );
static const u8 sMoveDescription_GMaxMeltdown[] = _(
    "G-max Melmetal attack.\n" 
    "Prevents repeat move use."
    );
static const u8 sMoveDescription_GMaxDrumSolo[] = _(
    "G-max Rillaboom attack.\n" 
    "Ignores target's abilities."
    );
static const u8 sMoveDescription_GMaxFireball[] = _(
    "G-max Cinderace attack.\n" 
    "Ignores target's abilities."
    );
static const u8 sMoveDescription_GMaxHydrosnipe[] = _(
    "G-max Inteleon attack. Ignores\n" 
    "target's abilities."
    );
static const u8 sMoveDescription_GMaxWindRage[] = _(
    "G-max Corviknight attack.\n" 
    "Removes opponent screens."
    );
static const u8 sMoveDescription_GMaxGravitas[] = _(
    "G-max Orbeetle attack. Changes\n" 
    "gravity for 5 turns."
    );
static const u8 sMoveDescription_GMaxStonesurge[] = _(
    "G-max Drednaw attack. Scatters\n" 
    "sharp rocks."
    );
static const u8 sMoveDescription_GMaxVolcalith[] = _(
    "G-max Coalossal attack.\n" 
    "Damages for 4 turns."
    );
static const u8 sMoveDescription_GMaxTartness[] = _(
    "G-max Flapple attack. Lowers\n" 
    "foe's evasiveness."
    );
static const u8 sMoveDescription_GMaxSweetness[] = _(
    "G-max Appletun attack. Heals\n" 
    "ally status conditions."
    );
static const u8 sMoveDescription_GMaxSandblast[] = _(
    "G-max Sandaconda attack. Traps\n" 
    "foes in a sandstorm."
    );
static const u8 sMoveDescription_GMaxStunShock[] = _(
    "G-max Toxtricity attack.\n" 
    "Poisons or paralyzes foes."
    );
static const u8 sMoveDescription_GMaxCentiferno[] = _(
    "G-max Toxtricity attack. Traps\n" 
    "foes in flames."
    );
static const u8 sMoveDescription_GMaxSmite[] = _(
    "G-max Hatterene attack.\n" 
    "Confuses opponents."
    );
static const u8 sMoveDescription_GMaxSnooze[] = _(
    "G-max Grimmsnarl attack. Lulls\n" 
    "foes into sleep."
    );
static const u8 sMoveDescription_GMaxFinale[] = _(
    "G-max Alcremie attack. Heals\n" 
    "ally HP."
    );
static const u8 sMoveDescription_GMaxSteelsurge[] = _(
    "G-max Copperajah attack.\n" 
    "Scatters sharp spikes."
    );
static const u8 sMoveDescription_GMaxDepletion[] = _(
    "G-max Duraludon attack.\n" 
    "Reduces target's PP."
    );
static const u8 sMoveDescription_GMaxOneBlow[] = _(
    "G-max Urshifu attack. Ignores\n" 
    "Max Guard."
    );
static const u8 sMoveDescription_GMaxRapidFlow[] = _(
    "G-max Urshifu attack. Ignores\n" 
    "Max Guard."
    );

const u8 *const gBattleMoveDescriptionsWide[MOVES_COUNT_ALL] =
{
    [MOVE_NONE] = sMoveDescription_None,
    [MOVE_POUND] = sMoveDescription_Pound,
    [MOVE_KARATE_CHOP] = sMoveDescription_KarateChop,
    [MOVE_DOUBLE_SLAP] = sMoveDescription_DoubleSlap,
    [MOVE_COMET_PUNCH] = sMoveDescription_CometPunch,
    [MOVE_MEGA_PUNCH] = sMoveDescription_MegaPunch,
    [MOVE_PAY_DAY] = sMoveDescription_PayDay,
    [MOVE_FIRE_PUNCH] = sMoveDescription_FirePunch,
    [MOVE_ICE_PUNCH] = sMoveDescription_IcePunch,
    [MOVE_THUNDER_PUNCH] = sMoveDescription_ThunderPunch,
    [MOVE_SCRATCH] = sMoveDescription_Scratch,
    [MOVE_VISE_GRIP] = sMoveDescription_ViseGrip,
    [MOVE_GUILLOTINE] = sMoveDescription_Guillotine,
    [MOVE_RAZOR_WIND] = sMoveDescription_RazorWind,
    [MOVE_SWORDS_DANCE] = sMoveDescription_SwordsDance,
    [MOVE_CUT] = sMoveDescription_Cut,
    [MOVE_GUST] = sMoveDescription_Gust,
    [MOVE_WING_ATTACK] = sMoveDescription_WingAttack,
    [MOVE_WHIRLWIND] = sMoveDescription_Whirlwind,
    [MOVE_FLY] = sMoveDescription_Fly,
    [MOVE_BIND] = sMoveDescription_Bind,
    [MOVE_SLAM] = sMoveDescription_Slam,
    [MOVE_VINE_WHIP] = sMoveDescription_VineWhip,
    [MOVE_STOMP] = sMoveDescription_Stomp,
    [MOVE_DOUBLE_KICK] = sMoveDescription_DoubleKick,
    [MOVE_MEGA_KICK] = sMoveDescription_MegaKick,
    [MOVE_JUMP_KICK] = sMoveDescription_JumpKick,
    [MOVE_ROLLING_KICK] = sMoveDescription_RollingKick,
    [MOVE_SAND_ATTACK] = sMoveDescription_SandAttack,
    [MOVE_HEADBUTT] = sMoveDescription_Headbutt,
    [MOVE_HORN_ATTACK] = sMoveDescription_HornAttack,
    [MOVE_FURY_ATTACK] = sMoveDescription_FuryAttack,
    [MOVE_HORN_DRILL] = sMoveDescription_HornDrill,
    [MOVE_TACKLE] = sMoveDescription_Tackle,
    [MOVE_BODY_SLAM] = sMoveDescription_BodySlam,
    [MOVE_WRAP] = sMoveDescription_Wrap,
    [MOVE_TAKE_DOWN] = sMoveDescription_TakeDown,
    [MOVE_THRASH] = sMoveDescription_Thrash,
    [MOVE_DOUBLE_EDGE] = sMoveDescription_DoubleEdge,
    [MOVE_TAIL_WHIP] = sMoveDescription_TailWhip,
    [MOVE_POISON_STING] = sMoveDescription_PoisonSting,
    [MOVE_TWINEEDLE] = sMoveDescription_Twineedle,
    [MOVE_PIN_MISSILE] = sMoveDescription_PinMissile,
    [MOVE_LEER] = sMoveDescription_Leer,
    [MOVE_BITE] = sMoveDescription_Bite,
    [MOVE_GROWL] = sMoveDescription_Growl,
    [MOVE_ROAR] = sMoveDescription_Roar,
    [MOVE_SING] = sMoveDescription_Sing,
    [MOVE_SUPERSONIC] = sMoveDescription_Supersonic,
    [MOVE_SONIC_BOOM] = sMoveDescription_SonicBoom,
    [MOVE_DISABLE] = sMoveDescription_Disable,
    [MOVE_ACID] = sMoveDescription_Acid,
    [MOVE_EMBER] = sMoveDescription_Ember,
    [MOVE_FLAMETHROWER] = sMoveDescription_Flamethrower,
    [MOVE_MIST] = sMoveDescription_Mist,
    [MOVE_WATER_GUN] = sMoveDescription_WaterGun,
    [MOVE_HYDRO_PUMP] = sMoveDescription_HydroPump,
    [MOVE_SURF] = sMoveDescription_Surf,
    [MOVE_ICE_BEAM] = sMoveDescription_IceBeam,
    [MOVE_BLIZZARD] = sMoveDescription_Blizzard,
    [MOVE_PSYBEAM] = sMoveDescription_Psybeam,
    [MOVE_BUBBLE_BEAM] = sMoveDescription_BubbleBeam,
    [MOVE_AURORA_BEAM] = sMoveDescription_AuroraBeam,
    [MOVE_HYPER_BEAM] = sMoveDescription_HyperBeam,
    [MOVE_PECK] = sMoveDescription_Peck,
    [MOVE_DRILL_PECK] = sMoveDescription_DrillPeck,
    [MOVE_SUBMISSION] = sMoveDescription_Submission,
    [MOVE_LOW_KICK] = sMoveDescription_LowKick,
    [MOVE_COUNTER] = sMoveDescription_Counter,
    [MOVE_SEISMIC_TOSS] = sMoveDescription_SeismicToss,
    [MOVE_STRENGTH] = sMoveDescription_Strength,
    [MOVE_ABSORB] = sMoveDescription_Absorb,
    [MOVE_MEGA_DRAIN] = sMoveDescription_MegaDrain,
    [MOVE_LEECH_SEED] = sMoveDescription_LeechSeed,
    [MOVE_GROWTH] = sMoveDescription_Growth,
    [MOVE_RAZOR_LEAF] = sMoveDescription_RazorLeaf,
    [MOVE_SOLAR_BEAM] = sMoveDescription_SolarBeam,
    [MOVE_POISON_POWDER] = sMoveDescription_PoisonPowder,
    [MOVE_STUN_SPORE] = sMoveDescription_StunSpore,
    [MOVE_SLEEP_POWDER] = sMoveDescription_SleepPowder,
    [MOVE_PETAL_DANCE] = sMoveDescription_PetalDance,
    [MOVE_STRING_SHOT] = sMoveDescription_StringShot,
    [MOVE_DRAGON_RAGE] = sMoveDescription_DragonRage,
    [MOVE_FIRE_SPIN] = sMoveDescription_FireSpin,
    [MOVE_THUNDER_SHOCK] = sMoveDescription_ThunderShock,
    [MOVE_THUNDERBOLT] = sMoveDescription_Thunderbolt,
    [MOVE_THUNDER_WAVE] = sMoveDescription_ThunderWave,
    [MOVE_THUNDER] = sMoveDescription_Thunder,
    [MOVE_ROCK_THROW] = sMoveDescription_RockThrow,
    [MOVE_EARTHQUAKE] = sMoveDescription_Earthquake,
    [MOVE_FISSURE] = sMoveDescription_Fissure,
    [MOVE_DIG] = sMoveDescription_Dig,
    [MOVE_TOXIC] = sMoveDescription_Toxic,
    [MOVE_CONFUSION] = sMoveDescription_Confusion,
    [MOVE_PSYCHIC] = sMoveDescription_Psychic,
    [MOVE_HYPNOSIS] = sMoveDescription_Hypnosis,
    [MOVE_MEDITATE] = sMoveDescription_Meditate,
    [MOVE_AGILITY] = sMoveDescription_Agility,
    [MOVE_QUICK_ATTACK] = sMoveDescription_QuickAttack,
    [MOVE_RAGE] = sMoveDescription_Rage,
    [MOVE_TELEPORT] = sMoveDescription_Teleport,
    [MOVE_NIGHT_SHADE] = sMoveDescription_NightShade,
    [MOVE_MIMIC] = sMoveDescription_Mimic,
    [MOVE_SCREECH] = sMoveDescription_Screech,
    [MOVE_DOUBLE_TEAM] = sMoveDescription_DoubleTeam,
    [MOVE_RECOVER] = sMoveDescription_Recover,
    [MOVE_HARDEN] = sMoveDescription_Harden,
    [MOVE_MINIMIZE] = sMoveDescription_Minimize,
    [MOVE_SMOKESCREEN] = sMoveDescription_Smokescreen,
    [MOVE_CONFUSE_RAY] = sMoveDescription_ConfuseRay,
    [MOVE_WITHDRAW] = sMoveDescription_Withdraw,
    [MOVE_DEFENSE_CURL] = sMoveDescription_DefenseCurl,
    [MOVE_BARRIER] = sMoveDescription_Barrier,
    [MOVE_LIGHT_SCREEN] = sMoveDescription_LightScreen,
    [MOVE_HAZE] = sMoveDescription_Haze,
    [MOVE_REFLECT] = sMoveDescription_Reflect,
    [MOVE_FOCUS_ENERGY] = sMoveDescription_FocusEnergy,
    [MOVE_BIDE] = sMoveDescription_Bide,
    [MOVE_METRONOME] = sMoveDescription_Metronome,
    [MOVE_MIRROR_MOVE] = sMoveDescription_MirrorMove,
    [MOVE_SELF_DESTRUCT] = sMoveDescription_SelfDestruct,
    [MOVE_EGG_BOMB] = sMoveDescription_EggBomb,
    [MOVE_LICK] = sMoveDescription_Lick,
    [MOVE_SMOG] = sMoveDescription_Smog,
    [MOVE_SLUDGE] = sMoveDescription_Sludge,
    [MOVE_BONE_CLUB] = sMoveDescription_BoneClub,
    [MOVE_FIRE_BLAST] = sMoveDescription_FireBlast,
    [MOVE_WATERFALL] = sMoveDescription_Waterfall,
    [MOVE_CLAMP] = sMoveDescription_Clamp,
    [MOVE_SWIFT] = sMoveDescription_Swift,
    [MOVE_SKULL_BASH] = sMoveDescription_SkullBash,
    [MOVE_SPIKE_CANNON] = sMoveDescription_SpikeCannon,
    [MOVE_CONSTRICT] = sMoveDescription_Constrict,
    [MOVE_AMNESIA] = sMoveDescription_Amnesia,
    [MOVE_KINESIS] = sMoveDescription_Kinesis,
    [MOVE_SOFT_BOILED] = sMoveDescription_SoftBoiled,
    [MOVE_HIGH_JUMP_KICK] = sMoveDescription_HighJumpKick,
    [MOVE_GLARE] = sMoveDescription_Glare,
    [MOVE_DREAM_EATER] = sMoveDescription_DreamEater,
    [MOVE_POISON_GAS] = sMoveDescription_PoisonGas,
    [MOVE_BARRAGE] = sMoveDescription_Barrage,
    [MOVE_LEECH_LIFE] = sMoveDescription_LeechLife,
    [MOVE_LOVELY_KISS] = sMoveDescription_LovelyKiss,
    [MOVE_SKY_ATTACK] = sMoveDescription_SkyAttack,
    [MOVE_TRANSFORM] = sMoveDescription_Transform,
    [MOVE_BUBBLE] = sMoveDescription_Bubble,
    [MOVE_DIZZY_PUNCH] = sMoveDescription_DizzyPunch,
    [MOVE_SPORE] = sMoveDescription_Spore,
    [MOVE_FLASH] = sMoveDescription_Flash,
    [MOVE_PSYWAVE] = sMoveDescription_Psywave,
    [MOVE_SPLASH] = sMoveDescription_Splash,
    [MOVE_ACID_ARMOR] = sMoveDescription_AcidArmor,
    [MOVE_CRABHAMMER] = sMoveDescription_Crabhammer,
    [MOVE_EXPLOSION] = sMoveDescription_Explosion,
    [MOVE_FURY_SWIPES] = sMoveDescription_FurySwipes,
    [MOVE_BONEMERANG] = sMoveDescription_Bonemerang,
    [MOVE_REST] = sMoveDescription_Rest,
    [MOVE_ROCK_SLIDE] = sMoveDescription_RockSlide,
    [MOVE_HYPER_FANG] = sMoveDescription_HyperFang,
    [MOVE_SHARPEN] = sMoveDescription_Sharpen,
    [MOVE_CONVERSION] = sMoveDescription_Conversion,
    [MOVE_TRI_ATTACK] = sMoveDescription_TriAttack,
    [MOVE_SUPER_FANG] = sMoveDescription_SuperFang,
    [MOVE_SLASH] = sMoveDescription_Slash,
    [MOVE_SUBSTITUTE] = sMoveDescription_Substitute,
    [MOVE_STRUGGLE] = sMoveDescription_Struggle,
    [MOVE_SKETCH] = sMoveDescription_Sketch,
    [MOVE_TRIPLE_KICK] = sMoveDescription_TripleKick,
    [MOVE_THIEF] = sMoveDescription_Thief,
    [MOVE_SPIDER_WEB] = sMoveDescription_SpiderWeb,
    [MOVE_MIND_READER] = sMoveDescription_MindReader,
    [MOVE_NIGHTMARE] = sMoveDescription_Nightmare,
    [MOVE_FLAME_WHEEL] = sMoveDescription_FlameWheel,
    [MOVE_SNORE] = sMoveDescription_Snore,
    [MOVE_CURSE] = sMoveDescription_Curse,
    [MOVE_FLAIL] = sMoveDescription_Flail,
    [MOVE_CONVERSION_2] = sMoveDescription_Conversion2,
    [MOVE_AEROBLAST] = sMoveDescription_Aeroblast,
    [MOVE_COTTON_SPORE] = sMoveDescription_CottonSpore,
    [MOVE_REVERSAL] = sMoveDescription_Reversal,
    [MOVE_SPITE] = sMoveDescription_Spite,
    [MOVE_POWDER_SNOW] = sMoveDescription_PowderSnow,
    [MOVE_PROTECT] = sMoveDescription_Protect,
    [MOVE_MACH_PUNCH] = sMoveDescription_MachPunch,
    [MOVE_SCARY_FACE] = sMoveDescription_ScaryFace,
    [MOVE_FEINT_ATTACK] = sMoveDescription_FeintAttack,
    [MOVE_SWEET_KISS] = sMoveDescription_SweetKiss,
    [MOVE_BELLY_DRUM] = sMoveDescription_BellyDrum,
    [MOVE_SLUDGE_BOMB] = sMoveDescription_SludgeBomb,
    [MOVE_MUD_SLAP] = sMoveDescription_MudSlap,
    [MOVE_OCTAZOOKA] = sMoveDescription_Octazooka,
    [MOVE_SPIKES] = sMoveDescription_Spikes,
    [MOVE_ZAP_CANNON] = sMoveDescription_ZapCannon,
    [MOVE_FORESIGHT] = sMoveDescription_Foresight,
    [MOVE_DESTINY_BOND] = sMoveDescription_DestinyBond,
    [MOVE_PERISH_SONG] = sMoveDescription_PerishSong,
    [MOVE_ICY_WIND] = sMoveDescription_IcyWind,
    [MOVE_DETECT] = sMoveDescription_Detect,
    [MOVE_BONE_RUSH] = sMoveDescription_BoneRush,
    [MOVE_LOCK_ON] = sMoveDescription_LockOn,
    [MOVE_OUTRAGE] = sMoveDescription_Outrage,
    [MOVE_SANDSTORM] = sMoveDescription_Sandstorm,
    [MOVE_GIGA_DRAIN] = sMoveDescription_GigaDrain,
    [MOVE_ENDURE] = sMoveDescription_Endure,
    [MOVE_CHARM] = sMoveDescription_Charm,
    [MOVE_ROLLOUT] = sMoveDescription_Rollout,
    [MOVE_FALSE_SWIPE] = sMoveDescription_FalseSwipe,
    [MOVE_SWAGGER] = sMoveDescription_Swagger,
    [MOVE_MILK_DRINK] = sMoveDescription_MilkDrink,
    [MOVE_SPARK] = sMoveDescription_Spark,
    [MOVE_FURY_CUTTER] = sMoveDescription_FuryCutter,
    [MOVE_STEEL_WING] = sMoveDescription_SteelWing,
    [MOVE_MEAN_LOOK] = sMoveDescription_MeanLook,
    [MOVE_ATTRACT] = sMoveDescription_Attract,
    [MOVE_SLEEP_TALK] = sMoveDescription_SleepTalk,
    [MOVE_HEAL_BELL] = sMoveDescription_HealBell,
    [MOVE_RETURN] = sMoveDescription_Return,
    [MOVE_PRESENT] = sMoveDescription_Present,
    [MOVE_FRUSTRATION] = sMoveDescription_Frustration,
    [MOVE_SAFEGUARD] = sMoveDescription_Safeguard,
    [MOVE_PAIN_SPLIT] = sMoveDescription_PainSplit,
    [MOVE_SACRED_FIRE] = sMoveDescription_SacredFire,
    [MOVE_MAGNITUDE] = sMoveDescription_Magnitude,
    [MOVE_DYNAMIC_PUNCH] = sMoveDescription_DynamicPunch,
    [MOVE_MEGAHORN] = sMoveDescription_Megahorn,
    [MOVE_DRAGON_BREATH] = sMoveDescription_DragonBreath,
    [MOVE_BATON_PASS] = sMoveDescription_BatonPass,
    [MOVE_ENCORE] = sMoveDescription_Encore,
    [MOVE_PURSUIT] = sMoveDescription_Pursuit,
    [MOVE_RAPID_SPIN] = sMoveDescription_RapidSpin,
    [MOVE_SWEET_SCENT] = sMoveDescription_SweetScent,
    [MOVE_IRON_TAIL] = sMoveDescription_IronTail,
    [MOVE_METAL_CLAW] = sMoveDescription_MetalClaw,
    [MOVE_VITAL_THROW] = sMoveDescription_VitalThrow,
    [MOVE_MORNING_SUN] = sMoveDescription_MorningSun,
    [MOVE_SYNTHESIS] = sMoveDescription_Synthesis,
    [MOVE_MOONLIGHT] = sMoveDescription_Moonlight,
    [MOVE_HIDDEN_POWER] = sMoveDescription_HiddenPower,
    [MOVE_CROSS_CHOP] = sMoveDescription_CrossChop,
    [MOVE_TWISTER] = sMoveDescription_Twister,
    [MOVE_RAIN_DANCE] = sMoveDescription_RainDance,
    [MOVE_SUNNY_DAY] = sMoveDescription_SunnyDay,
    [MOVE_CRUNCH] = sMoveDescription_Crunch,
    [MOVE_MIRROR_COAT] = sMoveDescription_MirrorCoat,
    [MOVE_PSYCH_UP] = sMoveDescription_PsychUp,
    [MOVE_EXTREME_SPEED] = sMoveDescription_ExtremeSpeed,
    [MOVE_ANCIENT_POWER] = sMoveDescription_AncientPower,
    [MOVE_SHADOW_BALL] = sMoveDescription_ShadowBall,
    [MOVE_FUTURE_SIGHT] = sMoveDescription_FutureSight,
    [MOVE_ROCK_SMASH] = sMoveDescription_RockSmash,
    [MOVE_WHIRLPOOL] = sMoveDescription_Whirlpool,
    [MOVE_BEAT_UP] = sMoveDescription_BeatUp,
    [MOVE_FAKE_OUT] = sMoveDescription_FakeOut,
    [MOVE_UPROAR] = sMoveDescription_Uproar,
    [MOVE_STOCKPILE] = sMoveDescription_Stockpile,
    [MOVE_SPIT_UP] = sMoveDescription_SpitUp,
    [MOVE_SWALLOW] = sMoveDescription_Swallow,
    [MOVE_HEAT_WAVE] = sMoveDescription_HeatWave,
    [MOVE_HAIL] = sMoveDescription_Hail,
    [MOVE_TORMENT] = sMoveDescription_Torment,
    [MOVE_FLATTER] = sMoveDescription_Flatter,
    [MOVE_WILL_O_WISP] = sMoveDescription_WillOWisp,
    [MOVE_MEMENTO] = sMoveDescription_Memento,
    [MOVE_FACADE] = sMoveDescription_Facade,
    [MOVE_FOCUS_PUNCH] = sMoveDescription_FocusPunch,
    [MOVE_SMELLING_SALTS] = sMoveDescription_SmellingSalts,
    [MOVE_FOLLOW_ME] = sMoveDescription_FollowMe,
    [MOVE_NATURE_POWER] = sMoveDescription_NaturePower,
    [MOVE_CHARGE] = sMoveDescription_Charge,
    [MOVE_TAUNT] = sMoveDescription_Taunt,
    [MOVE_HELPING_HAND] = sMoveDescription_HelpingHand,
    [MOVE_TRICK] = sMoveDescription_Trick,
    [MOVE_ROLE_PLAY] = sMoveDescription_RolePlay,
    [MOVE_WISH] = sMoveDescription_Wish,
    [MOVE_ASSIST] = sMoveDescription_Assist,
    [MOVE_INGRAIN] = sMoveDescription_Ingrain,
    [MOVE_SUPERPOWER] = sMoveDescription_Superpower,
    [MOVE_MAGIC_COAT] = sMoveDescription_MagicCoat,
    [MOVE_RECYCLE] = sMoveDescription_Recycle,
    [MOVE_REVENGE] = sMoveDescription_Revenge,
    [MOVE_BRICK_BREAK] = sMoveDescription_BrickBreak,
    [MOVE_YAWN] = sMoveDescription_Yawn,
    [MOVE_KNOCK_OFF] = sMoveDescription_KnockOff,
    [MOVE_ENDEAVOR] = sMoveDescription_Endeavor,
    [MOVE_ERUPTION] = sMoveDescription_Eruption,
    [MOVE_SKILL_SWAP] = sMoveDescription_SkillSwap,
    [MOVE_IMPRISON] = sMoveDescription_Imprison,
    [MOVE_REFRESH] = sMoveDescription_Refresh,
    [MOVE_GRUDGE] = sMoveDescription_Grudge,
    [MOVE_SNATCH] = sMoveDescription_Snatch,
    [MOVE_SECRET_POWER] = sMoveDescription_SecretPower,
    [MOVE_DIVE] = sMoveDescription_Dive,
    [MOVE_ARM_THRUST] = sMoveDescription_ArmThrust,
    [MOVE_CAMOUFLAGE] = sMoveDescription_Camouflage,
    [MOVE_TAIL_GLOW] = sMoveDescription_TailGlow,
    [MOVE_LUSTER_PURGE] = sMoveDescription_LusterPurge,
    [MOVE_MIST_BALL] = sMoveDescription_MistBall,
    [MOVE_FEATHER_DANCE] = sMoveDescription_FeatherDance,
    [MOVE_TEETER_DANCE] = sMoveDescription_TeeterDance,
    [MOVE_BLAZE_KICK] = sMoveDescription_BlazeKick,
    [MOVE_MUD_SPORT] = sMoveDescription_MudSport,
    [MOVE_ICE_BALL] = sMoveDescription_IceBall,
    [MOVE_NEEDLE_ARM] = sMoveDescription_NeedleArm,
    [MOVE_SLACK_OFF] = sMoveDescription_SlackOff,
    [MOVE_HYPER_VOICE] = sMoveDescription_HyperVoice,
    [MOVE_POISON_FANG] = sMoveDescription_PoisonFang,
    [MOVE_CRUSH_CLAW] = sMoveDescription_CrushClaw,
    [MOVE_BLAST_BURN] = sMoveDescription_BlastBurn,
    [MOVE_HYDRO_CANNON] = sMoveDescription_HydroCannon,
    [MOVE_METEOR_MASH] = sMoveDescription_MeteorMash,
    [MOVE_ASTONISH] = sMoveDescription_Astonish,
    [MOVE_WEATHER_BALL] = sMoveDescription_WeatherBall,
    [MOVE_AROMATHERAPY] = sMoveDescription_Aromatherapy,
    [MOVE_FAKE_TEARS] = sMoveDescription_FakeTears,
    [MOVE_AIR_CUTTER] = sMoveDescription_AirCutter,
    [MOVE_OVERHEAT] = sMoveDescription_Overheat,
    [MOVE_ODOR_SLEUTH] = sMoveDescription_OdorSleuth,
    [MOVE_ROCK_TOMB] = sMoveDescription_RockTomb,
    [MOVE_SILVER_WIND] = sMoveDescription_SilverWind,
    [MOVE_METAL_SOUND] = sMoveDescription_MetalSound,
    [MOVE_GRASS_WHISTLE] = sMoveDescription_GrassWhistle,
    [MOVE_TICKLE] = sMoveDescription_Tickle,
    [MOVE_COSMIC_POWER] = sMoveDescription_CosmicPower,
    [MOVE_WATER_SPOUT] = sMoveDescription_WaterSpout,
    [MOVE_SIGNAL_BEAM] = sMoveDescription_SignalBeam,
    [MOVE_SHADOW_PUNCH] = sMoveDescription_ShadowPunch,
    [MOVE_EXTRASENSORY] = sMoveDescription_Extrasensory,
    [MOVE_SKY_UPPERCUT] = sMoveDescription_SkyUppercut,
    [MOVE_SAND_TOMB] = sMoveDescription_SandTomb,
    [MOVE_SHEER_COLD] = sMoveDescription_SheerCold,
    [MOVE_MUDDY_WATER] = sMoveDescription_MuddyWater,
    [MOVE_BULLET_SEED] = sMoveDescription_BulletSeed,
    [MOVE_AERIAL_ACE] = sMoveDescription_AerialAce,
    [MOVE_ICICLE_SPEAR] = sMoveDescription_IcicleSpear,
    [MOVE_IRON_DEFENSE] = sMoveDescription_IronDefense,
    [MOVE_BLOCK] = sMoveDescription_Block,
    [MOVE_HOWL] = sMoveDescription_Howl,
    [MOVE_DRAGON_CLAW] = sMoveDescription_DragonClaw,
    [MOVE_FRENZY_PLANT] = sMoveDescription_FrenzyPlant,
    [MOVE_BULK_UP] = sMoveDescription_BulkUp,
    [MOVE_BOUNCE] = sMoveDescription_Bounce,
    [MOVE_MUD_SHOT] = sMoveDescription_MudShot,
    [MOVE_POISON_TAIL] = sMoveDescription_PoisonTail,
    [MOVE_COVET] = sMoveDescription_Covet,
    [MOVE_VOLT_TACKLE] = sMoveDescription_VoltTackle,
    [MOVE_MAGICAL_LEAF] = sMoveDescription_MagicalLeaf,
    [MOVE_WATER_SPORT] = sMoveDescription_WaterSport,
    [MOVE_CALM_MIND] = sMoveDescription_CalmMind,
    [MOVE_LEAF_BLADE] = sMoveDescription_LeafBlade,
    [MOVE_DRAGON_DANCE] = sMoveDescription_DragonDance,
    [MOVE_ROCK_BLAST] = sMoveDescription_RockBlast,
    [MOVE_SHOCK_WAVE] = sMoveDescription_ShockWave,
    [MOVE_WATER_PULSE] = sMoveDescription_WaterPulse,
    [MOVE_DOOM_DESIRE] = sMoveDescription_DoomDesire,
    [MOVE_PSYCHO_BOOST] = sMoveDescription_PsychoBoost,
    [MOVE_ROOST] = sMoveDescription_Roost,
    [MOVE_GRAVITY] = sMoveDescription_Gravity,
    [MOVE_MIRACLE_EYE] = sMoveDescription_MiracleEye,
    [MOVE_WAKE_UP_SLAP] = sMoveDescription_WakeUpSlap,
    [MOVE_HAMMER_ARM] = sMoveDescription_HammerArm,
    [MOVE_GYRO_BALL] = sMoveDescription_GyroBall,
    [MOVE_HEALING_WISH] = sMoveDescription_HealingWish,
    [MOVE_BRINE] = sMoveDescription_Brine,
    [MOVE_NATURAL_GIFT] = sMoveDescription_NaturalGift,
    [MOVE_FEINT] = sMoveDescription_Feint,
    [MOVE_PLUCK] = sMoveDescription_Pluck,
    [MOVE_TAILWIND] = sMoveDescription_Tailwind,
    [MOVE_ACUPRESSURE] = sMoveDescription_Acupressure,
    [MOVE_METAL_BURST] = sMoveDescription_MetalBurst,
    [MOVE_U_TURN] = sMoveDescription_UTurn,
    [MOVE_CLOSE_COMBAT] = sMoveDescription_CloseCombat,
    [MOVE_PAYBACK] = sMoveDescription_Payback,
    [MOVE_ASSURANCE] = sMoveDescription_Assurance,
    [MOVE_EMBARGO] = sMoveDescription_Embargo,
    [MOVE_FLING] = sMoveDescription_Fling,
    [MOVE_PSYCHO_SHIFT] = sMoveDescription_PsychoShift,
    [MOVE_TRUMP_CARD] = sMoveDescription_TrumpCard,
    [MOVE_HEAL_BLOCK] = sMoveDescription_HealBlock,
    [MOVE_WRING_OUT] = sMoveDescription_WringOut,
    [MOVE_POWER_TRICK] = sMoveDescription_PowerTrick,
    [MOVE_GASTRO_ACID] = sMoveDescription_GastroAcid,
    [MOVE_LUCKY_CHANT] = sMoveDescription_LuckyChant,
    [MOVE_ME_FIRST] = sMoveDescription_MeFirst,
    [MOVE_COPYCAT] = sMoveDescription_Copycat,
    [MOVE_POWER_SWAP] = sMoveDescription_PowerSwap,
    [MOVE_GUARD_SWAP] = sMoveDescription_GuardSwap,
    [MOVE_PUNISHMENT] = sMoveDescription_Punishment,
    [MOVE_LAST_RESORT] = sMoveDescription_LastResort,
    [MOVE_WORRY_SEED] = sMoveDescription_WorrySeed,
    [MOVE_SUCKER_PUNCH] = sMoveDescription_SuckerPunch,
    [MOVE_TOXIC_SPIKES] = sMoveDescription_ToxicSpikes,
    [MOVE_HEART_SWAP] = sMoveDescription_HeartSwap,
    [MOVE_AQUA_RING] = sMoveDescription_AquaRing,
    [MOVE_MAGNET_RISE] = sMoveDescription_MagnetRise,
    [MOVE_FLARE_BLITZ] = sMoveDescription_FlareBlitz,
    [MOVE_FORCE_PALM] = sMoveDescription_ForcePalm,
    [MOVE_AURA_SPHERE] = sMoveDescription_AuraSphere,
    [MOVE_ROCK_POLISH] = sMoveDescription_RockPolish,
    [MOVE_POISON_JAB] = sMoveDescription_PoisonJab,
    [MOVE_DARK_PULSE] = sMoveDescription_DarkPulse,
    [MOVE_NIGHT_SLASH] = sMoveDescription_NightSlash,
    [MOVE_AQUA_TAIL] = sMoveDescription_AquaTail,
    [MOVE_SEED_BOMB] = sMoveDescription_SeedBomb,
    [MOVE_AIR_SLASH] = sMoveDescription_AirSlash,
    [MOVE_X_SCISSOR] = sMoveDescription_XScissor,
    [MOVE_BUG_BUZZ] = sMoveDescription_BugBuzz,
    [MOVE_DRAGON_PULSE] = sMoveDescription_DragonPulse,
    [MOVE_DRAGON_RUSH] = sMoveDescription_DragonRush,
    [MOVE_POWER_GEM] = sMoveDescription_PowerGem,
    [MOVE_DRAIN_PUNCH] = sMoveDescription_DrainPunch,
    [MOVE_VACUUM_WAVE] = sMoveDescription_VacuumWave,
    [MOVE_FOCUS_BLAST] = sMoveDescription_FocusBlast,
    [MOVE_ENERGY_BALL] = sMoveDescription_EnergyBall,
    [MOVE_BRAVE_BIRD] = sMoveDescription_BraveBird,
    [MOVE_EARTH_POWER] = sMoveDescription_EarthPower,
    [MOVE_SWITCHEROO] = sMoveDescription_Switcheroo,
    [MOVE_GIGA_IMPACT] = sMoveDescription_GigaImpact,
    [MOVE_NASTY_PLOT] = sMoveDescription_NastyPlot,
    [MOVE_BULLET_PUNCH] = sMoveDescription_BulletPunch,
    [MOVE_AVALANCHE] = sMoveDescription_Avalanche,
    [MOVE_ICE_SHARD] = sMoveDescription_IceShard,
    [MOVE_SHADOW_CLAW] = sMoveDescription_ShadowClaw,
    [MOVE_THUNDER_FANG] = sMoveDescription_ThunderFang,
    [MOVE_ICE_FANG] = sMoveDescription_IceFang,
    [MOVE_FIRE_FANG] = sMoveDescription_FireFang,
    [MOVE_SHADOW_SNEAK] = sMoveDescription_ShadowSneak,
    [MOVE_MUD_BOMB] = sMoveDescription_MudBomb,
    [MOVE_PSYCHO_CUT] = sMoveDescription_PsychoCut,
    [MOVE_ZEN_HEADBUTT] = sMoveDescription_ZenHeadbutt,
    [MOVE_MIRROR_SHOT] = sMoveDescription_MirrorShot,
    [MOVE_FLASH_CANNON] = sMoveDescription_FlashCannon,
    [MOVE_ROCK_CLIMB] = sMoveDescription_RockClimb,
    [MOVE_DEFOG] = sMoveDescription_Defog,
    [MOVE_TRICK_ROOM] = sMoveDescription_TrickRoom,
    [MOVE_DRACO_METEOR] = sMoveDescription_DracoMeteor,
    [MOVE_DISCHARGE] = sMoveDescription_Discharge,
    [MOVE_LAVA_PLUME] = sMoveDescription_LavaPlume,
    [MOVE_LEAF_STORM] = sMoveDescription_LeafStorm,
    [MOVE_POWER_WHIP] = sMoveDescription_PowerWhip,
    [MOVE_ROCK_WRECKER] = sMoveDescription_RockWrecker,
    [MOVE_CROSS_POISON] = sMoveDescription_CrossPoison,
    [MOVE_GUNK_SHOT] = sMoveDescription_GunkShot,
    [MOVE_IRON_HEAD] = sMoveDescription_IronHead,
    [MOVE_MAGNET_BOMB] = sMoveDescription_MagnetBomb,
    [MOVE_STONE_EDGE] = sMoveDescription_StoneEdge,
    [MOVE_CAPTIVATE] = sMoveDescription_Captivate,
    [MOVE_STEALTH_ROCK] = sMoveDescription_StealthRock,
    [MOVE_GRASS_KNOT] = sMoveDescription_GrassKnot,
    [MOVE_CHATTER] = sMoveDescription_Chatter,
    [MOVE_JUDGMENT] = sMoveDescription_Judgment,
    [MOVE_BUG_BITE] = sMoveDescription_BugBite,
    [MOVE_CHARGE_BEAM] = sMoveDescription_ChargeBeam,
    [MOVE_WOOD_HAMMER] = sMoveDescription_WoodHammer,
    [MOVE_AQUA_JET] = sMoveDescription_AquaJet,
    [MOVE_ATTACK_ORDER] = sMoveDescription_AttackOrder,
    [MOVE_DEFEND_ORDER] = sMoveDescription_DefendOrder,
    [MOVE_HEAL_ORDER] = sMoveDescription_HealOrder,
    [MOVE_HEAD_SMASH] = sMoveDescription_HeadSmash,
    [MOVE_DOUBLE_HIT] = sMoveDescription_DoubleHit,
    [MOVE_ROAR_OF_TIME] = sMoveDescription_RoarOfTime,
    [MOVE_SPACIAL_REND] = sMoveDescription_SpacialRend,
    [MOVE_LUNAR_DANCE] = sMoveDescription_LunarDance,
    [MOVE_CRUSH_GRIP] = sMoveDescription_CrushGrip,
    [MOVE_MAGMA_STORM] = sMoveDescription_MagmaStorm,
    [MOVE_DARK_VOID] = sMoveDescription_DarkVoid,
    [MOVE_SEED_FLARE] = sMoveDescription_SeedFlare,
    [MOVE_OMINOUS_WIND] = sMoveDescription_OminousWind,
    [MOVE_SHADOW_FORCE] = sMoveDescription_ShadowForce,
    [MOVE_HONE_CLAWS] = sMoveDescription_HoneClaws,
    [MOVE_WIDE_GUARD] = sMoveDescription_WideGuard,
    [MOVE_GUARD_SPLIT] = sMoveDescription_GuardSplit,
    [MOVE_POWER_SPLIT] = sMoveDescription_PowerSplit,
    [MOVE_WONDER_ROOM] = sMoveDescription_WonderRoom,
    [MOVE_PSYSHOCK] = sMoveDescription_Psyshock,
    [MOVE_VENOSHOCK] = sMoveDescription_Venoshock,
    [MOVE_AUTOTOMIZE] = sMoveDescription_Autotomize,
    [MOVE_RAGE_POWDER] = sMoveDescription_RagePowder,
    [MOVE_TELEKINESIS] = sMoveDescription_Telekinesis,
    [MOVE_MAGIC_ROOM] = sMoveDescription_MagicRoom,
    [MOVE_SMACK_DOWN] = sMoveDescription_SmackDown,
    [MOVE_STORM_THROW] = sMoveDescription_StormThrow,
    [MOVE_FLAME_BURST] = sMoveDescription_FlameBurst,
    [MOVE_SLUDGE_WAVE] = sMoveDescription_SludgeWave,
    [MOVE_QUIVER_DANCE] = sMoveDescription_QuiverDance,
    [MOVE_HEAVY_SLAM] = sMoveDescription_HeavySlam,
    [MOVE_SYNCHRONOISE] = sMoveDescription_Synchronoise,
    [MOVE_ELECTRO_BALL] = sMoveDescription_ElectroBall,
    [MOVE_SOAK] = sMoveDescription_Soak,
    [MOVE_FLAME_CHARGE] = sMoveDescription_FlameCharge,
    [MOVE_COIL] = sMoveDescription_Coil,
    [MOVE_LOW_SWEEP] = sMoveDescription_LowSweep,
    [MOVE_ACID_SPRAY] = sMoveDescription_AcidSpray,
    [MOVE_FOUL_PLAY] = sMoveDescription_FoulPlay,
    [MOVE_SIMPLE_BEAM] = sMoveDescription_SimpleBeam,
    [MOVE_ENTRAINMENT] = sMoveDescription_Entrainment,
    [MOVE_AFTER_YOU] = sMoveDescription_AfterYou,
    [MOVE_ROUND] = sMoveDescription_Round,
    [MOVE_ECHOED_VOICE] = sMoveDescription_EchoedVoice,
    [MOVE_CHIP_AWAY] = sMoveDescription_ChipAway,
    [MOVE_CLEAR_SMOG] = sMoveDescription_ClearSmog,
    [MOVE_STORED_POWER] = sMoveDescription_StoredPower,
    [MOVE_QUICK_GUARD] = sMoveDescription_QuickGuard,
    [MOVE_ALLY_SWITCH] = sMoveDescription_AllySwitch,
    [MOVE_SCALD] = sMoveDescription_Scald,
    [MOVE_SHELL_SMASH] = sMoveDescription_ShellSmash,
    [MOVE_HEAL_PULSE] = sMoveDescription_HealPulse,
    [MOVE_HEX] = sMoveDescription_Hex,
    [MOVE_SKY_DROP] = sMoveDescription_SkyDrop,
    [MOVE_SHIFT_GEAR] = sMoveDescription_ShiftGear,
    [MOVE_CIRCLE_THROW] = sMoveDescription_CircleThrow,
    [MOVE_INCINERATE] = sMoveDescription_Incinerate,
    [MOVE_QUASH] = sMoveDescription_Quash,
    [MOVE_ACROBATICS] = sMoveDescription_Acrobatics,
    [MOVE_REFLECT_TYPE] = sMoveDescription_ReflectType,
    [MOVE_RETALIATE] = sMoveDescription_Retaliate,
    [MOVE_FINAL_GAMBIT] = sMoveDescription_FinalGambit,
    [MOVE_BESTOW] = sMoveDescription_Bestow,
    [MOVE_INFERNO] = sMoveDescription_Inferno,
    [MOVE_WATER_PLEDGE] = sMoveDescription_WaterPledge,
    [MOVE_FIRE_PLEDGE] = sMoveDescription_FirePledge,
    [MOVE_GRASS_PLEDGE] = sMoveDescription_GrassPledge,
    [MOVE_VOLT_SWITCH] = sMoveDescription_VoltSwitch,
    [MOVE_STRUGGLE_BUG] = sMoveDescription_StruggleBug,
    [MOVE_BULLDOZE] = sMoveDescription_Bulldoze,
    [MOVE_FROST_BREATH] = sMoveDescription_FrostBreath,
    [MOVE_DRAGON_TAIL] = sMoveDescription_DragonTail,
    [MOVE_WORK_UP] = sMoveDescription_WorkUp,
    [MOVE_ELECTROWEB] = sMoveDescription_Electroweb,
    [MOVE_WILD_CHARGE] = sMoveDescription_WildCharge,
    [MOVE_DRILL_RUN] = sMoveDescription_DrillRun,
    [MOVE_DUAL_CHOP] = sMoveDescription_DualChop,
    [MOVE_HEART_STAMP] = sMoveDescription_HeartStamp,
    [MOVE_HORN_LEECH] = sMoveDescription_HornLeech,
    [MOVE_SACRED_SWORD] = sMoveDescription_SacredSword,
    [MOVE_RAZOR_SHELL] = sMoveDescription_RazorShell,
    [MOVE_HEAT_CRASH] = sMoveDescription_HeatCrash,
    [MOVE_LEAF_TORNADO] = sMoveDescription_LeafTornado,
    [MOVE_STEAMROLLER] = sMoveDescription_Steamroller,
    [MOVE_COTTON_GUARD] = sMoveDescription_CottonGuard,
    [MOVE_NIGHT_DAZE] = sMoveDescription_NightDaze,
    [MOVE_PSYSTRIKE] = sMoveDescription_Psystrike,
    [MOVE_TAIL_SLAP] = sMoveDescription_TailSlap,
    [MOVE_HURRICANE] = sMoveDescription_Hurricane,
    [MOVE_HEAD_CHARGE] = sMoveDescription_HeadCharge,
    [MOVE_GEAR_GRIND] = sMoveDescription_GearGrind,
    [MOVE_SEARING_SHOT] = sMoveDescription_SearingShot,
    [MOVE_TECHNO_BLAST] = sMoveDescription_TechnoBlast,
    [MOVE_RELIC_SONG] = sMoveDescription_RelicSong,
    [MOVE_SECRET_SWORD] = sMoveDescription_SecretSword,
    [MOVE_GLACIATE] = sMoveDescription_Glaciate,
    [MOVE_BOLT_STRIKE] = sMoveDescription_BoltStrike,
    [MOVE_BLUE_FLARE] = sMoveDescription_BlueFlare,
    [MOVE_FIERY_DANCE] = sMoveDescription_FieryDance,
    [MOVE_FREEZE_SHOCK] = sMoveDescription_FreezeShock,
    [MOVE_ICE_BURN] = sMoveDescription_IceBurn,
    [MOVE_SNARL] = sMoveDescription_Snarl,
    [MOVE_ICICLE_CRASH] = sMoveDescription_IcicleCrash,
    [MOVE_V_CREATE] = sMoveDescription_VCreate,
    [MOVE_FUSION_FLARE] = sMoveDescription_FusionFlare,
    [MOVE_FUSION_BOLT] = sMoveDescription_FusionBolt,
    [MOVE_FLYING_PRESS] = sMoveDescription_FlyingPress,
    [MOVE_MAT_BLOCK] = sMoveDescription_MatBlock,
    [MOVE_BELCH] = sMoveDescription_Belch,
    [MOVE_ROTOTILLER] = sMoveDescription_Rototiller,
    [MOVE_STICKY_WEB] = sMoveDescription_StickyWeb,
    [MOVE_FELL_STINGER] = sMoveDescription_FellStinger,
    [MOVE_PHANTOM_FORCE] = sMoveDescription_PhantomForce,
    [MOVE_TRICK_OR_TREAT] = sMoveDescription_TrickOrTreat,
    [MOVE_NOBLE_ROAR] = sMoveDescription_NobleRoar,
    [MOVE_ION_DELUGE] = sMoveDescription_IonDeluge,
    [MOVE_PARABOLIC_CHARGE] = sMoveDescription_ParabolicCharge,
    [MOVE_FORESTS_CURSE] = sMoveDescription_ForestsCurse,
    [MOVE_PETAL_BLIZZARD] = sMoveDescription_PetalBlizzard,
    [MOVE_FREEZE_DRY] = sMoveDescription_FreezeDry,
    [MOVE_DISARMING_VOICE] = sMoveDescription_DisarmingVoice,
    [MOVE_PARTING_SHOT] = sMoveDescription_PartingShot,
    [MOVE_TOPSY_TURVY] = sMoveDescription_TopsyTurvy,
    [MOVE_DRAINING_KISS] = sMoveDescription_DrainingKiss,
    [MOVE_CRAFTY_SHIELD] = sMoveDescription_CraftyShield,
    [MOVE_FLOWER_SHIELD] = sMoveDescription_FlowerShield,
    [MOVE_GRASSY_TERRAIN] = sMoveDescription_GrassyTerrain,
    [MOVE_MISTY_TERRAIN] = sMoveDescription_MistyTerrain,
    [MOVE_ELECTRIFY] = sMoveDescription_Electrify,
    [MOVE_PLAY_ROUGH] = sMoveDescription_PlayRough,
    [MOVE_FAIRY_WIND] = sMoveDescription_FairyWind,
    [MOVE_MOONBLAST] = sMoveDescription_Moonblast,
    [MOVE_BOOMBURST] = sMoveDescription_Boomburst,
    [MOVE_FAIRY_LOCK] = sMoveDescription_FairyLock,
    [MOVE_KINGS_SHIELD] = sMoveDescription_KingsShield,
    [MOVE_PLAY_NICE] = sMoveDescription_PlayNice,
    [MOVE_CONFIDE] = sMoveDescription_Confide,
    [MOVE_DIAMOND_STORM] = sMoveDescription_DiamondStorm,
    [MOVE_STEAM_ERUPTION] = sMoveDescription_SteamEruption,
    [MOVE_HYPERSPACE_HOLE] = sMoveDescription_HyperspaceHole,
    [MOVE_WATER_SHURIKEN] = sMoveDescription_WaterShuriken,
    [MOVE_MYSTICAL_FIRE] = sMoveDescription_MysticalFire,
    [MOVE_SPIKY_SHIELD] = sMoveDescription_SpikyShield,
    [MOVE_AROMATIC_MIST] = sMoveDescription_AromaticMist,
    [MOVE_EERIE_IMPULSE] = sMoveDescription_EerieImpulse,
    [MOVE_VENOM_DRENCH] = sMoveDescription_VenomDrench,
    [MOVE_POWDER] = sMoveDescription_Powder,
    [MOVE_GEOMANCY] = sMoveDescription_Geomancy,
    [MOVE_MAGNETIC_FLUX] = sMoveDescription_MagneticFlux,
    [MOVE_HAPPY_HOUR] = sMoveDescription_HappyHour,
    [MOVE_ELECTRIC_TERRAIN] = sMoveDescription_ElectricTerrain,
    [MOVE_DAZZLING_GLEAM] = sMoveDescription_DazzlingGleam,
    [MOVE_CELEBRATE] = sMoveDescription_Celebrate,
    [MOVE_HOLD_HANDS] = sMoveDescription_HoldHands,
    [MOVE_BABY_DOLL_EYES] = sMoveDescription_BabyDollEyes,
    [MOVE_NUZZLE] = sMoveDescription_Nuzzle,
    [MOVE_HOLD_BACK] = sMoveDescription_HoldBack,
    [MOVE_INFESTATION] = sMoveDescription_Infestation,
    [MOVE_POWER_UP_PUNCH] = sMoveDescription_PowerUpPunch,
    [MOVE_OBLIVION_WING] = sMoveDescription_OblivionWing,
    [MOVE_THOUSAND_ARROWS] = sMoveDescription_ThousandArrows,
    [MOVE_THOUSAND_WAVES] = sMoveDescription_ThousandWaves,
    [MOVE_LANDS_WRATH] = sMoveDescription_LandsWrath,
    [MOVE_LIGHT_OF_RUIN] = sMoveDescription_LightOfRuin,
    [MOVE_ORIGIN_PULSE] = sMoveDescription_OriginPulse,
    [MOVE_PRECIPICE_BLADES] = sMoveDescription_PrecipiceBlades,
    [MOVE_DRAGON_ASCENT] = sMoveDescription_DragonAscent,
    [MOVE_HYPERSPACE_FURY] = sMoveDescription_HyperspaceFury,
    [MOVE_SHORE_UP] = sMoveDescription_ShoreUp,
    [MOVE_FIRST_IMPRESSION] = sMoveDescription_FirstImpression,
    [MOVE_BANEFUL_BUNKER] = sMoveDescription_BanefulBunker,
    [MOVE_SPIRIT_SHACKLE] = sMoveDescription_SpiritShackle,
    [MOVE_DARKEST_LARIAT] = sMoveDescription_DarkestLariat,
    [MOVE_SPARKLING_ARIA] = sMoveDescription_SparklingAria,
    [MOVE_ICE_HAMMER] = sMoveDescription_IceHammer,
    [MOVE_FLORAL_HEALING] = sMoveDescription_FloralHealing,
    [MOVE_HIGH_HORSEPOWER] = sMoveDescription_HighHorsepower,
    [MOVE_STRENGTH_SAP] = sMoveDescription_StrengthSap,
    [MOVE_SOLAR_BLADE] = sMoveDescription_SolarBlade,
    [MOVE_LEAFAGE] = sMoveDescription_Leafage,
    [MOVE_SPOTLIGHT] = sMoveDescription_Spotlight,
    [MOVE_TOXIC_THREAD] = sMoveDescription_ToxicThread,
    [MOVE_LASER_FOCUS] = sMoveDescription_LaserFocus,
    [MOVE_GEAR_UP] = sMoveDescription_GearUp,
    [MOVE_THROAT_CHOP] = sMoveDescription_ThroatChop,
    [MOVE_POLLEN_PUFF] = sMoveDescription_PollenPuff,
    [MOVE_ANCHOR_SHOT] = sMoveDescription_AnchorShot,
    [MOVE_PSYCHIC_TERRAIN] = sMoveDescription_PsychicTerrain,
    [MOVE_LUNGE] = sMoveDescription_Lunge,
    [MOVE_FIRE_LASH] = sMoveDescription_FireLash,
    [MOVE_POWER_TRIP] = sMoveDescription_PowerTrip,
    [MOVE_BURN_UP] = sMoveDescription_BurnUp,
    [MOVE_SPEED_SWAP] = sMoveDescription_SpeedSwap,
    [MOVE_SMART_STRIKE] = sMoveDescription_SmartStrike,
    [MOVE_PURIFY] = sMoveDescription_Purify,
    [MOVE_REVELATION_DANCE] = sMoveDescription_RevelationDance,
    [MOVE_CORE_ENFORCER] = sMoveDescription_CoreEnforcer,
    [MOVE_TROP_KICK] = sMoveDescription_TropKick,
    [MOVE_INSTRUCT] = sMoveDescription_Instruct,
    [MOVE_BEAK_BLAST] = sMoveDescription_BeakBlast,
    [MOVE_CLANGING_SCALES] = sMoveDescription_ClangingScales,
    [MOVE_DRAGON_HAMMER] = sMoveDescription_DragonHammer,
    [MOVE_BRUTAL_SWING] = sMoveDescription_BrutalSwing,
    [MOVE_AURORA_VEIL] = sMoveDescription_AuroraVeil,
    [MOVE_SHELL_TRAP] = sMoveDescription_ShellTrap,
    [MOVE_FLEUR_CANNON] = sMoveDescription_FleurCannon,
    [MOVE_PSYCHIC_FANGS] = sMoveDescription_PsychicFangs,
    [MOVE_STOMPING_TANTRUM] = sMoveDescription_StompingTantrum,
    [MOVE_SHADOW_BONE] = sMoveDescription_ShadowBone,
    [MOVE_ACCELEROCK] = sMoveDescription_Accelerock,
    [MOVE_LIQUIDATION] = sMoveDescription_Liquidation,
    [MOVE_PRISMATIC_LASER] = sMoveDescription_PrismaticLaser,
    [MOVE_SPECTRAL_THIEF] = sMoveDescription_SpectralThief,
    [MOVE_SUNSTEEL_STRIKE] = sMoveDescription_SunsteelStrike,
    [MOVE_MOONGEIST_BEAM] = sMoveDescription_MoongeistBeam,
    [MOVE_TEARFUL_LOOK] = sMoveDescription_TearfulLook,
    [MOVE_ZING_ZAP] = sMoveDescription_ZingZap,
    [MOVE_NATURES_MADNESS] = sMoveDescription_NaturesMadness,
    [MOVE_MULTI_ATTACK] = sMoveDescription_MultiAttack,
    [MOVE_MIND_BLOWN] = sMoveDescription_MindBlown,
    [MOVE_PLASMA_FISTS] = sMoveDescription_PlasmaFists,
    [MOVE_PHOTON_GEYSER] = sMoveDescription_PhotonGeyser,
    [MOVE_ZIPPY_ZAP] = sMoveDescription_ZippyZap,
    [MOVE_SPLISHY_SPLASH] = sMoveDescription_SplishySplash,
    [MOVE_FLOATY_FALL] = sMoveDescription_FloatyFall,
    [MOVE_PIKA_PAPOW] = sMoveDescription_PikaPapow,
    [MOVE_BOUNCY_BUBBLE] = sMoveDescription_BouncyBubble,
    [MOVE_BUZZY_BUZZ] = sMoveDescription_BuzzyBuzz,
    [MOVE_SIZZLY_SLIDE] = sMoveDescription_SizzlySlide,
    [MOVE_GLITZY_GLOW] = sMoveDescription_GlitzyGlow,
    [MOVE_BADDY_BAD] = sMoveDescription_BaddyBad,
    [MOVE_SAPPY_SEED] = sMoveDescription_SappySeed,
    [MOVE_FREEZY_FROST] = sMoveDescription_FreezyFrost,
    [MOVE_SPARKLY_SWIRL] = sMoveDescription_SparklySwirl,
    [MOVE_VEEVEE_VOLLEY] = sMoveDescription_VeeveeVolley,
    [MOVE_DOUBLE_IRON_BASH] = sMoveDescription_DoubleIronBash,
    [MOVE_DYNAMAX_CANNON] = sMoveDescription_DynamaxCannon,
    [MOVE_SNIPE_SHOT] = sMoveDescription_SnipeShot,
    [MOVE_JAW_LOCK] = sMoveDescription_JawLock,
    [MOVE_STUFF_CHEEKS] = sMoveDescription_StuffCheeks,
    [MOVE_NO_RETREAT] = sMoveDescription_NoRetreat,
    [MOVE_TAR_SHOT] = sMoveDescription_TarShot,
    [MOVE_MAGIC_POWDER] = sMoveDescription_MagicPowder,
    [MOVE_DRAGON_DARTS] = sMoveDescription_DragonDarts,
    [MOVE_TEATIME] = sMoveDescription_Teatime,
    [MOVE_OCTOLOCK] = sMoveDescription_Octolock,
    [MOVE_BOLT_BEAK] = sMoveDescription_BoltBeak,
    [MOVE_FISHIOUS_REND] = sMoveDescription_FishiousRend,
    [MOVE_COURT_CHANGE] = sMoveDescription_CourtChange,
    [MOVE_CLANGOROUS_SOUL] = sMoveDescription_ClangorousSoul,
    [MOVE_BODY_PRESS] = sMoveDescription_BodyPress,
    [MOVE_DECORATE] = sMoveDescription_Decorate,
    [MOVE_DRUM_BEATING] = sMoveDescription_DrumBeating,
    [MOVE_SNAP_TRAP] = sMoveDescription_SnapTrap,
    [MOVE_PYRO_BALL] = sMoveDescription_PyroBall,
    [MOVE_BEHEMOTH_BLADE] = sMoveDescription_BehemothBlade,
    [MOVE_BEHEMOTH_BASH] = sMoveDescription_BehemothBash,
    [MOVE_AURA_WHEEL] = sMoveDescription_AuraWheel,
    [MOVE_BREAKING_SWIPE] = sMoveDescription_BreakingSwipe,
    [MOVE_BRANCH_POKE] = sMoveDescription_BranchPoke,
    [MOVE_OVERDRIVE] = sMoveDescription_Overdrive,
    [MOVE_APPLE_ACID] = sMoveDescription_AppleAcid,
    [MOVE_GRAV_APPLE] = sMoveDescription_GravApple,
    [MOVE_SPIRIT_BREAK] = sMoveDescription_SpiritBreak,
    [MOVE_STRANGE_STEAM] = sMoveDescription_StrangeSteam,
    [MOVE_LIFE_DEW] = sMoveDescription_LifeDew,
    [MOVE_OBSTRUCT] = sMoveDescription_Obstruct,
    [MOVE_FALSE_SURRENDER] = sMoveDescription_FalseSurrender,
    [MOVE_METEOR_ASSAULT] = sMoveDescription_MeteorAssault,
    [MOVE_ETERNABEAM] = sMoveDescription_Eternabeam,
    [MOVE_STEEL_BEAM] = sMoveDescription_SteelBeam,
    [MOVE_EXPANDING_FORCE] = sMoveDescription_ExpandingForce,
    [MOVE_STEEL_ROLLER] = sMoveDescription_SteelRoller,
    [MOVE_SCALE_SHOT] = sMoveDescription_ScaleShot,
    [MOVE_METEOR_BEAM] = sMoveDescription_MeteorBeam,
    [MOVE_SHELL_SIDE_ARM] = sMoveDescription_ShellSideArm,
    [MOVE_MISTY_EXPLOSION] = sMoveDescription_MistyExplosion,
    [MOVE_GRASSY_GLIDE] = sMoveDescription_GrassyGlide,
    [MOVE_RISING_VOLTAGE] = sMoveDescription_RisingVoltage,
    [MOVE_TERRAIN_PULSE] = sMoveDescription_TerrainPulse,
    [MOVE_SKITTER_SMACK] = sMoveDescription_SkitterSmack,
    [MOVE_BURNING_JEALOUSY] = sMoveDescription_BurningJealousy,
    [MOVE_LASH_OUT] = sMoveDescription_LashOut,
    [MOVE_POLTERGEIST] = sMoveDescription_Poltergeist,
    [MOVE_CORROSIVE_GAS] = sMoveDescription_CorrosiveGas,
    [MOVE_COACHING] = sMoveDescription_Coaching,
    [MOVE_FLIP_TURN] = sMoveDescription_FlipTurn,
    [MOVE_TRIPLE_AXEL] = sMoveDescription_TripleAxel,
    [MOVE_DUAL_WINGBEAT] = sMoveDescription_DualWingbeat,
    [MOVE_SCORCHING_SANDS] = sMoveDescription_ScorchingSand,
    [MOVE_JUNGLE_HEALING] = sMoveDescription_JungleHealing,
    [MOVE_WICKED_BLOW] = sMoveDescription_WickedBlow,
    [MOVE_SURGING_STRIKES] = sMoveDescription_SurgingStrikes,
    [MOVE_THUNDER_CAGE] = sMoveDescription_ThunderCage,
    [MOVE_DRAGON_ENERGY] = sMoveDescription_DragonEnergy,
    [MOVE_FREEZING_GLARE] = sMoveDescription_FreezingGlare,
    [MOVE_FIERY_WRATH] = sMoveDescription_FieryWrath,
    [MOVE_THUNDEROUS_KICK] = sMoveDescription_ThunderousKick,
    [MOVE_GLACIAL_LANCE] = sMoveDescription_GlacialLance,
    [MOVE_ASTRAL_BARRAGE] = sMoveDescription_AstralBarrage,
    [MOVE_EERIE_SPELL] = sMoveDescription_EerieSpell,
    [MOVE_DIRE_CLAW] = sMoveDescription_DireClaw,
    [MOVE_PSYSHIELD_BASH] = sMoveDescription_PsyshieldBash,
    [MOVE_POWER_SHIFT] = sMoveDescription_PowerShift,
    [MOVE_STONE_AXE] = sMoveDescription_StoneAxe,
    [MOVE_SPRINGTIDE_STORM] = sMoveDescription_SpringtideStorm,
    [MOVE_MYSTICAL_POWER] = sMoveDescription_MysticalPower,
    [MOVE_RAGING_FURY] = sMoveDescription_RagingFury,
    [MOVE_WAVE_CRASH] = sMoveDescription_WaveCrash,
    [MOVE_CHLOROBLAST] = sMoveDescription_Chloroblast,
    [MOVE_MOUNTAIN_GALE] = sMoveDescription_MountainGale,
    [MOVE_VICTORY_DANCE] = sMoveDescription_VictoryDance,
    [MOVE_HEADLONG_RUSH] = sMoveDescription_HeadlongRush,
    [MOVE_BARB_BARRAGE] = sMoveDescription_BarbBarrage,
    [MOVE_ESPER_WING] = sMoveDescription_EsperWing,
    [MOVE_BITTER_MALICE] = sMoveDescription_BitterMalice,
    [MOVE_SHELTER] = sMoveDescription_Shelter,
    [MOVE_TRIPLE_ARROWS] = sMoveDescription_TripleArrows,
    [MOVE_INFERNAL_PARADE] = sMoveDescription_InfernalParade,
    [MOVE_CEASELESS_EDGE] = sMoveDescription_CeaselessEdge,
    [MOVE_BLEAKWIND_STORM] = sMoveDescription_BleakwindStorm,
    [MOVE_WILDBOLT_STORM] = sMoveDescription_WildboltStorm,
    [MOVE_SANDSEAR_STORM] = sMoveDescription_SandsearStorm,
    [MOVE_LUNAR_BLESSING] = sMoveDescription_LunarBlessing,
    [MOVE_TAKE_HEART] = sMoveDescription_TakeHeart,
    [MOVE_TERA_BLAST] = sMoveDescription_TeraBlast,
    [MOVE_SILK_TRAP] = sMoveDescription_SilkTrap,
    [MOVE_AXE_KICK] = sMoveDescription_AxeKick,
    [MOVE_LAST_RESPECTS] = sMoveDescription_LastRespects,
    [MOVE_LUMINA_CRASH] = sMoveDescription_LuminaCrash,
    [MOVE_ORDER_UP] = sMoveDescription_OrderUp,
    [MOVE_JET_PUNCH] = sMoveDescription_JetPunch,
    [MOVE_SPICY_EXTRACT] = sMoveDescription_SpicyExtract,
    [MOVE_SPIN_OUT] = sMoveDescription_SpinOut,
    [MOVE_POPULATION_BOMB] = sMoveDescription_PopulationBomb,
    [MOVE_ICE_SPINNER] = sMoveDescription_IceSpinner,
    [MOVE_GLAIVE_RUSH] = sMoveDescription_GlaiveRush,
    [MOVE_REVIVAL_BLESSING] = sMoveDescription_RevivalBlessing,
    [MOVE_SALT_CURE] = sMoveDescription_SaltCure,
    [MOVE_TRIPLE_DIVE] = sMoveDescription_TripleDive,
    [MOVE_MORTAL_SPIN] = sMoveDescription_MortalSpin,
    [MOVE_DOODLE] = sMoveDescription_Doodle,
    [MOVE_FILLET_AWAY] = sMoveDescription_FilletAway,
    [MOVE_KOWTOW_CLEAVE] = sMoveDescription_KowtowCleave,
    [MOVE_FLOWER_TRICK] = sMoveDescription_FlowerTrick,
    [MOVE_TORCH_SONG] = sMoveDescription_TorchSong,
    [MOVE_AQUA_STEP] = sMoveDescription_AquaStep,
    [MOVE_RAGING_BULL] = sMoveDescription_RagingBull,
    [MOVE_MAKE_IT_RAIN] = sMoveDescription_MakeItRain,
    [MOVE_RUINATION] = sMoveDescription_Ruination,
    [MOVE_COLLISION_COURSE] = sMoveDescription_CollisionCourse,
    [MOVE_ELECTRO_DRIFT] = sMoveDescription_ElectroDrift,
    [MOVE_SHED_TAIL] = sMoveDescription_ShedTail,
    [MOVE_CHILLY_RECEPTION] = sMoveDescription_ChillyReception,
    [MOVE_TIDY_UP] = sMoveDescription_TidyUp,
    [MOVE_SNOWSCAPE] = sMoveDescription_Snowscape,
    [MOVE_POUNCE] = sMoveDescription_Pounce,
    [MOVE_TRAILBLAZE] = sMoveDescription_Trailblaze,
    [MOVE_CHILLING_WATER] = sMoveDescription_ChillingWater,
    [MOVE_HYPER_DRILL] = sMoveDescription_HyperDrill,
    [MOVE_TWIN_BEAM] = sMoveDescription_TwinBeam,
    [MOVE_RAGE_FIST] = sMoveDescription_RageFist,
    [MOVE_ARMOR_CANNON] = sMoveDescription_ArmorCannon,
    [MOVE_BITTER_BLADE] = sMoveDescription_BitterBlade,
    [MOVE_DOUBLE_SHOCK] = sMoveDescription_DoubleShock,
    [MOVE_GIGATON_HAMMER] = sMoveDescription_GigatonHammer,
    [MOVE_COMEUPPANCE] = sMoveDescription_Comeuppance,
    [MOVE_AQUA_CUTTER] = sMoveDescription_AquaCutter,
    [MOVE_BLAZING_TORQUE] = sMoveDescription_BlazingTorque,
    [MOVE_WICKED_TORQUE] = sMoveDescription_WickedTorque,
    [MOVE_NOXIOUS_TORQUE] = sMoveDescription_NoxiousTorque,
    [MOVE_COMBAT_TORQUE] = sMoveDescription_CombatTorque,
    [MOVE_MAGICAL_TORQUE] = sMoveDescription_MagicalTorque,
    [MOVE_PSYBLADE] = sMoveDescription_Psyblade,
    [MOVE_HYDRO_STEAM] = sMoveDescription_HydroSteam,
    [MOVE_BLOOD_MOON] = sMoveDescription_BloodMoon,
    [MOVE_MATCHA_GOTCHA] = sMoveDescription_MatchaGotcha,
    [MOVE_SYRUP_BOMB] = sMoveDescription_SyrupBomb,
    [MOVE_IVY_CUDGEL] = sMoveDescription_IvyCudgel,
    [MOVE_ELECTRO_SHOT] = sMoveDescription_ElectroShot,
    [MOVE_TERA_STARSTORM] = sMoveDescription_TeraStarstorm,
    [MOVE_FICKLE_BEAM] = sMoveDescription_FickleBeam,
    [MOVE_BURNING_BULWARK] = sMoveDescription_BurningBulwark,
    [MOVE_THUNDERCLAP] = sMoveDescription_Thunderclap,
    [MOVE_MIGHTY_CLEAVE] = sMoveDescription_MightyCleave,
    [MOVE_TACHYON_CUTTER] = sMoveDescription_TachyonCutter,
    [MOVE_HARD_PRESS] = sMoveDescription_HardPress,
    [MOVE_DRAGON_CHEER] = sMoveDescription_DragonCheer,
    [MOVE_ALLURING_VOICE] = sMoveDescription_AlluringVoice,
    [MOVE_TEMPER_FLARE] = sMoveDescription_TemperFlare,
    [MOVE_SUPERCELL_SLAM] = sMoveDescription_SupercellSlam,
    [MOVE_PSYCHIC_NOISE] = sMoveDescription_PsychicNoise,
    [MOVE_UPPER_HAND] = sMoveDescription_UpperHand,
    [MOVE_MALIGNANT_CHAIN] = sMoveDescription_MalignantChain,
    [MOVE_BREAKNECK_BLITZ] = sMoveDescription_BreakneckBlitz,
    [MOVE_ALL_OUT_PUMMELING] = sMoveDescription_AllOutPummeling,
    [MOVE_SUPERSONIC_SKYSTRIKE] = sMoveDescription_SupersonicSkystrike,
    [MOVE_ACID_DOWNPOUR] = sMoveDescription_AcidDownpour,
    [MOVE_TECTONIC_RAGE] = sMoveDescription_TectonicRage,
    [MOVE_CONTINENTAL_CRUSH] = sMoveDescription_ContinentalCrush,
    [MOVE_SAVAGE_SPIN_OUT] = sMoveDescription_SavageSpinOut,
    [MOVE_NEVER_ENDING_NIGHTMARE] = sMoveDescription_NeverEndingNightmare,
    [MOVE_CORKSCREW_CRASH] = sMoveDescription_CorkscrewCrash,
    [MOVE_INFERNO_OVERDRIVE] = sMoveDescription_InfernoOverdrive,
    [MOVE_HYDRO_VORTEX] = sMoveDescription_HydroVortex,
    [MOVE_BLOOM_DOOM] = sMoveDescription_BloomDoom,
    [MOVE_GIGAVOLT_HAVOC] = sMoveDescription_GigavoltHavoc,
    [MOVE_SHATTERED_PSYCHE] = sMoveDescription_ShatteredPsyche,
    [MOVE_SUBZERO_SLAMMER] = sMoveDescription_SubzeroSlammer,
    [MOVE_DEVASTATING_DRAKE] = sMoveDescription_DevastatingDrake,
    [MOVE_BLACK_HOLE_ECLIPSE] = sMoveDescription_BlackHoleEclipse,
    [MOVE_TWINKLE_TACKLE] = sMoveDescription_TwinkleTackle,
    [MOVE_CATASTROPIKA] = sMoveDescription_Catastropika,
    [MOVE_10000000_VOLT_THUNDERBOLT] = sMoveDescription_10000000VoltThunderbolt,
    [MOVE_STOKED_SPARKSURFER] = sMoveDescription_StokedSparksurfer,
    [MOVE_EXTREME_EVOBOOST] = sMoveDescription_ExtremeEvoboost,
    [MOVE_PULVERIZING_PANCAKE] = sMoveDescription_PulverizingPancake,
    [MOVE_GENESIS_SUPERNOVA] = sMoveDescription_GenesisSupernova,
    [MOVE_SINISTER_ARROW_RAID] = sMoveDescription_SinisterArrowRaid,
    [MOVE_MALICIOUS_MOONSAULT] = sMoveDescription_MaliciousMoonsault,
    [MOVE_OCEANIC_OPERETTA] = sMoveDescription_OceanicOperetta,
    [MOVE_SPLINTERED_STORMSHARDS] = sMoveDescription_SplinteredStormshards,
    [MOVE_LETS_SNUGGLE_FOREVER] = sMoveDescription_LetsSnuggleForever,
    [MOVE_CLANGOROUS_SOULBLAZE] = sMoveDescription_ClangorousSoulblaze,
    [MOVE_GUARDIAN_OF_ALOLA] = sMoveDescription_GuardianOfAlola,
    [MOVE_SEARING_SUNRAZE_SMASH] = sMoveDescription_SearingSunrazeSmash,
    [MOVE_MENACING_MOONRAZE_MAELSTROM] = sMoveDescription_MenacingMoonrazeMaelstrom,
    [MOVE_LIGHT_THAT_BURNS_THE_SKY] = sMoveDescription_LightThatBurnsTheSky,
    [MOVE_SOUL_STEALING_7_STAR_STRIKE] = sMoveDescription_SoulStealing7StarStrike,
    [MOVE_MAX_GUARD] = sMoveDescription_MaxGuard,
    [MOVE_MAX_FLARE] = sMoveDescription_MaxFlare,
    [MOVE_MAX_FLUTTERBY] = sMoveDescription_MaxFlutterby,
    [MOVE_MAX_LIGHTNING] = sMoveDescription_MaxLightning,
    [MOVE_MAX_STRIKE] = sMoveDescription_MaxStrike,
    [MOVE_MAX_KNUCKLE] = sMoveDescription_MaxKnuckle,
    [MOVE_MAX_PHANTASM] = sMoveDescription_MaxPhantasm,
    [MOVE_MAX_HAILSTORM] = sMoveDescription_MaxHailstorm,
    [MOVE_MAX_OOZE] = sMoveDescription_MaxOoze,
    [MOVE_MAX_GEYSER] = sMoveDescription_MaxGeyser,
    [MOVE_MAX_AIRSTREAM] = sMoveDescription_MaxAirstream,
    [MOVE_MAX_STARFALL] = sMoveDescription_MaxStarfall,
    [MOVE_MAX_WYRMWIND] = sMoveDescription_MaxWyrmwind,
    [MOVE_MAX_MINDSTORM] = sMoveDescription_MaxMindstorm,
    [MOVE_MAX_ROCKFALL] = sMoveDescription_MaxRockfall,
    [MOVE_MAX_QUAKE] = sMoveDescription_MaxQuake,
    [MOVE_MAX_DARKNESS] = sMoveDescription_MaxDarkness,
    [MOVE_MAX_OVERGROWTH] = sMoveDescription_MaxOvergrowth,
    [MOVE_MAX_STEELSPIKE] = sMoveDescription_MaxSteelspike,
    [MOVE_G_MAX_VINE_LASH] = sMoveDescription_GMaxVineLash,
    [MOVE_G_MAX_WILDFIRE] = sMoveDescription_GMaxWildfire,
    [MOVE_G_MAX_CANNONADE] = sMoveDescription_GMaxCannonade,
    [MOVE_G_MAX_BEFUDDLE] = sMoveDescription_GMaxBefuddle,
    [MOVE_G_MAX_VOLT_CRASH] = sMoveDescription_GMaxVoltCrash,
    [MOVE_G_MAX_GOLD_RUSH] = sMoveDescription_GMaxGoldRush,
    [MOVE_G_MAX_CHI_STRIKE] = sMoveDescription_GMaxChiStrike,
    [MOVE_G_MAX_TERROR] = sMoveDescription_GMaxTerror,
    [MOVE_G_MAX_FOAM_BURST] = sMoveDescription_GMaxFoamBurst,
    [MOVE_G_MAX_RESONANCE] = sMoveDescription_GMaxResonance,
    [MOVE_G_MAX_CUDDLE] = sMoveDescription_GMaxCuddle,
    [MOVE_G_MAX_REPLENISH] = sMoveDescription_GMaxReplenish,
    [MOVE_G_MAX_MALODOR] = sMoveDescription_GMaxMalodor,
    [MOVE_G_MAX_MELTDOWN] = sMoveDescription_GMaxMeltdown,
    [MOVE_G_MAX_DRUM_SOLO] = sMoveDescription_GMaxDrumSolo,
    [MOVE_G_MAX_FIREBALL] = sMoveDescription_GMaxFireball,
    [MOVE_G_MAX_HYDROSNIPE] = sMoveDescription_GMaxHydrosnipe,
    [MOVE_G_MAX_WIND_RAGE] = sMoveDescription_GMaxWindRage,
    [MOVE_G_MAX_GRAVITAS] = sMoveDescription_GMaxGravitas,
    [MOVE_G_MAX_STONESURGE] = sMoveDescription_GMaxStonesurge,
    [MOVE_G_MAX_VOLCALITH] = sMoveDescription_GMaxVolcalith,
    [MOVE_G_MAX_TARTNESS] = sMoveDescription_GMaxTartness,
    [MOVE_G_MAX_SWEETNESS] = sMoveDescription_GMaxSweetness,
    [MOVE_G_MAX_SANDBLAST] = sMoveDescription_GMaxSandblast,
    [MOVE_G_MAX_STUN_SHOCK] = sMoveDescription_GMaxStunShock,
    [MOVE_G_MAX_CENTIFERNO] = sMoveDescription_GMaxCentiferno,
    [MOVE_G_MAX_SMITE] = sMoveDescription_GMaxSmite,
    [MOVE_G_MAX_SNOOZE] = sMoveDescription_GMaxSnooze,
    [MOVE_G_MAX_FINALE] = sMoveDescription_GMaxFinale,
    [MOVE_G_MAX_STEELSURGE] = sMoveDescription_GMaxSteelsurge,
    [MOVE_G_MAX_DEPLETION] = sMoveDescription_GMaxDepletion,
    [MOVE_G_MAX_ONE_BLOW] = sMoveDescription_GMaxOneBlow,
    [MOVE_G_MAX_RAPID_FLOW] = sMoveDescription_GMaxRapidFlow,
};
