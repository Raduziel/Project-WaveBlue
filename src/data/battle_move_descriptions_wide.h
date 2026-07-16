#include "global.h"
#include "constants/moves.h"

static const u8 sMoveDescription_None[] = _("");
static const u8 sMoveDescription_Pound[] = _(
    "Pounds the foe with forelegs\n" 
    "or tail."
    );
static const u8 sMoveDescription_KarateChop[] = _(
    "A chopping attack with a high\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_DoubleSlap[] = _(
    "Repeatedly slaps the foe 2 to\n" 
    "5 times."
    );
static const u8 sMoveDescription_CometPunch[] = _(
    "Repeatedly punches the foe 2\n" 
    "to 5 times."
    );
static const u8 sMoveDescription_MegaPunch[] = _(
    "A strong punch thrown with\n" 
    "incredible power."
    );
static const u8 sMoveDescription_PayDay[] = _(
    "Throws coins at the foe. Money\n" 
    "is recovered after."
    );
static const u8 sMoveDescription_FirePunch[] = _(
    "A fiery punch that may burn\n" 
    "the foe."
    );
static const u8 sMoveDescription_IcePunch[] = _(
#if B_USE_FROSTBITE == TRUE
    "An icy punch that may leave\n"
    "the foe with frostbite."
#else
    "An icy punch that may\n"
    "freeze the foe."
#endif
);
static const u8 sMoveDescription_ThunderPunch[] = _(
    "An electrified punch that may\n" 
    "paralyze the foe."
    );
static const u8 sMoveDescription_Scratch[] = _(
    "Scratches the foe with sharp\n" 
    "claws."
    );
static const u8 sMoveDescription_ViseGrip[] = _(
    "Grips the foe with large and\n" 
    "powerful pincers."
    );
static const u8 sMoveDescription_Guillotine[] = _(
    "A powerful pincer attack that\n" 
    "KOs if it hits."
    );
static const u8 sMoveDescription_RazorWind[] = _(
    "A 2-turn move with a high\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_SwordsDance[] = _(
    "A fighting dance that sharply\n" 
    "raises Attack."
    );
static const u8 sMoveDescription_Cut[] = _(
    "Cuts with sharp scythes, claws,\n"
    "etc. High critical-hit ratio."
    );
static const u8 sMoveDescription_Gust[] = _(
    "Strikes the foe with a gust of\n" 
    "wind whipped up by wings."
    );
static const u8 sMoveDescription_WingAttack[] = _(
    "Strikes the foe with wings\n" 
    "spread wide."
    );
static const u8 sMoveDescription_Whirlwind[] = _(
    "Blows away the foe, switches\n" 
    "it out or ends wild battle."
    );
static const u8 sMoveDescription_Fly[] = _(
    "Flies up on the first turn,\n" 
    "then strikes the next turn."
    );
static const u8 sMoveDescription_Bind[] = _(
    "Binds and squeezes the foe for\n" 
    "turns."
    );
static const u8 sMoveDescription_Slam[] = _(
    "Slams the foe with a long\n" 
    "tail, vine, etc."
    );
static const u8 sMoveDescription_VineWhip[] = _(
    "Strikes the foe with slender,\n" 
    "whiplike vines."
    );
static const u8 sMoveDescription_Stomp[] = _(
    "Stomps the enemy with a big\n" 
    "foot. May cause flinching."
    );
static const u8 sMoveDescription_DoubleKick[] = _(
    "A double-kicking attack that\n" 
    "strikes the foe twice."
    );
static const u8 sMoveDescription_MegaKick[] = _(
    "An extremely powerful kick\n" 
    "with intense force."
    );
static const u8 sMoveDescription_JumpKick[] = _(
    "A strong jumping kick. May\n" 
    "miss and hurt the kicker."
    );
static const u8 sMoveDescription_RollingKick[] = _(
    "A fast kick delivered from a\n" 
    "rapid spin. May flinch."
    );
static const u8 sMoveDescription_SandAttack[] = _(
    "Reduces the foe's accuracy by\n" 
    "hurling sand in its face."
    );
static const u8 sMoveDescription_Headbutt[] = _(
    "A ramming attack that may\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_HornAttack[] = _(
    "Jabs the foe with sharp horns."
    );
static const u8 sMoveDescription_FuryAttack[] = _(
    "Jabs the foe 2 to 5 times with\n" 
    "sharp horns, etc."
    );
static const u8 sMoveDescription_HornDrill[] = _(
    "A one-hit KO attack that uses\n" 
    "a horn like a drill."
    );
static const u8 sMoveDescription_Tackle[] = _(
    "Charges the foe with a full-\n" 
    "body tackle."
    );
static const u8 sMoveDescription_BodySlam[] = _(
    "A full-body slam that may\n" 
    "cause paralysis."
    );
static const u8 sMoveDescription_Wrap[] = _(
    "Wraps and squeezes the foe\n" 
    "times with vines, etc."
    );
static const u8 sMoveDescription_TakeDown[] = _(
    "A reckless charge attack that\n" 
    "also hurts the user."
    );
static const u8 sMoveDescription_Thrash[] = _(
    "A rampage of 2 to 3 turns that\n" 
    "confuses the user."
    );
static const u8 sMoveDescription_DoubleEdge[] = _(
    "A life-risking tackle that\n" 
    "also hurts the user."
    );
static const u8 sMoveDescription_TailWhip[] = _(
    "Wags the tail to lower the\n" 
    "foe's Defense."
    );
static const u8 sMoveDescription_PoisonSting[] = _(
    "A toxic attack with barbs,\n" 
    "etc., that may poison."
    );
static const u8 sMoveDescription_Twineedle[] = _(
    "Foreleg stingers jab foe\n" 
    "twice. May poison."
    );
static const u8 sMoveDescription_PinMissile[] = _(
    "Sharp pins are fired to strike\n" 
    "2 to 5 times."
    );
static const u8 sMoveDescription_Leer[] = _(
    "Frightens the foes with a leer\n" 
    "to lower Defense."
    );
static const u8 sMoveDescription_Bite[] = _(
    "Bites with vicious fangs. May\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_Growl[] = _(
    "Growls cutely to reduce the\n" 
    "foe's Attack."
    );
static const u8 sMoveDescription_Roar[] = _(
    "Switches the foe out or ends\n" 
    "wild battle."
    );
static const u8 sMoveDescription_Sing[] = _(
    "A soothing song lulls the foe\n" 
    "into a deep slumber."
    );
static const u8 sMoveDescription_Supersonic[] = _(
    "Emits bizarre sound waves that\n" 
    "may confuse the foe."
    );
static const u8 sMoveDescription_SonicBoom[] = _(
    "Launches shock waves that\n" 
    "always inflict 20 HP damage."
    );
static const u8 sMoveDescription_Disable[] = _(
    "Prevents use of the foe's\n"
    "last move for 4 turns."
    );
static const u8 sMoveDescription_Acid[] = _(
    "Sprays a hide-melting acid.\n" 
    "May lower Sp. Def."
    );
static const u8 sMoveDescription_Ember[] = _(
    "A weak fire attack that may\n" 
    "inflict a burn."
    );
static const u8 sMoveDescription_Flamethrower[] = _(
    "A powerful fire attack that\n" 
    "may inflict a burn."
    );
static const u8 sMoveDescription_Mist[] = _(
    "Creates a mist that stops\n" 
    "reduction of stats."
    );
static const u8 sMoveDescription_WaterGun[] = _(
    "Squirts water to attack the\n" 
    "foe."
    );
static const u8 sMoveDescription_HydroPump[] = _(
    "Blasts water at high power to\n" 
    "strike the foe."
    );
static const u8 sMoveDescription_Surf[] = _(
    "Creates a huge wave, then\n" 
    "crashes it down on the field."
    );
static const u8 sMoveDescription_IceBeam[] = _(
#if B_USE_FROSTBITE == TRUE
    "Blasts the foe with an icy\n"
    "beam. May cause frostbite."
#else
    "Blasts the foe with an icy\n"
    "beam. May freeze the foe."
#endif
);

static const u8 sMoveDescription_Blizzard[] = _(
#if B_USE_FROSTBITE == TRUE
    "Hits the foes with an icy\n"
    "storm. May cause frostbite."
#else
    "Hits the foes with an icy\n"
    "storm. May freeze the foe."
#endif
);
static const u8 sMoveDescription_Psybeam[] = _(
    "Fires a peculiar ray that may\n" 
    "confuse the foe."
    );
static const u8 sMoveDescription_BubbleBeam[] = _(
    "Forcefully sprays bubbles that\n" 
    "may lower Speed."
    );
static const u8 sMoveDescription_AuroraBeam[] = _(
    "Fires a rainbow-colored beam\n" 
    "that may lower Attack."
    );
static const u8 sMoveDescription_HyperBeam[] = _(
    "Leaves the user immobile if\n" 
    "target is not KO'd."
    );
static const u8 sMoveDescription_Peck[] = _(
    "Attacks the foe with a jabbing\n" 
    "beak, etc."
    );
static const u8 sMoveDescription_DrillPeck[] = _(
    "A corkscrewing attack with the\n" 
    "beak acting as a drill."
    );
static const u8 sMoveDescription_Submission[] = _(
    "A reckless body slam that also\n" 
    "hurts the user."
    );
static const u8 sMoveDescription_LowKick[] = _(
    "A kick that inflicts more\n" 
    "damage on heavier foes."
    );
static const u8 sMoveDescription_Counter[] = _(
    "Retaliates any physical hit\n" 
    "with double the power."
    );
static const u8 sMoveDescription_SeismicToss[] = _(
    "Inflicts damage identical to\n" 
    "the user's level."
    );
static const u8 sMoveDescription_Strength[] = _(
    "A powerful slam that may\n"
    "raise the user's Attack."
    );
static const u8 sMoveDescription_Absorb[] = _(
    "An attack that absorbs half\n" 
    "the damage inflicted."
    );
static const u8 sMoveDescription_MegaDrain[] = _(
    "An attack that absorbs half\n" 
    "the damage inflicted."
    );
static const u8 sMoveDescription_LeechSeed[] = _(
    "Plants a seed on the foe to\n" 
    "steal HP on every turn."
    );
static const u8 sMoveDescription_Growth[] = _(
    "Forces the body to grow,\n" 
    "raising Attack and Sp. Atk."
    );
static const u8 sMoveDescription_RazorLeaf[] = _(
    "Cuts enemies with leaves. High\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_SolarBeam[] = _(
    "Absorbs light in one turn,\n" 
    "then attacks next turn."
    );
static const u8 sMoveDescription_PoisonPowder[] = _(
    "Scatters a toxic powder that\n" 
    "may poison the foe."
    );
static const u8 sMoveDescription_StunSpore[] = _(
    "Scatters a powder that may\n" 
    "paralyze the foe."
    );
static const u8 sMoveDescription_SleepPowder[] = _(
    "Scatters a powder that may\n" 
    "cause the foe to sleep."
    );
static const u8 sMoveDescription_PetalDance[] = _(
    "A rampage of 2 to 3 turns that\n" 
    "confuses the user."
    );
static const u8 sMoveDescription_StringShot[] = _(
    "Binds the foe with string to\n" 
    "reduce its Speed."
    );
static const u8 sMoveDescription_DragonRage[] = _(
    "Launches shock waves that\n" 
    "always inflict 40 HP damage."
    );
static const u8 sMoveDescription_FireSpin[] = _(
    "Traps the foe in a ring of\n" 
    "fire for turns."
    );
static const u8 sMoveDescription_ThunderShock[] = _(
    "An electrical attack that may\n" 
    "paralyze the foe."
    );
static const u8 sMoveDescription_Thunderbolt[] = _(
    "A strong electrical attack\n" 
    "that may paralyze the foe."
    );
static const u8 sMoveDescription_ThunderWave[] = _(
    "A weak jolt of electricity\n" 
    "that paralyzes the foe."
    );
static const u8 sMoveDescription_Thunder[] = _(
    "A lightning attack that may\n" 
    "cause paralysis."
    );
static const u8 sMoveDescription_RockThrow[] = _(
    "Throws small rocks to strike\n" 
    "the foe."
    );
static const u8 sMoveDescription_Earthquake[] = _(
    "A powerful quake that hits all\n" 
    "other Pokémon."
    );
static const u8 sMoveDescription_Fissure[] = _(
    "A one-hit KO move that drops\n" 
    "the foe in a fissure."
    );
static const u8 sMoveDescription_Dig[] = _(
    "Digs underground the first\n" 
    "turn and strikes next turn."
    );
static const u8 sMoveDescription_Toxic[] = _(
    "Poisons the foe with an\n" 
    "intensifying toxin."
    );
static const u8 sMoveDescription_Confusion[] = _(
    "A psychic attack that may\n" 
    "cause confusion."
    );
static const u8 sMoveDescription_Psychic[] = _(
    "A powerful psychic attack that\n" 
    "may lower Sp. Def."
    );
static const u8 sMoveDescription_Hypnosis[] = _(
    "A hypnotizing move that may\n" 
    "induce sleep."
    );
static const u8 sMoveDescription_Meditate[] = _(
    "Meditates in a peaceful\n" 
    "fashion to raise Attack."
    );
static const u8 sMoveDescription_Agility[] = _(
    "Relaxes the body to sharply\n" 
    "boost Speed."
    );
static const u8 sMoveDescription_QuickAttack[] = _(
    "An extremely fast attack that\n" 
    "always strikes first."
    );
static const u8 sMoveDescription_Rage[] = _(
    "Raises the user's Attack every\n" 
    "time it is hit."
    );
static const u8 sMoveDescription_Teleport[] = _(
    "Switches the user out. Flees\n"
    "if used by a wild Pokémon."
    );
static const u8 sMoveDescription_NightShade[] = _(
    "Inflicts damage identical to\n" 
    "the user's level."
    );
static const u8 sMoveDescription_Mimic[] = _(
    "Copies last move used by the\n" 
    "foe during one battle."
    );
static const u8 sMoveDescription_Screech[] = _(
    "Emits a screech to sharply\n" 
    "reduce the foe's Defense."
    );
static const u8 sMoveDescription_DoubleTeam[] = _(
    "Creates illusory copies to\n" 
    "raise evasiveness."
    );
static const u8 sMoveDescription_Recover[] = _(
    "Recovers up to half the user's\n" 
    "maximum HP."
    );
static const u8 sMoveDescription_Harden[] = _(
    "Stiffens the body's muscles to\n" 
    "raise Defense."
    );
static const u8 sMoveDescription_Minimize[] = _(
    "Minimizes the user's size to\n" 
    "sharply raise evasiveness."
    );
static const u8 sMoveDescription_Smokescreen[] = _(
    "Lowers the foe's accuracy\n" 
    "using smoke, ink, etc."
    );
static const u8 sMoveDescription_ConfuseRay[] = _(
    "A sinister ray that confuses\n" 
    "the foe."
    );
static const u8 sMoveDescription_Withdraw[] = _(
    "Withdraws the body into its\n" 
    "hard shell to raise Defense."
    );
static const u8 sMoveDescription_DefenseCurl[] = _(
    "Curls up to conceal weak spots\n" 
    "and raise Defense."
    );
static const u8 sMoveDescription_Barrier[] = _(
    "Creates a barrier that sharply\n" 
    "raises Defense."
    );
static const u8 sMoveDescription_LightScreen[] = _(
    "Wall of light cuts special\n" 
    "damage for 5 turns."
    );
static const u8 sMoveDescription_Haze[] = _(
    "Creates a black haze that\n" 
    "eliminates all stat changes."
    );
static const u8 sMoveDescription_Reflect[] = _(
    "Wall of light cuts physical\n" 
    "damage for 5 turns."
    );
static const u8 sMoveDescription_FocusEnergy[] = _(
    "Focuses power to raise the\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_Bide[] = _(
    "Endures attack for 2 turns to\n" 
    "retaliate double."
    );
static const u8 sMoveDescription_Metronome[] = _(
    "Waggles a finger to use any\n" 
    "Pokémon move at random."
    );
static const u8 sMoveDescription_MirrorMove[] = _(
    "Counters the foe's attack with\n" 
    "the same move."
    );
static const u8 sMoveDescription_SelfDestruct[] = _(
    "Inflicts severe damage but\n" 
    "makes the user faint."
    );
static const u8 sMoveDescription_EggBomb[] = _(
    "An egg is forcibly hurled at\n" 
    "the foe."
    );
static const u8 sMoveDescription_Lick[] = _(
    "Licks with a long tongue to\n" 
    "injure. May also paralyze."
    );
static const u8 sMoveDescription_Smog[] = _(
    "An exhaust-gas attack that may\n" 
    "also poison."
    );
static const u8 sMoveDescription_Sludge[] = _(
    "Sludge is hurled to inflict\n" 
    "damage. May also poison."
    );
static const u8 sMoveDescription_BoneClub[] = _(
    "Clubs the foe with a bone. May\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_FireBlast[] = _(
    "Incinerates everything it\n" 
    "strikes. May cause a burn."
    );
static const u8 sMoveDescription_Waterfall[] = _(
    "Charges with speed to climb\n" 
    "waterfalls. May flinch."
    );
static const u8 sMoveDescription_Clamp[] = _(
    "Traps and squeezes the foe for\n" 
    "turns."
    );
static const u8 sMoveDescription_Swift[] = _(
    "Sprays star-shaped rays that\n" 
    "never miss."
    );
static const u8 sMoveDescription_SkullBash[] = _(
    "Tucks in the head, then\n" 
    "attacks on the next turn."
    );
static const u8 sMoveDescription_SpikeCannon[] = _(
    "Launches sharp spikes that\n" 
    "strike 2 to 5 times."
    );
static const u8 sMoveDescription_Constrict[] = _(
    "Constricts to inflict pain.\n" 
    "May lower Speed."
    );
static const u8 sMoveDescription_Amnesia[] = _(
    "Forgets about something and\n" 
    "sharply raises Sp. Def."
    );
static const u8 sMoveDescription_Kinesis[] = _(
    "Distracts the foe. May lower\n" 
    "accuracy."
    );
static const u8 sMoveDescription_SoftBoiled[] = _(
    "Recovers up to half the user's\n" 
    "maximum HP."
    );
static const u8 sMoveDescription_HighJumpKick[] = _(
    "A jumping knee kick. If it\n" 
    "misses, the user is hurt."
    );
static const u8 sMoveDescription_Glare[] = _(
    "Intimidates and frightens the\n" 
    "foe into paralysis."
    );
static const u8 sMoveDescription_DreamEater[] = _(
    "Takes one half the damage\n" 
    "inflicted on a sleeping foe."
    );
static const u8 sMoveDescription_PoisonGas[] = _(
    "Envelops the foes in a toxic\n"
    "gas that may poison."
    );
static const u8 sMoveDescription_Barrage[] = _(
    "Hurls round objects at the foe\n" 
    "2 to 5 times."
    );
static const u8 sMoveDescription_LeechLife[] = _(
    "An attack that steals half the\n" 
    "damage inflicted."
    );
static const u8 sMoveDescription_LovelyKiss[] = _(
    "Demands a kiss with a scary\n" 
    "face that induces sleep."
    );
static const u8 sMoveDescription_SkyAttack[] = _(
    "2-turn attack. High critical\n" 
    "hit ratio, and may flinch."
    );
static const u8 sMoveDescription_Transform[] = _(
    "Alters the user's cells to\n" 
    "become a copy of the foe."
    );
static const u8 sMoveDescription_Bubble[] = _(
    "An attack using bubbles. May\n" 
    "lower the foe's Speed."
    );
static const u8 sMoveDescription_DizzyPunch[] = _(
    "A rhythmic punch that may\n" 
    "confuse the foe."
    );
static const u8 sMoveDescription_Spore[] = _(
    "Scatters a cloud of spores\n" 
    "that always induce sleep."
    );
static const u8 sMoveDescription_Flash[] = _(
    "Hits all others, lowering accuracy\n"
    "Also cures Sleep."
    );
static const u8 sMoveDescription_Psywave[] = _(
    "Attacks with a psychic wave of\n" 
    "varying intensity."
    );
static const u8 sMoveDescription_Splash[] = _(
    "It's just a splash... Has no\n" 
    "effect whatsoever."
    );
static const u8 sMoveDescription_AcidArmor[] = _(
    "Liquifies the user's body to\n" 
    "sharply raise Defense."
    );
static const u8 sMoveDescription_Crabhammer[] = _(
    "Hammers with a pincer. Has a\n" 
    "high critical-hit ratio."
    );
static const u8 sMoveDescription_Explosion[] = _(
    "Inflicts severe damage but\n" 
    "makes the user faint."
    );
static const u8 sMoveDescription_FurySwipes[] = _(
    "Rakes the foe with sharp\n" 
    "claws, etc., 2 to 5 times."
    );
static const u8 sMoveDescription_Bonemerang[] = _(
    "Throws a bone boomerang that\n" 
    "strikes twice."
    );
static const u8 sMoveDescription_Rest[] = _(
    "The user sleeps for 2 turns,\n" 
    "restoring HP and status."
    );
static const u8 sMoveDescription_RockSlide[] = _(
    "Large boulders are hurled. May\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_HyperFang[] = _(
    "Attacks with sharp fangs. May\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_Sharpen[] = _(
    "Reduces the polygon count and\n" 
    "raises Attack."
    );
static const u8 sMoveDescription_Conversion[] = _(
    "Changes the user's type into\n" 
    "first known move's type."
    );
static const u8 sMoveDescription_TriAttack[] = _(
    "Fires three types of beams.\n"
    "May burn/paralyze/"
#if B_USE_FROSTBITE == TRUE
    "frostbite."
#else
    "freeze."
#endif
);
static const u8 sMoveDescription_SuperFang[] = _(
    "Attacks with sharp fangs and\n" 
    "cuts half the foe's HP."
    );
static const u8 sMoveDescription_Slash[] = _(
    "Slashes with claws, etc. Has a\n" 
    "high critical-hit ratio."
    );
static const u8 sMoveDescription_Substitute[] = _(
    "Creates a decoy using 1/4 of\n" 
    "the user's maximum HP."
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
    "Kicks the foe 3 times in a row\n" 
    "with rising intensity."
    );
static const u8 sMoveDescription_Thief[] = _(
    "While attacking, it may steal\n" 
    "the foe's held item."
    );
static const u8 sMoveDescription_SpiderWeb[] = _(
    "Ensnares the foe to stop it\n" 
    "from fleeing or switching."
    );
static const u8 sMoveDescription_MindReader[] = _(
    "Senses the foe's action to\n" 
    "ensure the next move's hit."
    );
static const u8 sMoveDescription_Nightmare[] = _(
    "Inflicts 1/4 damage on a\n" 
    "sleeping foe every turn."
    );
static const u8 sMoveDescription_FlameWheel[] = _(
    "A fiery charge attack that may\n" 
    "inflict a burn."
    );
static const u8 sMoveDescription_Snore[] = _(
    "A loud attack that can only be\n" 
    "used asleep. May flinch."
    );
static const u8 sMoveDescription_Curse[] = _(
    "A move that functions\n" 
    "differently for GHOSTS."
    );
static const u8 sMoveDescription_Flail[] = _(
    "Inflicts more damage when the\n" 
    "user's HP is down."
    );
static const u8 sMoveDescription_Conversion2[] = _(
    "Makes the user resistant to\n" 
    "the last attack's type."
    );
static const u8 sMoveDescription_Aeroblast[] = _(
    "Launches a vacuumed blast.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_CottonSpore[] = _(
    "Spores cling to the foes,\n"
    "sharply reducing Speed."
    );
static const u8 sMoveDescription_Reversal[] = _(
    "Inflicts more damage when the\n" 
    "user's HP is down."
    );
static const u8 sMoveDescription_Spite[] = _(
    "Spitefully cuts the PP of the\n" 
    "foe's last move by 4."
    );
static const u8 sMoveDescription_PowderSnow[] = _(
#if B_USE_FROSTBITE == TRUE
    "Blasts the foes with a snowy\n"
    "gust. May cause frostbite."
#else
    "Blasts the foes with a snowy\n"
    "gust. May freeze the foes."
#endif
);
static const u8 sMoveDescription_Protect[] = _(
    "Evades attack, but may fail if\n" 
    "used in succession."
    );
static const u8 sMoveDescription_MachPunch[] = _(
    "A punch is thrown at wicked\n" 
    "speed to strike first."
    );
static const u8 sMoveDescription_ScaryFace[] = _(
    "Frightens with a scary face to\n" 
    "sharply reduce Speed."
    );
static const u8 sMoveDescription_FeintAttack[] = _(
    "Draws the foe close, then\n" 
    "strikes without fail."
    );
static const u8 sMoveDescription_SweetKiss[] = _(
    "Demands a kiss with a cute\n" 
    "look. May cause confusion."
    );
static const u8 sMoveDescription_BellyDrum[] = _(
    "Maximizes Attack while\n" 
    "sacrificing half of max HP."
    );
static const u8 sMoveDescription_SludgeBomb[] = _(
    "Sludge is hurled to inflict\n" 
    "damage. May also poison."
    );
static const u8 sMoveDescription_MudSlap[] = _(
    "Hurls mud in the foe's face to\n" 
    "reduce its accuracy."
    );
static const u8 sMoveDescription_Octazooka[] = _(
    "Fires a lump of ink to damage\n" 
    "and cut accuracy."
    );
static const u8 sMoveDescription_Spikes[] = _(
    "Sets spikes that hurt a foe\n" 
    "switching in."
    );
static const u8 sMoveDescription_ZapCannon[] = _(
    "Powerful and sure to cause\n" 
    "paralysis, but inaccurate."
    );
static const u8 sMoveDescription_Foresight[] = _(
    "Negates the foe's efforts to\n" 
    "heighten evasiveness."
    );
static const u8 sMoveDescription_DestinyBond[] = _(
    "If the user faints, the foe is\n" 
    "also made to faint."
    );
static const u8 sMoveDescription_PerishSong[] = _(
    "Any Pokémon hearing this song\n" 
    "faints in 3 turns."
    );
static const u8 sMoveDescription_IcyWind[] = _(
    "A chilling attack that lowers\n" 
    "the foe's Speed."
    );
static const u8 sMoveDescription_Detect[] = _(
    "Evades attack, but may fail if\n" 
    "used in succession."
    );
static const u8 sMoveDescription_BoneRush[] = _(
    "Strikes the foe with a bone in\n" 
    "hand 2 to 5 times."
    );
static const u8 sMoveDescription_LockOn[] = _(
    "Locks on to the foe to ensure\n" 
    "the next move hits."
    );
static const u8 sMoveDescription_Outrage[] = _(
    "A rampage of 2 to 3 turns that\n" 
    "confuses the user."
    );
static const u8 sMoveDescription_Sandstorm[] = _(
    "Causes a sandstorm that rages\n" 
    "for several turns."
    );
static const u8 sMoveDescription_GigaDrain[] = _(
    "An attack that steals half the\n" 
    "damage inflicted."
    );
static const u8 sMoveDescription_Endure[] = _(
    "Endures any attack for 1 turn,\n" 
    "leaving at least 1HP."
    );
static const u8 sMoveDescription_Charm[] = _(
    "Charms the foe and sharply\n" 
    "reduces its Attack."
    );
static const u8 sMoveDescription_Rollout[] = _(
    "An attack lasting 5 turns with\n" 
    "rising intensity."
    );
static const u8 sMoveDescription_FalseSwipe[] = _(
    "An attack that leaves the foe\n" 
    "with at least 1 HP."
    );
static const u8 sMoveDescription_Swagger[] = _(
    "Confuses the foe, but also\n" 
    "sharply raises its Attack."
    );
static const u8 sMoveDescription_MilkDrink[] = _(
    "Recovers up to half the user's\n" 
    "maximum HP."
    );
static const u8 sMoveDescription_Spark[] = _(
    "An electrified tackle that may\n" 
    "paralyze the foe."
    );
static const u8 sMoveDescription_FuryCutter[] = _(
    "An attack that intensifies on\n" 
    "each successive hit."
    );
static const u8 sMoveDescription_SteelWing[] = _(
    "Strikes the foe with hard\n" 
    "wings spread wide."
    );
static const u8 sMoveDescription_MeanLook[] = _(
    "Fixes the foe with a mean look\n" 
    "that prevents escape."
    );
static const u8 sMoveDescription_Attract[] = _(
    "Makes the opposite gender less\n" 
    "likely to attack."
    );
static const u8 sMoveDescription_SleepTalk[] = _(
    "Uses an available move\n" 
    "randomly while asleep."
    );
static const u8 sMoveDescription_HealBell[] = _(
    "Chimes soothingly to heal all\n" 
    "status abnormalities."
    );
static const u8 sMoveDescription_Return[] = _(
    "An attack that increases in\n" 
    "power with friendship."
    );
static const u8 sMoveDescription_Present[] = _(
    "A gift in the form of a bomb.\n" 
    "May restore HP."
    );
static const u8 sMoveDescription_Frustration[] = _(
    "An attack that is stronger if\n" 
    "the Trainer is disliked."
    );
static const u8 sMoveDescription_Safeguard[] = _(
    "Protects allies from status\n" 
    "problems for 5 turns."
    );
static const u8 sMoveDescription_PainSplit[] = _(
    "Adds the user and foe's HP,\n" 
    "then shares them equally."
    );
static const u8 sMoveDescription_SacredFire[] = _(
    "A mystical fire attack that\n" 
    "may inflict a burn."
    );
static const u8 sMoveDescription_Magnitude[] = _(
    "A ground-shaking attack of\n" 
    "random intensity."
    );
static const u8 sMoveDescription_DynamicPunch[] = _(
    "Powerful and sure to cause\n" 
    "confusion, but inaccurate."
    );
static const u8 sMoveDescription_Megahorn[] = _(
    "A brutal ramming attack using\n" 
    "out-thrust horns."
    );
static const u8 sMoveDescription_DragonBreath[] = _(
    "Strikes the foe with a blast\n" 
    "of breath. May paralyze."
    );
static const u8 sMoveDescription_BatonPass[] = _(
    "Switches out the user while\n" 
    "keeping effects in play."
    );
static const u8 sMoveDescription_Encore[] = _(
    "Makes the foe repeat its last\n" 
    "move over 3 turns."
    );
static const u8 sMoveDescription_Pursuit[] = _(
    "Inflicts bad damage if used on\n" 
    "a foe switching out."
    );
static const u8 sMoveDescription_RapidSpin[] = _(
    "User spins and removes some\n" 
    "effects, while upping speed."
    );
static const u8 sMoveDescription_SweetScent[] = _(
    "Allures the foes to harshly\n" 
    "reduce evasiveness."
    );
static const u8 sMoveDescription_IronTail[] = _(
    "Attacks with a rock-hard tail.\n" 
    "May lower Defense."
    );
static const u8 sMoveDescription_MetalClaw[] = _(
    "A claw attack that may raise\n" 
    "the user's Attack."
    );
static const u8 sMoveDescription_VitalThrow[] = _(
    "Makes the user's move last,\n" 
    "but it never misses."
    );
static const u8 sMoveDescription_MorningSun[] = _(
    "Restores HP. The amount varies\n" 
    "with the weather."
    );
static const u8 sMoveDescription_Synthesis[] = _(
    "Restores HP. The amount varies\n" 
    "with the weather."
    );
static const u8 sMoveDescription_Moonlight[] = _(
    "Restores HP. The amount varies\n" 
    "with the weather."
    );
static const u8 sMoveDescription_HiddenPower[] = _(
    "The type varies with the user."
    );
static const u8 sMoveDescription_CrossChop[] = _(
    "A double-chopping attack. High\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_Twister[] = _(
    "Whips up a vicious twister to\n" 
    "tear at foes. May flinch."
    );
static const u8 sMoveDescription_RainDance[] = _(
    "Boosts the power of Water-\n" 
    "type moves for 5 turns."
    );
static const u8 sMoveDescription_SunnyDay[] = _(
    "Boosts the power of Fire- type\n" 
    "moves for 5 turns."
    );
static const u8 sMoveDescription_Crunch[] = _(
    "Crunches with sharp fangs. May\n" 
    "lower Defense."
    );
static const u8 sMoveDescription_MirrorCoat[] = _(
    "Counters the foe's special\n" 
    "attack at double the power."
    );
static const u8 sMoveDescription_PsychUp[] = _(
    "Copies foe's stat changes and\n" 
    "gives to the user."
    );
static const u8 sMoveDescription_ExtremeSpeed[] = _(
    "An extremely fast and powerful\n" 
    "attack."
    );
static const u8 sMoveDescription_AncientPower[] = _(
    "An attack that may raise all\n" 
    "stats."
    );
static const u8 sMoveDescription_ShadowBall[] = _(
    "Hurls a black blob that may\n" 
    "lower the foe's Sp. Def."
    );
static const u8 sMoveDescription_FutureSight[] = _(
    "Heightens inner power to\n" 
    "strike 2 turns later."
    );
static const u8 sMoveDescription_RockSmash[] = _(
    "A rock-crushing attack that\n" 
    "may lower Defense."
    );
static const u8 sMoveDescription_Whirlpool[] = _(
    "Traps and hurts the foe in a\n" 
    "whirlpool for turns."
    );
static const u8 sMoveDescription_BeatUp[] = _(
    "Summons party Pokémon to join\n" 
    "in the attack."
    );
static const u8 sMoveDescription_FakeOut[] = _(
    "Moves 1st and flinches. Only\n" 
    "works on user's 1st turn."
    );
static const u8 sMoveDescription_Uproar[] = _(
    "Causes an uproar for 3 turns\n"
    "and prevents sleep."
    );
static const u8 sMoveDescription_Stockpile[] = _(
    "Charges up power for up to 3\n" 
    "turns."
    );
static const u8 sMoveDescription_SpitUp[] = _(
    "Releases stockpiled power (the\n" 
    "more the better)."
    );
static const u8 sMoveDescription_Swallow[] = _(
    "Absorbs stockpiled power and\n" 
    "restores HP."
    );
static const u8 sMoveDescription_HeatWave[] = _(
    "Exhales a hot breath on the\n" 
    "foes. May inflict a burn."
    );
static const u8 sMoveDescription_Hail[] = _(
    "Summons a snowstorm that lasts\n" 
    "for five turns."
    );
static const u8 sMoveDescription_Torment[] = _(
    "Torments the foe and stops\n" 
    "successive use of a move."
    );
static const u8 sMoveDescription_Flatter[] = _(
    "Confuses the foe, but raises\n" 
    "its Sp. Atk."
    );
static const u8 sMoveDescription_WillOWisp[] = _(
    "Inflicts a burn on the foe\n" 
    "with intense fire."
    );
static const u8 sMoveDescription_Memento[] = _(
    "The user faints and harshly\n" 
    "lowers foes Atk and Sp.Atk."
    );
static const u8 sMoveDescription_Facade[] = _(
    "Boosts power when burned,\n" 
    "paralyzed, or poisoned."
    );
static const u8 sMoveDescription_FocusPunch[] = _(
    "Powerful attack, moves last.\n" 
    "The user flinches if hit."
    );
static const u8 sMoveDescription_SmellingSalts[] = _(
    "Powerful against paralyzed\n" 
    "foes, but also heals them."
    );
static const u8 sMoveDescription_FollowMe[] = _(
    "Draws attention to make foes\n" 
    "attack only the user."
    );
static const u8 sMoveDescription_NaturePower[] = _(
    "The type of attack varies\n" 
    "depending on the location."
    );
static const u8 sMoveDescription_Charge[] = _(
    "Charges power to boost the\n" 
    "Electric move used next."
    );
static const u8 sMoveDescription_Taunt[] = _(
    "Taunts the foe into only using\n" 
    "attack moves."
    );
static const u8 sMoveDescription_HelpingHand[] = _(
    "Boosts the power of ally\n" 
    "recipient's moves."
    );
static const u8 sMoveDescription_Trick[] = _(
    "Tricks the foe into trading\n" 
    "held items."
    );
static const u8 sMoveDescription_RolePlay[] = _(
    "Mimics the target and copies\n" 
    "its Ability."
    );
static const u8 sMoveDescription_Wish[] = _(
    "A wish that restores HP. It\n" 
    "takes time to work."
    );
static const u8 sMoveDescription_Assist[] = _(
    "Attacks randomly with one of\n" 
    "the partner's moves."
    );
static const u8 sMoveDescription_Ingrain[] = _(
    "Lays roots that restore HP.\n" 
    "The user can't switch out."
    );
static const u8 sMoveDescription_Superpower[] = _(
    "Boosts strength sharply, but\n" 
    "lowers abilities."
    );
static const u8 sMoveDescription_MagicCoat[] = _(
    "Reflects special effects back\n" 
    "to the attacker."
    );
static const u8 sMoveDescription_Recycle[] = _(
    "Recycles a used item for one\n" 
    "more use."
    );
static const u8 sMoveDescription_Revenge[] = _(
    "An attack that moves last and\n" 
    "gains power if hit."
    );
static const u8 sMoveDescription_BrickBreak[] = _(
    "Destroys barriers such as\n" 
    "Reflect and causes damage."
    );
static const u8 sMoveDescription_Yawn[] = _(
    "Lulls the foe into yawning,\n" 
    "then sleeping next turn."
    );
static const u8 sMoveDescription_KnockOff[] = _(
    "Knocks down the foe's held\n" 
    "item to prevent its use."
    );
static const u8 sMoveDescription_Endeavor[] = _(
    "Cuts foe's HP to equal user's\n" 
    "HP."
    );
static const u8 sMoveDescription_Eruption[] = _(
    "The higher the user's HP, the\n" 
    "more damage caused."
    );
static const u8 sMoveDescription_SkillSwap[] = _(
    "The user swaps special\n" 
    "abilities with the target."
    );
static const u8 sMoveDescription_Imprison[] = _(
    "Prevents foes from using moves\n" 
    "known by the user."
    );
static const u8 sMoveDescription_Refresh[] = _(
    "Heals poisoning, paralysis, or\n" 
    "a burn."
    );
static const u8 sMoveDescription_Grudge[] = _(
    "If the user faints, deletes\n" 
    "all PP of foe's last move."
    );
static const u8 sMoveDescription_Snatch[] = _(
    "Steals the effects of the move\n" 
    "the target uses next."
    );
static const u8 sMoveDescription_SecretPower[] = _(
    "An attack with effects that\n" 
    "vary by location."
    );
static const u8 sMoveDescription_Dive[] = _(
    "Dives underwater the first\n" 
    "turn and strikes next turn."
    );
static const u8 sMoveDescription_ArmThrust[] = _(
    "Straight-arm punches that\n" 
    "strike the foe 2 to 5 times."
    );
static const u8 sMoveDescription_Camouflage[] = _(
    "Alters the Pokémon's type\n" 
    "depending on the location."
    );
static const u8 sMoveDescription_TailGlow[] = _(
    "Emits a glow that drastically\n"
    "raises Sp. Atk."
    );
static const u8 sMoveDescription_LusterPurge[] = _(
    "Attacks with a burst of light.\n" 
    "May lower Sp. Def."
    );
static const u8 sMoveDescription_MistBall[] = _(
    "Attacks with a flurry of down.\n" 
    "May lower Sp. Atk."
    );
static const u8 sMoveDescription_FeatherDance[] = _(
    "Envelops the foe with down to\n" 
    "sharply reduce Attack."
    );
static const u8 sMoveDescription_TeeterDance[] = _(
    "Confuses all Pokémon on the\n" 
    "scene."
    );
static const u8 sMoveDescription_BlazeKick[] = _(
    "A kick with a high critical-\n" 
    "hit ratio. May cause a burn."
    );
static const u8 sMoveDescription_MudSport[] = _(
    "Covers the user in mud to\n" 
    "weaken all Electric moves."
    );
static const u8 sMoveDescription_IceBall[] = _(
    "A 5-turn attack that gains\n" 
    "power on successive hits."
    );
static const u8 sMoveDescription_NeedleArm[] = _(
    "Attacks with thorny arms. May\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_SlackOff[] = _(
    "Slacks off and restores half\n" 
    "the maximum HP."
    );
static const u8 sMoveDescription_HyperVoice[] = _(
    "A loud attack that uses sound\n" 
    "waves to injure."
    );
static const u8 sMoveDescription_PoisonFang[] = _(
    "A sharp-fanged attack. May\n" 
    "badly poison the foe."
    );
static const u8 sMoveDescription_CrushClaw[] = _(
    "Tears at the foe with sharp\n" 
    "claws. May lower Defense."
    );
static const u8 sMoveDescription_BlastBurn[] = _(
    "Powerful, but leaves the user\n" 
    "immobile the next turn."
    );
static const u8 sMoveDescription_HydroCannon[] = _(
    "Powerful, but leaves the user\n" 
    "immobile the next turn."
    );
static const u8 sMoveDescription_MeteorMash[] = _(
    "Fires a meteor-like punch. May\n" 
    "raise the user's Attack."
    );
static const u8 sMoveDescription_Astonish[] = _(
    "An attack that may shock the\n" 
    "foe into flinching."
    );
static const u8 sMoveDescription_WeatherBall[] = _(
    "The move's type and power\n" 
    "change with the weather."
    );
static const u8 sMoveDescription_Aromatherapy[] = _(
    "Heals all status problems with\n" 
    "a soothing scent."
    );
static const u8 sMoveDescription_FakeTears[] = _(
    "Feigns crying to sharply lower\n" 
    "the foe's Sp. Def."
    );
static const u8 sMoveDescription_AirCutter[] = _(
    "Hacks with razorlike wind.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Overheat[] = _(
    "Allows a full-power attack,\n" 
    "but sharply lowers Sp. Atk."
    );
static const u8 sMoveDescription_OdorSleuth[] = _(
    "Negate evasiveness and Ghost\n" 
    "type's immunities."
    );
static const u8 sMoveDescription_RockTomb[] = _(
    "Stops the foe from moving with\n" 
    "rocks and cuts Speed."
    );
static const u8 sMoveDescription_SilverWind[] = _(
    "A powdery attack that may\n" 
    "raise abilities."
    );
static const u8 sMoveDescription_MetalSound[] = _(
    "Emits a horrible screech that\n" 
    "sharply lowers Sp. Def."
    );
static const u8 sMoveDescription_GrassWhistle[] = _(
    "Lulls the foe into sleep with\n" 
    "a pleasant melody."
    );
static const u8 sMoveDescription_Tickle[] = _(
    "Makes the foe laugh to lower\n" 
    "Attack and Defense."
    );
static const u8 sMoveDescription_CosmicPower[] = _(
    "Raises Defense and Sp. Def\n" 
    "with a mystic power."
    );
static const u8 sMoveDescription_WaterSpout[] = _(
    "Inflicts more damage if the\n" 
    "user's HP is high."
    );
static const u8 sMoveDescription_SignalBeam[] = _(
    "A strange beam attack that may\n" 
    "confuse the foe."
    );
static const u8 sMoveDescription_ShadowPunch[] = _(
    "An unavoidable punch that is\n" 
    "thrown from shadows."
    );
static const u8 sMoveDescription_Extrasensory[] = _(
    "Attacks with a peculiar power.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_SkyUppercut[] = _(
    "An uppercut thrown as if\n" 
    "leaping into the sky."
    );
static const u8 sMoveDescription_SandTomb[] = _(
    "Traps and hurts the foe in\n" 
    "quicksand for turns."
    );
static const u8 sMoveDescription_SheerCold[] = _(
    "A chilling attack that causes\n" 
    "fainting if it hits."
    );
static const u8 sMoveDescription_MuddyWater[] = _(
    "Attacks with muddy water. May\n" 
    "lower accuracy."
    );
static const u8 sMoveDescription_BulletSeed[] = _(
    "Shoots 2 to 5 seeds in a row\n" 
    "to strike the foe."
    );
static const u8 sMoveDescription_AerialAce[] = _(
    "An extremely speedy and\n" 
    "unavoidable attack."
    );
static const u8 sMoveDescription_IcicleSpear[] = _(
    "Attacks the foe by firing 2 to\n" 
    "5 icicles in a row."
    );
static const u8 sMoveDescription_IronDefense[] = _(
    "Hardens the body's surface to\n" 
    "sharply raise Defense."
    );
static const u8 sMoveDescription_Block[] = _(
    "Blocks the foe's way and\n" 
    "prevents escape."
    );
static const u8 sMoveDescription_Howl[] = _(
    "Howls to raise the spirit and\n" 
    "boosts Attack."
    );
static const u8 sMoveDescription_DragonClaw[] = _(
    "Slashes the foe with sharp\n" 
    "claws."
    );
static const u8 sMoveDescription_FrenzyPlant[] = _(
    "Powerful, but leaves the user\n" 
    "immobile the next turn."
    );
static const u8 sMoveDescription_BulkUp[] = _(
    "Bulks up the body to boost\n" 
    "both Attack and Defense."
    );
static const u8 sMoveDescription_Bounce[] = _(
    "Bounces up, then down the next\n" 
    "turn. May paralyze."
    );
static const u8 sMoveDescription_MudShot[] = _(
    "Hurls mud at the foe and\n" 
    "reduces Speed."
    );
static const u8 sMoveDescription_PoisonTail[] = _(
    "Has a high critical-hit ratio.\n" 
    "May also poison."
    );
static const u8 sMoveDescription_Covet[] = _(
    "Cutely begs to obtain an item\n" 
    "held by the foe."
    );
static const u8 sMoveDescription_VoltTackle[] = _(
    "A life-risking tackle that\n" 
    "hurts the user. May paralyze."
    );
static const u8 sMoveDescription_MagicalLeaf[] = _(
    "Attacks with a strange leaf\n" 
    "that cannot be evaded."
    );
static const u8 sMoveDescription_WaterSport[] = _(
    "The user becomes soaked to\n" 
    "weaken all Fire moves."
    );
static const u8 sMoveDescription_CalmMind[] = _(
    "Raises Sp. Atk and Sp. Def by\n" 
    "focusing the mind."
    );
static const u8 sMoveDescription_LeafBlade[] = _(
    "Slashes with a sharp leaf.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DragonDance[] = _(
    "A mystical dance that ups\n" 
    "Attack and Speed."
    );
static const u8 sMoveDescription_RockBlast[] = _(
    "Hurls boulders at the foe 2 to\n" 
    "5 times in a row."
    );
static const u8 sMoveDescription_ShockWave[] = _(
    "A fast and unavoidable\n" 
    "electric attack."
    );
static const u8 sMoveDescription_WaterPulse[] = _(
    "Attacks with ultrasonic waves.\n" 
    "May confuse the foe."
    );
static const u8 sMoveDescription_DoomDesire[] = _(
    "Summons strong light to attack\n" 
    "2 turns later."
    );
static const u8 sMoveDescription_PsychoBoost[] = _(
    "Allows a full-power attack,\n" 
    "but sharply lowers Sp. Atk."
    );
static const u8 sMoveDescription_Roost[] = _(
    "Restores the user's HP by half\n" 
    "of its max HP."
    );
static const u8 sMoveDescription_Gravity[] = _(
    "Gravity is intensified\n" 
    "negating levitation."
    );
static const u8 sMoveDescription_MiracleEye[] = _(
    "Negate evasiveness and Dark\n" 
    "type's immunities."
    );
static const u8 sMoveDescription_WakeUpSlap[] = _(
    "Powerful against sleeping\n" 
    "foes, but also wakes them."
    );
static const u8 sMoveDescription_HammerArm[] = _(
    "A swinging fist attack that\n" 
    "also lowers Speed."
    );
static const u8 sMoveDescription_GyroBall[] = _(
    "A high-speed spin that does\n" 
    "more damage to faster foes."
    );
static const u8 sMoveDescription_HealingWish[] = _(
    "The user faints to heal up the\n" 
    "recipient."
    );
static const u8 sMoveDescription_Brine[] = _(
    "Does double damage to foes\n" 
    "with half HP or less."
    );
static const u8 sMoveDescription_NaturalGift[] = _(
    "The effectiveness varies with\n" 
    "the held Berry."
    );
static const u8 sMoveDescription_Feint[] = _(
    "An attack that hits foes using\n" 
    "moves like Protect."
    );
static const u8 sMoveDescription_Pluck[] = _(
    "Eats the foe's held Berry\n" 
    "gaining its effect."
    );
static const u8 sMoveDescription_Tailwind[] = _(
    "Whips up a breeze, doubling\n" 
    "ally Speed for 4 turns."
    );
static const u8 sMoveDescription_Acupressure[] = _(
    "The user sharply raises one of\n" 
    "its stats."
    );
static const u8 sMoveDescription_MetalBurst[] = _(
    "Retaliates any hit with\n" 
    "greater power."
    );
static const u8 sMoveDescription_UTurn[] = _(
    "Does damage then switches out\n" 
    "the user."
    );
static const u8 sMoveDescription_CloseCombat[] = _(
    "A strong attack but lowers the\n" 
    "defensive stats."
    );
static const u8 sMoveDescription_Payback[] = _(
    "An attack that gains power if\n" 
    "the user moves last."
    );
static const u8 sMoveDescription_Assurance[] = _(
    "An attack that gains power if\n" 
    "the foe has been hurt."
    );
static const u8 sMoveDescription_Embargo[] = _(
    "Prevents the foe from using\n" 
    "any items."
    );
static const u8 sMoveDescription_Fling[] = _(
    "The effectiveness varies with\n" 
    "the held item."
    );
static const u8 sMoveDescription_PsychoShift[] = _(
    "Transfers status problems to\n" 
    "the foe."
    );
static const u8 sMoveDescription_TrumpCard[] = _(
    "The less PP the move has the\n" 
    "more damage it does."
    );
static const u8 sMoveDescription_HealBlock[] = _(
    "Prevents the foes from\n" 
    "recovering HP for 5 turns."
    );
static const u8 sMoveDescription_WringOut[] = _(
    "The higher the foe's HP the\n" 
    "more damage caused."
    );
static const u8 sMoveDescription_PowerTrick[] = _(
    "The user swaps its Attack and\n" 
    "Defense stats."
    );
static const u8 sMoveDescription_GastroAcid[] = _(
    "Stomach acid suppresses the\n" 
    "foe's Ability."
    );
static const u8 sMoveDescription_LuckyChant[] = _(
    "Prevents the foe from landing\n" 
    "critical hits."
    );
static const u8 sMoveDescription_MeFirst[] = _(
    "Executes the foe's attack with\n" 
    "greater power."
    );
static const u8 sMoveDescription_Copycat[] = _(
    "The user mimics the last move\n" 
    "used by a foe."
    );
static const u8 sMoveDescription_PowerSwap[] = _(
    "Swaps changes to Attack and\n" 
    "Sp. Atk with the foe."
    );
static const u8 sMoveDescription_GuardSwap[] = _(
    "Swaps changes to Defense and\n" 
    "Sp. Def with the foe."
    );
static const u8 sMoveDescription_Punishment[] = _(
    "Does more damage the more the\n" 
    "foe has powered up."
    );
static const u8 sMoveDescription_LastResort[] = _(
    "Can only be used if every\n" 
    "other move has been used."
    );
static const u8 sMoveDescription_WorrySeed[] = _(
    "Plants a seed on the foe\n" 
    "giving it Insomnia."
    );
static const u8 sMoveDescription_SuckerPunch[] = _(
    "Strikes first if the foe is\n" 
    "preparing an attack."
    );
static const u8 sMoveDescription_ToxicSpikes[] = _(
    "Sets spikes that poison a foe\n" 
    "switching in."
    );
static const u8 sMoveDescription_HeartSwap[] = _(
    "Swaps any stat changes with\n" 
    "the foe."
    );
static const u8 sMoveDescription_AquaRing[] = _(
    "Forms a veil of water that\n" 
    "restores HP."
    );
static const u8 sMoveDescription_MagnetRise[] = _(
    "The user levitates with\n" 
    "electromagnetism."
    );
static const u8 sMoveDescription_FlareBlitz[] = _(
    "A charge that may burn the\n" 
    "foe. Also hurts the user."
    );
static const u8 sMoveDescription_ForcePalm[] = _(
    "A shock wave attack that may\n" 
    "paralyze the foe."
    );
static const u8 sMoveDescription_AuraSphere[] = _(
    "Attacks with an aura blast\n" 
    "that cannot be evaded."
    );
static const u8 sMoveDescription_RockPolish[] = _(
    "Polishes the body to sharply\n" 
    "raise Speed."
    );
static const u8 sMoveDescription_PoisonJab[] = _(
    "A stabbing attack that may\n" 
    "poison the foe."
    );
static const u8 sMoveDescription_DarkPulse[] = _(
    "Attacks with a horrible aura.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_NightSlash[] = _(
    "Hits as soon as possible. High\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_AquaTail[] = _(
    "The user swings its tail like\n" 
    "a wave to attack."
    );
static const u8 sMoveDescription_SeedBomb[] = _(
    "A barrage of hard seeds is\n" 
    "fired at the foe."
    );
static const u8 sMoveDescription_AirSlash[] = _(
    "Attacks with a blade of air.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_XScissor[] = _(
    "Slashes the foe with crossed\n" 
    "scythes, claws, etc."
    );
static const u8 sMoveDescription_BugBuzz[] = _(
    "A damaging sound wave that may\n" 
    "lower Sp. Def."
    );
static const u8 sMoveDescription_DragonPulse[] = _(
    "Generates a shock wave to\n" 
    "damage the foe."
    );
static const u8 sMoveDescription_DragonRush[] = _(
    "Tackles the foe with menace.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_PowerGem[] = _(
    "Attacks with rays of light\n" 
    "that sparkle like diamonds."
    );
static const u8 sMoveDescription_DrainPunch[] = _(
    "An attack that absorbs half\n" 
    "the damage inflicted."
    );
static const u8 sMoveDescription_VacuumWave[] = _(
    "Whirls its fists to send a\n" 
    "wave that strikes first."
    );
static const u8 sMoveDescription_FocusBlast[] = _(
    "Attacks at full power. May\n" 
    "lower Sp. Def."
    );
static const u8 sMoveDescription_EnergyBall[] = _(
    "Draws power from nature to\n" 
    "attack. May lower Sp. Def."
    );
static const u8 sMoveDescription_BraveBird[] = _(
    "A low altitude charge that\n" 
    "also hurts the user."
    );
static const u8 sMoveDescription_EarthPower[] = _(
    "Makes the ground erupt with\n" 
    "power. May lower Sp. Def."
    );
static const u8 sMoveDescription_Switcheroo[] = _(
    "Swaps items with the foe\n" 
    "faster than the eye can see."
    );
static const u8 sMoveDescription_GigaImpact[] = _(
    "Leaves the user immobile if\n" 
    "target is not KO'd."
    );
static const u8 sMoveDescription_NastyPlot[] = _(
    "Thinks bad thoughts to sharply\n" 
    "boost Sp. Atk."
    );
static const u8 sMoveDescription_BulletPunch[] = _(
    "Punches as fast as a bul- let.\n" 
    "It always hits first."
    );
static const u8 sMoveDescription_Avalanche[] = _(
    "An attack that moves last and\n" 
    "gains power if hit."
    );
static const u8 sMoveDescription_IceShard[] = _(
    "Hurls a chunk of ice that\n" 
    "always strikes first."
    );
static const u8 sMoveDescription_ShadowClaw[] = _(
    "Strikes with a shadow claw.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ThunderFang[] = _(
    "May cause flinching or leave\n" 
    "the foe paralyzed."
    );
static const u8 sMoveDescription_IceFang[] = _(
#if B_USE_FROSTBITE == TRUE
    "May cause flinching or leave\n"
    "the foe with frostbite."
#else
    "May cause flinching or\n"
    "freeze the foe."
#endif
);
static const u8 sMoveDescription_FireFang[] = _(
    "May cause flinching or leave\n" 
    "the foe with a burn."
    );
static const u8 sMoveDescription_ShadowSneak[] = _(
    "Extends the user's shadow to\n" 
    "strike first."
    );
static const u8 sMoveDescription_MudBomb[] = _(
    "Throws a blob of mud to damage\n" 
    "and cut accuracy."
    );
static const u8 sMoveDescription_PsychoCut[] = _(
    "Tears with psychic blades.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ZenHeadbutt[] = _(
    "Hits with a strong head- butt.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_MirrorShot[] = _(
    "Emits a flash of energy to\n" 
    "damage and cut accuracy."
    );
static const u8 sMoveDescription_FlashCannon[] = _(
    "Releases a blast of light that\n" 
    "may lower Sp. Def."
    );
static const u8 sMoveDescription_RockClimb[] = _(
    "A charging attack that may\n" 
    "confuse the foe."
    );
static const u8 sMoveDescription_Defog[] = _(
    "Removes obstacles and lowers\n" 
    "evasion."
    );
static const u8 sMoveDescription_TrickRoom[] = _(
    "Slower Pokémon get to move\n" 
    "first for 5 turns."
    );
static const u8 sMoveDescription_DracoMeteor[] = _(
    "Casts comets onto the foe.\n" 
    "Harshly lowers the Sp. Atk."
    );
static const u8 sMoveDescription_Discharge[] = _(
    "Zaps all other {PKMN} with\n" 
    "electricity. May paralyze."
    );
static const u8 sMoveDescription_LavaPlume[] = _(
    "Scarlet flames torch\n" 
    "everything around the user."
    );
static const u8 sMoveDescription_LeafStorm[] = _(
    "Whips up a storm of leaves.\n" 
    "Harshly lowers the Sp. Atk."
    );
static const u8 sMoveDescription_PowerWhip[] = _(
    "Violently lashes the foe with\n" 
    "vines or tentacles."
    );
static const u8 sMoveDescription_RockWrecker[] = _(
    "Leaves the user immobile if\n" 
    "target is not KO'd."
    );
static const u8 sMoveDescription_CrossPoison[] = _(
    "A slash that may poison a foe\n" 
    "and do critical damage."
    );
static const u8 sMoveDescription_GunkShot[] = _(
    "Shoots filthy garbage at the\n" 
    "foe. May also poison."
    );
static const u8 sMoveDescription_IronHead[] = _(
    "Slams the foe with a hard\n" 
    "head. May cause flinching."
    );
static const u8 sMoveDescription_MagnetBomb[] = _(
    "Launches a magnet that strikes\n" 
    "without fail."
    );
static const u8 sMoveDescription_StoneEdge[] = _(
    "Stabs the foe with stones.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_Captivate[] = _(
    "Makes the opposite gender\n" 
    "sharply reduce its Sp. Atk."
    );
static const u8 sMoveDescription_StealthRock[] = _(
    "Sets floating stones that hurt\n" 
    "a foe switching in."
    );
static const u8 sMoveDescription_GrassKnot[] = _(
    "A snare attack that does more\n" 
    "damage to heavier foes."
    );
static const u8 sMoveDescription_Chatter[] = _(
    "Attacks with a sound wave that\n" 
    "causes confusion."
    );
static const u8 sMoveDescription_Judgment[] = _(
    "The type varies with the kind\n" 
    "of Plate held."
    );
static const u8 sMoveDescription_BugBite[] = _(
    "Eats the foe's held Berry\n" 
    "gaining its effect."
    );
static const u8 sMoveDescription_ChargeBeam[] = _(
    "Fires a beam of electricity.\n" 
    "May raise Sp. Atk."
    );
static const u8 sMoveDescription_WoodHammer[] = _(
    "Slams the body into a foe. The\n" 
    "user gets hurt too."
    );
static const u8 sMoveDescription_AquaJet[] = _(
    "Strikes first by dashing at\n" 
    "the foe at a high speed."
    );
static const u8 sMoveDescription_AttackOrder[] = _(
    "Underlings pummel the foe.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DefendOrder[] = _(
    "Raises Defense and Sp. Def\n" 
    "with a living shield."
    );
static const u8 sMoveDescription_HealOrder[] = _(
    "The user's underlings show up\n" 
    "to heal half its max HP."
    );
static const u8 sMoveDescription_HeadSmash[] = _(
    "A life-risking headbutt that\n" 
    "seriously hurts the user."
    );
static const u8 sMoveDescription_DoubleHit[] = _(
    "Slams the foe with a tail etc.\n" 
    "Strikes twice."
    );
static const u8 sMoveDescription_RoarOfTime[] = _(
    "Powerful, but leaves the user\n" 
    "immobile the next turn."
    );
static const u8 sMoveDescription_SpacialRend[] = _(
    "Tears the foe, and space. High\n" 
    "critical-hit ratio."
    );
static const u8 sMoveDescription_LunarDance[] = _(
    "The user faints to heal up the\n" 
    "recipient."
    );
static const u8 sMoveDescription_CrushGrip[] = _(
    "The higher the foe's HP the\n" 
    "more damage caused."
    );
static const u8 sMoveDescription_MagmaStorm[] = _(
    "Traps the foe in a vortex of\n" 
    "fire for turns."
    );
static const u8 sMoveDescription_DarkVoid[] = _(
    "Drags the foes into total\n" 
    "darkness, inducing Sleep."
    );
static const u8 sMoveDescription_SeedFlare[] = _(
    "Generates a shock wave that\n" 
    "sharply reduces Sp. Def."
    );
static const u8 sMoveDescription_OminousWind[] = _(
    "A repulsive attack that may\n" 
    "raise all stats."
    );
static const u8 sMoveDescription_ShadowForce[] = _(
    "Vanishes on the first turn\n" 
    "then strikes the next turn."
    );
static const u8 sMoveDescription_HoneClaws[] = _(
    "Sharpens its claws to raise\n" 
    "Attack and Accuracy."
    );
static const u8 sMoveDescription_WideGuard[] = _(
    "Evades wide-ranging attacks\n" 
    "for one turn."
    );
static const u8 sMoveDescription_GuardSplit[] = _(
    "Averages changes to Defense\n" 
    "and Sp. Def with the foe."
    );
static const u8 sMoveDescription_PowerSplit[] = _(
    "Averages changes to Attack and\n" 
    "Sp. Atk with the foe."
    );
static const u8 sMoveDescription_WonderRoom[] = _(
    "Defense and Sp. Def stats are\n" 
    "swapped for 5 turns."
    );
static const u8 sMoveDescription_Psyshock[] = _(
    "Attacks with a psychic wave\n" 
    "that does physical damage."
    );
static const u8 sMoveDescription_Venoshock[] = _(
    "Does double damage if the foe\n" 
    "is poisoned."
    );
static const u8 sMoveDescription_Autotomize[] = _(
    "Sheds additional weight to\n" 
    "sharply boost Speed."
    );
static const u8 sMoveDescription_RagePowder[] = _(
    "Scatters powder to make foes\n" 
    "attack only the user."
    );
static const u8 sMoveDescription_Telekinesis[] = _(
    "Makes the foe float. It is\n" 
    "easier to hit for 3 turns."
    );
static const u8 sMoveDescription_MagicRoom[] = _(
    "Hold items lose their effects\n" 
    "for 5 turns."
    );
static const u8 sMoveDescription_SmackDown[] = _(
    "Throws a rock to knock the foe\n" 
    "down to the ground."
    );
static const u8 sMoveDescription_StormThrow[] = _(
    "This attack always results in\n" 
    "a critical hit."
    );
static const u8 sMoveDescription_FlameBurst[] = _(
    "A bursting flame that does\n" 
    "damage to all foes."
    );
static const u8 sMoveDescription_SludgeWave[] = _(
    "Swamps all others with a wave\n" 
    "of sludge. May also poison."
    );
static const u8 sMoveDescription_QuiverDance[] = _(
    "Dances to raise Sp. Atk Sp.\n" 
    "Def and Speed."
    );
static const u8 sMoveDescription_HeavySlam[] = _(
    "Does more damage if the user\n" 
    "outweighs the foe."
    );
static const u8 sMoveDescription_Synchronoise[] = _(
    "An odd shock wave that only\n" 
    "damages same-type {PKMN}."
    );
static const u8 sMoveDescription_ElectroBall[] = _(
    "Hurls an orb that does more\n" 
    "damage to slower foes."
    );
static const u8 sMoveDescription_Soak[] = _(
    "Sprays water at the foe,\n" 
    "changing it to Water type."
    );
static const u8 sMoveDescription_FlameCharge[] = _(
    "Attacks in a cloak of flames.\n" 
    "Raises Speed."
    );
static const u8 sMoveDescription_Coil[] = _(
    "Coils up to raise Attack,\n" 
    "Defense and Accuracy."
    );
static const u8 sMoveDescription_LowSweep[] = _(
    "Attacks the foe's legs\n" 
    "lowering its Speed."
    );
static const u8 sMoveDescription_AcidSpray[] = _(
    "Sprays a hide-melting acid.\n" 
    "Sharply reduces Sp. Def."
    );
static const u8 sMoveDescription_FoulPlay[] = _(
    "The higher the foe's Attack\n" 
    "the more damage caused."
    );
static const u8 sMoveDescription_SimpleBeam[] = _(
    "A beam that changes the foe's\n" 
    "Ability to Simple."
    );
static const u8 sMoveDescription_Entrainment[] = _(
    "Makes the foe mimic the user,\n" 
    "gaining its Ability."
    );
static const u8 sMoveDescription_AfterYou[] = _(
    "Helps out the target, letting\n" 
    "it move next."
    );
static const u8 sMoveDescription_Round[] = _(
    "A song that inflicts damage.\n" 
    "Others can join in too."
    );
static const u8 sMoveDescription_EchoedVoice[] = _(
    "Does more damage every turn it\n" 
    "is used."
    );
static const u8 sMoveDescription_ChipAway[] = _(
    "Strikes through the foe's stat\n" 
    "changes."
    );
static const u8 sMoveDescription_ClearSmog[] = _(
    "Attacks with white haze that\n" 
    "eliminates all stat changes."
    );
static const u8 sMoveDescription_StoredPower[] = _(
    "The higher the user's stats\n" 
    "the more damage caused."
    );
static const u8 sMoveDescription_QuickGuard[] = _(
    "Evades priority attacks for\n" 
    "one turn."
    );
static const u8 sMoveDescription_AllySwitch[] = _(
    "The user switches places with\n" 
    "its partner."
    );
static const u8 sMoveDescription_Scald[] = _(
    "Shoots boiling water at the\n" 
    "foe. May inflict a burn."
    );
static const u8 sMoveDescription_ShellSmash[] = _(
    "Sharply raises Atk/Sp.Atk/\n" 
    "Speed, but drops Def/Sp.Def."
    );
static const u8 sMoveDescription_HealPulse[] = _(
    "Recovers up to half the\n" 
    "target's maximum HP."
    );
static const u8 sMoveDescription_Hex[] = _(
    "Does double damage if the foe\n" 
    "has a status problem."
    );
static const u8 sMoveDescription_SkyDrop[] = _(
    "Takes the foe into the sky\n" 
    "then drops it the next turn."
    );
static const u8 sMoveDescription_ShiftGear[] = _(
    "Rotates its gears to raise\n" 
    "Attack and Speed."
    );
static const u8 sMoveDescription_CircleThrow[] = _(
    "Knocks foe away to switch it\n" 
    "out or end wild battle."
    );
static const u8 sMoveDescription_Incinerate[] = _(
    "Burns up Berries and Gems\n" 
    "preventing their use."
    );
static const u8 sMoveDescription_Quash[] = _(
    "Suppresses the foe, making it\n" 
    "move last."
    );
static const u8 sMoveDescription_Acrobatics[] = _(
    "Does double damage if the user\n" 
    "has no item."
    );
static const u8 sMoveDescription_ReflectType[] = _(
    "The user reflects the foe's\n" 
    "type, copying it."
    );
static const u8 sMoveDescription_Retaliate[] = _(
    "An attack that does more\n" 
    "damage if an ally fainted."
    );
static const u8 sMoveDescription_FinalGambit[] = _(
    "The user faints to damage the\n" 
    "foe equal to its HP."
    );
static const u8 sMoveDescription_Bestow[] = _(
    "The user gives its held item\n" 
    "to the foe."
    );
static const u8 sMoveDescription_Inferno[] = _(
    "Powerful and sure to inflict a\n" 
    "burn, but inaccurate."
    );
static const u8 sMoveDescription_WaterPledge[] = _(
    "Attacks with a column of\n" 
    "water. May make a rainbow."
    );
static const u8 sMoveDescription_FirePledge[] = _(
    "Attacks with a column of fire.\n" 
    "May burn the grass."
    );
static const u8 sMoveDescription_GrassPledge[] = _(
    "Attacks with a column of\n" 
    "grass. May create a swamp."
    );
static const u8 sMoveDescription_VoltSwitch[] = _(
    "Does damage then switches out\n" 
    "the user."
    );
static const u8 sMoveDescription_StruggleBug[] = _(
    "Resisting, the user attacks\n" 
    "the foes. Lowers Sp. Atk."
    );
static const u8 sMoveDescription_Bulldoze[] = _(
    "Stomps down on the ground.\n" 
    "Hits all and lowers Speed."
    );
static const u8 sMoveDescription_FrostBreath[] = _(
    "This attack always results in\n" 
    "a critical hit."
    );
static const u8 sMoveDescription_DragonTail[] = _(
    "Knocks foe away to switch it\n" 
    "out or end wild battle."
    );
static const u8 sMoveDescription_WorkUp[] = _(
    "The user is roused. Ups Attack\n" 
    "and Sp. Atk."
    );
static const u8 sMoveDescription_Electroweb[] = _(
    "Snares the foes with an\n" 
    "electric net. Lowers Speed."
    );
static const u8 sMoveDescription_WildCharge[] = _(
    "An electrical tackle that also\n" 
    "hurts the user."
    );
static const u8 sMoveDescription_DrillRun[] = _(
    "Spins its body like a drill.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_DualChop[] = _(
    "Attacks with brutal hits that\n" 
    "strike twice."
    );
static const u8 sMoveDescription_HeartStamp[] = _(
    "A sudden blow after a cute\n" 
    "act. May cause flinching."
    );
static const u8 sMoveDescription_HornLeech[] = _(
    "An attack that absorbs half\n" 
    "the damage inflicted."
    );
static const u8 sMoveDescription_SacredSword[] = _(
    "Strikes through the foe's stat\n" 
    "changes."
    );
static const u8 sMoveDescription_RazorShell[] = _(
    "Tears at the foe with sharp\n" 
    "shells. May lower Defense."
    );
static const u8 sMoveDescription_HeatCrash[] = _(
    "Does more damage if the user\n" 
    "outweighs the foe."
    );
static const u8 sMoveDescription_LeafTornado[] = _(
    "Circles the foe with leaves to\n" 
    "damage and cut accuracy."
    );
static const u8 sMoveDescription_Steamroller[] = _(
    "Crushes the foe with its body.\n" 
    "May cause flinching."
    );
static const u8 sMoveDescription_CottonGuard[] = _(
    "Wraps its body in cotton.\n" 
    "Drastically raises Defense."
    );
static const u8 sMoveDescription_NightDaze[] = _(
    "Looses a pitch-black shock\n" 
    "wave. May lower accuracy."
    );
static const u8 sMoveDescription_Psystrike[] = _(
    "Attacks with a psychic wave\n" 
    "that does physical damage."
    );
static const u8 sMoveDescription_TailSlap[] = _(
    "Strikes the foe with its tail\n" 
    "2 to 5 times."
    );
static const u8 sMoveDescription_Hurricane[] = _(
    "Traps the foe in a fierce\n" 
    "wind. May cause confusion."
    );
static const u8 sMoveDescription_HeadCharge[] = _(
    "A charge using guard hair. It\n" 
    "hurts the user a little."
    );
static const u8 sMoveDescription_GearGrind[] = _(
    "Throws two steel gears that\n" 
    "strike twice."
    );
static const u8 sMoveDescription_SearingShot[] = _(
    "Scarlet flames torch\n" 
    "everything around the user."
    );
static const u8 sMoveDescription_TechnoBlast[] = _(
    "The type varies with the kind\n" 
    "of Drive held."
    );
static const u8 sMoveDescription_RelicSong[] = _(
    "Attacks with an ancient song.\n" 
    "May induce sleep."
    );
static const u8 sMoveDescription_SecretSword[] = _(
    "Cuts with a long horn that\n" 
    "does physical damage."
    );
static const u8 sMoveDescription_Glaciate[] = _(
    "Blows very cold air at the\n" 
    "foes. It lowers their Speed."
    );
static const u8 sMoveDescription_BoltStrike[] = _(
    "Strikes with a great amount of\n" 
    "lightning. May paralyze."
    );
static const u8 sMoveDescription_BlueFlare[] = _(
    "Engulfs the foe in a blue\n" 
    "flame. May inflict a burn."
    );
static const u8 sMoveDescription_FieryDance[] = _(
    "Dances cloaked in flames. May\n" 
    "raise Sp. Atk."
    );
static const u8 sMoveDescription_FreezeShock[] = _(
    "A powerful 2-turn move that\n" 
    "may paralyze the foe."
    );
static const u8 sMoveDescription_IceBurn[] = _(
    "A powerful 2-turn move that\n" 
    "may inflict a burn."
    );
static const u8 sMoveDescription_Snarl[] = _(
    "Yells and rants at the foe\n" 
    "lowering its Sp. Atk."
    );
static const u8 sMoveDescription_IcicleCrash[] = _(
    "Drops large icicles on the\n" 
    "foe. May cause flinching."
    );
static const u8 sMoveDescription_VCreate[] = _(
    "Very powerful, but lowers\n" 
    "Defense, Sp. Def and Speed."
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
    "This attack does Fighting and\n" 
    "Flying-type damage."
    );
static const u8 sMoveDescription_MatBlock[] = _(
    "Evades damaging moves. Only\n" 
    "works on 1st turn."
    );
static const u8 sMoveDescription_Belch[] = _(
    "Lets out a loud belch. Must\n" 
    "eat a Berry to use it."
    );
static const u8 sMoveDescription_Rototiller[] = _(
    "Ups the Attack and Sp. Atk of\n" 
    "Grass-type Pokémon."
    );
static const u8 sMoveDescription_StickyWeb[] = _(
    "Weaves a sticky net that slows\n" 
    "foes switching in."
    );
static const u8 sMoveDescription_FellStinger[] = _(
    "If it knocks out a foe the\n" 
    "Attack stat is raised."
    );
static const u8 sMoveDescription_PhantomForce[] = _(
    "Vanishes on the first turn\n" 
    "then strikes the next turn."
    );
static const u8 sMoveDescription_TrickOrTreat[] = _(
    "Goes trick-or-treating, adding\n" 
    "Ghost type to foe."
    );
static const u8 sMoveDescription_NobleRoar[] = _(
    "Intimidates the foe, to cut\n" 
    "Attack and Sp. Atk."
    );
static const u8 sMoveDescription_IonDeluge[] = _(
    "Electrifies Normal-type moves\n" 
    "with charged atoms."
    );
static const u8 sMoveDescription_ParabolicCharge[] = _(
    "Damages adjacent Pokémon and\n" 
    "heals up by half of it."
    );
static const u8 sMoveDescription_ForestsCurse[] = _(
    "Puts a curse on the foe,\n" 
    "adding the Grass type."
    );
static const u8 sMoveDescription_PetalBlizzard[] = _(
    "Stirs up a violent storm of\n" 
    "petals to attack all."
    );
static const u8 sMoveDescription_FreezeDry[] = _(
#if B_USE_FROSTBITE == TRUE
    "Super effective on Water-\n"
    "types. May cause frostbite."
#else
    "Super effective on Water-\n"
    "types. May freeze the foe."
#endif
);
static const u8 sMoveDescription_DisarmingVoice[] = _(
    "Lets out a charming cry that\n" 
    "cannot be evaded."
    );
static const u8 sMoveDescription_PartingShot[] = _(
    "Lowers the foe's Attack and\n" 
    "Sp. Atk, then switches out."
    );
static const u8 sMoveDescription_TopsyTurvy[] = _(
    "Swaps all stat changes that\n" 
    "affect the target."
    );
static const u8 sMoveDescription_DrainingKiss[] = _(
    "An attack that absorbs over\n" 
    "half the damage inflicted."
    );
static const u8 sMoveDescription_CraftyShield[] = _(
    "Evades status moves for one\n" 
    "turn."
    );
static const u8 sMoveDescription_FlowerShield[] = _(
    "Raises the Defense of\n" 
    "Grass-type Pokémon."
    );
static const u8 sMoveDescription_GrassyTerrain[] = _(
    "The ground turns to grass for\n" 
    "5 turns. Restores HP."
    );
static const u8 sMoveDescription_MistyTerrain[] = _(
    "Covers the ground with mist\n" 
    "for 5 turns. Blocks status."
    );
static const u8 sMoveDescription_Electrify[] = _(
    "Electrifies the foe, making\n" 
    "its next move Electric-type."
    );
static const u8 sMoveDescription_PlayRough[] = _(
    "Plays rough with the foe. May\n" 
    "lower Attack."
    );
static const u8 sMoveDescription_FairyWind[] = _(
    "Stirs up a fairy wind to\n" 
    "strike the foe."
    );
static const u8 sMoveDescription_Moonblast[] = _(
    "Attacks with the power of the\n" 
    "moon. May lower Sp. Atk."
    );
static const u8 sMoveDescription_Boomburst[] = _(
    "Attacks everything with a\n" 
    "destructive sound wave."
    );
static const u8 sMoveDescription_FairyLock[] = _(
    "Locks down the battlefield\n" 
    "preventing escape next turn."
    );
static const u8 sMoveDescription_KingsShield[] = _(
    "Evades damage, and sharply\n" 
    "reduces Attack if struck."
    );
static const u8 sMoveDescription_PlayNice[] = _(
    "Befriend the foe, lowering its\n" 
    "Attack without fail."
    );
static const u8 sMoveDescription_Confide[] = _(
    "Shares a secret with the foe,\n" 
    "lowering Sp. Atk."
    );
static const u8 sMoveDescription_DiamondStorm[] = _(
    "Whips up a storm of diamonds.\n" 
    "May up Defense."
    );
static const u8 sMoveDescription_SteamEruption[] = _(
    "Immerses the foe in heated\n" 
    "steam. May inflict a burn."
    );
static const u8 sMoveDescription_HyperspaceHole[] = _(
    "Uses a warp hole to attack.\n" 
    "Can't be evaded."
    );
static const u8 sMoveDescription_WaterShuriken[] = _(
    "Throws 2 to 5 stars that are\n" 
    "sure to strike first."
    );
static const u8 sMoveDescription_MysticalFire[] = _(
    "Breathes a special, hot fire.\n" 
    "Lowers Sp. Atk."
    );
static const u8 sMoveDescription_SpikyShield[] = _(
    "Evades attack, and damages the\n" 
    "foe if struck."
    );
static const u8 sMoveDescription_AromaticMist[] = _(
    "Raises the Sp. Def of a\n" 
    "partner Pokémon."
    );
static const u8 sMoveDescription_EerieImpulse[] = _(
    "Exposes the foe to a pulse\n" 
    "that sharply cuts Sp. Atk."
    );
static const u8 sMoveDescription_VenomDrench[] = _(
    "Lowers the Attack, Sp. Atk and\n" 
    "Speed of poisoned foes."
    );
static const u8 sMoveDescription_Powder[] = _(
    "Damages the foe if it uses a\n" 
    "Fire-type move."
    );
static const u8 sMoveDescription_Geomancy[] = _(
    "Raises Sp. Atk, Sp. Def and\n" 
    "Speed on the 2nd turn."
    );
static const u8 sMoveDescription_MagneticFlux[] = _(
    "Boosts the defenses of those\n" 
    "with Plus or Minus."
    );
static const u8 sMoveDescription_HappyHour[] = _(
    "Doubles the amount of Prize\n" 
    "Money received."
    );
static const u8 sMoveDescription_ElectricTerrain[] = _(
    "Electrifies the ground for 5\n" 
    "turns. Prevents sleep."
    );
static const u8 sMoveDescription_DazzlingGleam[] = _(
    "Damages foes by emitting a\n" 
    "bright flash."
    );
static const u8 sMoveDescription_Celebrate[] = _(
    "Congratulates you on your\n" 
    "special day."
    );
static const u8 sMoveDescription_HoldHands[] = _(
    "The user and ally hold hands\n" 
    "making them happy."
    );
static const u8 sMoveDescription_BabyDollEyes[] = _(
    "Lowers the foe's Attack before\n" 
    "it can move."
    );
static const u8 sMoveDescription_Nuzzle[] = _(
    "Rubs its cheeks against the\n" 
    "foe, paralyzing it."
    );
static const u8 sMoveDescription_HoldBack[] = _(
    "An attack that leaves the foe\n" 
    "with at least 1 HP."
    );
static const u8 sMoveDescription_Infestation[] = _(
    "The foe is infested and\n" 
    "attacked for turns."
    );
static const u8 sMoveDescription_PowerUpPunch[] = _(
    "A hard punch that raises the\n" 
    "user's Attack."
    );
static const u8 sMoveDescription_OblivionWing[] = _(
    "An attack that absorbs over\n" 
    "half the damage inflicted."
    );
static const u8 sMoveDescription_ThousandArrows[] = _(
    "Can hit Flying foes, then\n" 
    "knocks them to the ground."
    );
static const u8 sMoveDescription_ThousandWaves[] = _(
    "Those hit by the wave can no\n" 
    "longer escape."
    );
static const u8 sMoveDescription_LandsWrath[] = _(
    "Gathers the energy of the land\n" 
    "to attack every foe."
    );
static const u8 sMoveDescription_LightOfRuin[] = _(
    "Fires a great beam of light\n" 
    "that also hurts the user."
    );
static const u8 sMoveDescription_OriginPulse[] = _(
    "Beams of glowing blue light\n" 
    "blast both foes."
    );
static const u8 sMoveDescription_PrecipiceBlades[] = _(
    "Fearsome blades of stone\n" 
    "attack both foes."
    );
static const u8 sMoveDescription_DragonAscent[] = _(
    "A strong attack but lowers the\n" 
    "defensive stats."
    );
static const u8 sMoveDescription_HyperspaceFury[] = _(
    "Uses a warp hole to attack.\n" 
    "Can't be evaded."
    );
static const u8 sMoveDescription_ShoreUp[] = _(
    "Restores the user's HP. More\n" 
    "HP in a sandstorm."
    );
static const u8 sMoveDescription_FirstImpression[] = _(
    "Hits hard and first. Only\n" 
    "works first turn."
    );
static const u8 sMoveDescription_BanefulBunker[] = _(
    "Protects user and poisons foes\n" 
    "on contact."
    );
static const u8 sMoveDescription_SpiritShackle[] = _(
    "After being hit, foes can no\n" 
    "longer escape."
    );
static const u8 sMoveDescription_DarkestLariat[] = _(
    "Swings the arms to strike It\n" 
    "ignores stat changes."
    );
static const u8 sMoveDescription_SparklingAria[] = _(
    "Sings with bubbles. Cures\n" 
    "burns on contact."
    );
static const u8 sMoveDescription_IceHammer[] = _(
    "Swings the fist to strike.\n" 
    "Lowers the user's Speed."
    );
static const u8 sMoveDescription_FloralHealing[] = _(
    "Restores an ally's HP. Heals\n" 
    "more on grass."
    );
static const u8 sMoveDescription_HighHorsepower[] = _(
    "Slams hard into the foe with\n" 
    "its entire body."
    );
static const u8 sMoveDescription_StrengthSap[] = _(
    "Saps the foe's Attack to heal\n" 
    "HP, then drops Attack."
    );
static const u8 sMoveDescription_SolarBlade[] = _(
    "Charges first turn, then chops\n" 
    "with a blade of light."
    );
static const u8 sMoveDescription_Leafage[] = _(
    "Attacks with a flurry of small\n" 
    "leaves."
    );
static const u8 sMoveDescription_Spotlight[] = _(
    "Makes the foe attack the\n" 
    "spotlighted Pokémon."
    );
static const u8 sMoveDescription_ToxicThread[] = _(
    "Attacks with a thread that\n" 
    "poisons and drops Speed."
    );
static const u8 sMoveDescription_LaserFocus[] = _(
    "Guarantees the next move will\n" 
    "be a critical hit."
    );
static const u8 sMoveDescription_GearUp[] = _(
    "Boosts the attacks of those\n" 
    "with Plus or Minus."
    );
static const u8 sMoveDescription_ThroatChop[] = _(
    "Chops the throat to disable\n" 
    "sound moves for 2 turns."
    );
static const u8 sMoveDescription_PollenPuff[] = _(
    "Explodes on foes, but restores\n" 
    "ally's HP."
    );
static const u8 sMoveDescription_AnchorShot[] = _(
    "Strangles the foe with a\n" 
    "chain. The foe can't escape."
    );
static const u8 sMoveDescription_PsychicTerrain[] = _(
    "The ground turns weird for 5\n" 
    "turns. Blocks priority."
    );
static const u8 sMoveDescription_Lunge[] = _(
    "Lunges at the foe to lower its\n" 
    "Attack stat."
    );
static const u8 sMoveDescription_FireLash[] = _(
    "Whips the foe with fire\n" 
    "lowering its Defense."
    );
static const u8 sMoveDescription_PowerTrip[] = _(
    "It hits harder the more stat\n" 
    "boosts the user has."
    );
static const u8 sMoveDescription_BurnUp[] = _(
    "Burns out the user fully\n" 
    "removing the Fire type."
    );
static const u8 sMoveDescription_SpeedSwap[] = _(
    "Swaps user's Speed with the\n" 
    "target's."
    );
static const u8 sMoveDescription_SmartStrike[] = _(
    "Hits with an accurate horn\n" 
    "that never misses."
    );
static const u8 sMoveDescription_Purify[] = _(
    "Cures the foe's status to\n" 
    "restore HP."
    );
static const u8 sMoveDescription_RevelationDance[] = _(
    "Dances with mystical power.\n" 
    "Matches user's first type."
    );
static const u8 sMoveDescription_CoreEnforcer[] = _(
    "Hits with a ray that nullifies\n" 
    "the foe's Ability."
    );
static const u8 sMoveDescription_TropKick[] = _(
    "An intense kick from the\n" 
    "tropics. Lowers Attack."
    );
static const u8 sMoveDescription_Instruct[] = _(
    "Orders the target to use its\n" 
    "last move again."
    );
static const u8 sMoveDescription_BeakBlast[] = _(
    "Heats beak to attack last.\n" 
    "Burns foe on contact."
    );
static const u8 sMoveDescription_ClangingScales[] = _(
    "Makes a big noise with its\n" 
    "scales. Drops Defense."
    );
static const u8 sMoveDescription_DragonHammer[] = _(
    "Swings its whole body like a\n" 
    "hammer to damage."
    );
static const u8 sMoveDescription_BrutalSwing[] = _(
    "Violently swings around to\n" 
    "hurt everyone nearby."
    );
static const u8 sMoveDescription_AuroraVeil[] = _(
    "Weakens all attacks, but only\n" 
    "usable with snow."
    );
static const u8 sMoveDescription_ShellTrap[] = _(
    "Sets a shell trap that damages\n" 
    "on contact."
    );
static const u8 sMoveDescription_FleurCannon[] = _(
    "A strong ray that harshly\n" 
    "lowers Sp. Attack."
    );
static const u8 sMoveDescription_PsychicFangs[] = _(
    "Chomps with psychic fangs.\n" 
    "Destroys any barriers."
    );
static const u8 sMoveDescription_StompingTantrum[] = _(
    "Stomps around angrily.\n" 
    "Stronger after a failure."
    );
static const u8 sMoveDescription_ShadowBone[] = _(
    "Strikes with a haunted bone.\n" 
    "Might drop Defense."
    );
static const u8 sMoveDescription_Accelerock[] = _(
    "Hits with a high-speed rock\n" 
    "that always goes first."
    );
static const u8 sMoveDescription_Liquidation[] = _(
    "Slams the foe with water. Can\n" 
    "lower Defense."
    );
static const u8 sMoveDescription_PrismaticLaser[] = _(
    "A high power laser that forces\n" 
    "recharge next turn."
    );
static const u8 sMoveDescription_SpectralThief[] = _(
    "Steals the target's stat\n" 
    "boosts, then attacks."
    );
static const u8 sMoveDescription_SunsteelStrike[] = _(
    "A sun-fueled strike that\n" 
    "ignores abilities."
    );
static const u8 sMoveDescription_MoongeistBeam[] = _(
    "A moon-powered beam that\n" 
    "ignores abilities."
    );
static const u8 sMoveDescription_TearfulLook[] = _(
    "The user tears up, dropping\n" 
    "Attack and Sp. Attack."
    );
static const u8 sMoveDescription_ZingZap[] = _(
    "An electrified impact that can\n" 
    "cause flinching."
    );
static const u8 sMoveDescription_NaturesMadness[] = _(
    "Halves the foe's HP with the\n" 
    "power of nature."
    );
static const u8 sMoveDescription_MultiAttack[] = _(
    "An attack that changes with\n" 
    "Memories."
    );
static const u8 sMoveDescription_MindBlown[] = _(
    "It explodes the user's head to\n" 
    "damage everything around."
    );
static const u8 sMoveDescription_PlasmaFists[] = _(
    "Hits with electrical fists.\n" 
    "Normal moves turn Electric."
    );
static const u8 sMoveDescription_PhotonGeyser[] = _(
    "User's highest attack stat\n" 
    "determines its category."
    );
static const u8 sMoveDescription_ZippyZap[] = _(
    "Electric bursts always go\n" 
    "first and land a critical hit."
    );
static const u8 sMoveDescription_SplishySplash[] = _(
    "A huge electrified wave that\n" 
    "may paralyze the foes."
    );
static const u8 sMoveDescription_FloatyFall[] = _(
    "Floats in air and dives at\n" 
    "angle. May cause flinching."
    );
static const u8 sMoveDescription_PikaPapow[] = _(
    "Pikachu's love increases its\n" 
    "power. It never misses."
    );
static const u8 sMoveDescription_BouncyBubble[] = _(
    "An attack that absorbs all the\n" 
    "damage inflicted."
    );
static const u8 sMoveDescription_BuzzyBuzz[] = _(
    "Shoots a jolt of electricity\n" 
    "that always paralyzes."
    );
static const u8 sMoveDescription_SizzlySlide[] = _(
    "User cloaked in fire charges.\n" 
    "Leaves the foe with a burn."
    );
static const u8 sMoveDescription_GlitzyGlow[] = _(
    "Telekinetic force that sets\n" 
    "wall, lowering Sp. Atk damage."
    );
static const u8 sMoveDescription_BaddyBad[] = _(
    "Acting badly, attacks. Sets\n" 
    "wall, lowering Attack damage."
    );
static const u8 sMoveDescription_SappySeed[] = _(
    "Giant stalk scatters seeds\n" 
    "that drain HP every turn."
    );
static const u8 sMoveDescription_FreezyFrost[] = _(
    "Crystal from cold haze hits.\n" 
    "Eliminates all stat changes."
    );
static const u8 sMoveDescription_SparklySwirl[] = _(
    "Wrap foe with whirlwind of\n" 
    "scent. Heals party's status."
    );
static const u8 sMoveDescription_VeeveeVolley[] = _(
    "Eevee's love increases its\n" 
    "power. It never misses."
    );
static const u8 sMoveDescription_DoubleIronBash[] = _(
    "The user spins and hits with\n" 
    "its arms. May cause flinch."
    );
static const u8 sMoveDescription_DynamaxCannon[] = _(
    "Unleashes core energy. 2x\n" 
    "against Dynamaxed foes."
    );
static const u8 sMoveDescription_SnipeShot[] = _(
    "The user ignores effects that\n" 
    "draw in moves."
    );
static const u8 sMoveDescription_JawLock[] = _(
    "Prevents the user and the\n" 
    "target from escaping."
    );
static const u8 sMoveDescription_StuffCheeks[] = _(
    "Consumes the user's Berry,\n" 
    "then sharply raises Def."
    );
static const u8 sMoveDescription_NoRetreat[] = _(
    "Raises all of the user's stats\n" 
    "but prevents escape."
    );
static const u8 sMoveDescription_TarShot[] = _(
    "Lowers the foe's Speed and\n" 
    "makes it weak to Fire."
    );
static const u8 sMoveDescription_MagicPowder[] = _(
    "Magic powder changes the\n" 
    "target into a Psychic type."
    );
static const u8 sMoveDescription_DragonDarts[] = _(
    "The user attacks twice. Two\n" 
    "targets are hit once each."
    );
static const u8 sMoveDescription_Teatime[] = _(
    "All Pokémon have teatime and\n" 
    "eat their Berries."
    );
static const u8 sMoveDescription_Octolock[] = _(
    "Traps the foe to lower Def and\n" 
    "Sp. Def each turn."
    );
static const u8 sMoveDescription_BoltBeak[] = _(
    "Double power if the user moves\n" 
    "before the target."
    );
static const u8 sMoveDescription_FishiousRend[] = _(
    "Double power if the user moves\n" 
    "before the target."
    );
static const u8 sMoveDescription_CourtChange[] = _(
    "The user swaps effects on\n" 
    "either side of the field."
    );
static const u8 sMoveDescription_ClangorousSoul[] = _(
    "The user uses some of its HP\n" 
    "to raise all its stats."
    );
static const u8 sMoveDescription_BodyPress[] = _(
    "Does more damage the higher\n" 
    "the user's Def."
    );
static const u8 sMoveDescription_Decorate[] = _(
    "The user sharply raises the\n" 
    "target's Atk and Sp.Atk."
    );
static const u8 sMoveDescription_DrumBeating[] = _(
    "Plays a drum to attack. The\n" 
    "foe's Speed is lowered."
    );
static const u8 sMoveDescription_SnapTrap[] = _(
    "Snares the target in a snap\n" 
    "trap for four to five turns."
    );
static const u8 sMoveDescription_PyroBall[] = _(
    "Launches a fiery ball at the\n" 
    "target. It may cause a burn."
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
    "Raises Speed to attack. The\n" 
    "Type is based on its form."
    );
static const u8 sMoveDescription_BreakingSwipe[] = _(
    "Swings its tail to attack.\n" 
    "Lowers the Atk of those hit."
    );
static const u8 sMoveDescription_BranchPoke[] = _(
    "The user pokes the target with\n" 
    "a pointed branch."
    );
static const u8 sMoveDescription_Overdrive[] = _(
    "The user twangs its guitar,\n" 
    "causing strong vibrations."
    );
static const u8 sMoveDescription_AppleAcid[] = _(
    "Attacks with tart apple acid\n" 
    "to lower the foe's Sp. Def."
    );
static const u8 sMoveDescription_GravApple[] = _(
    "Drops an apple from above.\n" 
    "Lowers the foe's Defense."
    );
static const u8 sMoveDescription_SpiritBreak[] = _(
    "Attacks with spirit-breaking\n" 
    "force. Lowers Sp. Atk."
    );
static const u8 sMoveDescription_StrangeSteam[] = _(
    "Emits a strange steam to\n" 
    "potentially confuse the foe."
    );
static const u8 sMoveDescription_LifeDew[] = _(
    "Scatters water to restore the\n" 
    "HP of itself and allies."
    );
static const u8 sMoveDescription_Obstruct[] = _(
    "Protects itself, harshly\n" 
    "lowering Def on contact."
    );
static const u8 sMoveDescription_FalseSurrender[] = _(
    "Bows to stab the foe with\n" 
    "hair. It never misses."
    );
static const u8 sMoveDescription_MeteorAssault[] = _(
    "Attacks with a thick leek. The\n" 
    "user must then rest."
    );
static const u8 sMoveDescription_Eternabeam[] = _(
    "Eternatus' strongest move. The\n" 
    "user rests next turn."
    );
static const u8 sMoveDescription_SteelBeam[] = _(
    "Fires a beam of steel from its\n" 
    "body. It hurts the user."
    );
static const u8 sMoveDescription_ExpandingForce[] = _(
    "Power goes up and damages all\n" 
    "foes on Psychic Terrain."
    );
static const u8 sMoveDescription_SteelRoller[] = _(
    "Destroys terrain. Fails if\n" 
    "ground isn't terrain."
    );
static const u8 sMoveDescription_ScaleShot[] = _(
    "Shoots scales 2 to 5 times.\n" 
    "Ups Speed, lowers defense."
    );
static const u8 sMoveDescription_MeteorBeam[] = _(
    "A 2-turn move that raises Sp.\n" 
    "Attack before attacking."
    );
static const u8 sMoveDescription_ShellSideArm[] = _(
    "Deals better of physical and\n" 
    "special damage. May poison."
    );
static const u8 sMoveDescription_MistyExplosion[] = _(
    "Hit everything and faint.\n" 
    "Powers up on Misty Terrain."
    );
static const u8 sMoveDescription_GrassyGlide[] = _(
    "Gliding on ground, hits. Goes\n" 
    "first on Grassy Terrain."
    );
static const u8 sMoveDescription_RisingVoltage[] = _(
    "This move's power doubles when\n" 
    "on Electric Terrain."
    );
static const u8 sMoveDescription_TerrainPulse[] = _(
    "Type and power changes\n" 
    "depending on the terrain."
    );
static const u8 sMoveDescription_SkitterSmack[] = _(
    "User skitters behind foe to\n" 
    "attack. Lowers foe's Sp. Atk."
    );
static const u8 sMoveDescription_BurningJealousy[] = _(
    "Foes that have stats upped\n" 
    "during the turn get burned."
    );
static const u8 sMoveDescription_LashOut[] = _(
    "If stats lowered during this\n" 
    "turn, power is doubled."
    );
static const u8 sMoveDescription_Poltergeist[] = _(
    "Control foe's item to attack.\n" 
    "Fails if foe has no item."
    );
static const u8 sMoveDescription_CorrosiveGas[] = _(
    "Highly acidic gas melts items\n" 
    "held by surrounding Pokémon."
    );
static const u8 sMoveDescription_Coaching[] = _(
    "Properly coaches allies to up\n" 
    "their Attack and Defense."
    );
static const u8 sMoveDescription_FlipTurn[] = _(
    "Attacks and rushes back to\n" 
    "switch with a party Pokémon."
    );
static const u8 sMoveDescription_TripleAxel[] = _(
    "A 3-kick attack that gets more\n" 
    "powerful with each hit."
    );
static const u8 sMoveDescription_DualWingbeat[] = _(
    "User slams the target with\n" 
    "wings and hits twice in a row."
    );
static const u8 sMoveDescription_ScorchingSand[] = _(
    "Throws scorching sand at the\n" 
    "target. May leave a burn."
    );
static const u8 sMoveDescription_JungleHealing[] = _(
    "Heals HP and status of itself\n" 
    "and allies in battle."
    );
static const u8 sMoveDescription_WickedBlow[] = _(
    "Mastering the Dark style,\n" 
    "strikes with a critical hit."
    );
static const u8 sMoveDescription_SurgingStrikes[] = _(
    "Mastering the Water style,\n" 
    "strikes with 3 critical hits."
    );
static const u8 sMoveDescription_ThunderCage[] = _(
    "Traps the foe in a cage of\n" 
    "electricity for turns."
    );
static const u8 sMoveDescription_DragonEnergy[] = _(
    "The higher the user's HP the\n" 
    "more damage caused."
    );
static const u8 sMoveDescription_FreezingGlare[] = _(
#if B_USE_FROSTBITE == TRUE
    "Shoots psychic power from the\n"
    "eyes. May frostbite."
#else
    "Shoots psychic power from the\n"
    "eyes. May freeze the foe."
#endif
);
static const u8 sMoveDescription_FieryWrath[] = _(
    "An attack fueled by your\n" 
    "wrath. May cause flinching."
    );
static const u8 sMoveDescription_ThunderousKick[] = _(
    "Uses a lightning-like kick to\n" 
    "hit. Lowers foe's Defense."
    );
static const u8 sMoveDescription_GlacialLance[] = _(
    "Hurls a blizzard-cloaked\n" 
    "icicle lance at foes."
    );
static const u8 sMoveDescription_AstralBarrage[] = _(
    "Sends a frightful amount of\n" 
    "small ghosts at foes."
    );
static const u8 sMoveDescription_EerieSpell[] = _(
    "Attacks with psychic power.\n" 
    "Foe's last move has 3 PP cut."
    );
static const u8 sMoveDescription_DireClaw[] = _(
    "High critical hit chance. May\n" 
    "paralyze, poison or drowse."
    );
static const u8 sMoveDescription_PsyshieldBash[] = _(
    "Hits a foe with psychic\n" 
    "energy. May raise Defense."
    );
static const u8 sMoveDescription_PowerShift[] = _(
    "The user swaps its Attack and\n" 
    "Defense stats."
    );
static const u8 sMoveDescription_StoneAxe[] = _(
    "High critical hit ratio. Sets\n" 
    "Splinters that hurt the foe."
    );
static const u8 sMoveDescription_SpringtideStorm[] = _(
    "Wraps a foe in fierce winds.\n" 
    "Varies with the user's form."
    );
static const u8 sMoveDescription_MysticalPower[] = _(
    "A mysterious power strikes,\n" 
    "raising the user's Sp. Atk."
    );
static const u8 sMoveDescription_RagingFury[] = _(
    "A rampage of 2 to 3 turns that\n" 
    "confuses the user."
    );
static const u8 sMoveDescription_WaveCrash[] = _(
    "A slam shrouded in water. It\n" 
    "also hurts the user."
    );
static const u8 sMoveDescription_Chloroblast[] = _(
    "A user-hurting blast of\n" 
    "amassed chlorophyll."
    );
static const u8 sMoveDescription_MountainGale[] = _(
    "Giant chunks of ice damage the\n" 
    "foe. It may flinch."
    );
static const u8 sMoveDescription_VictoryDance[] = _(
    "Dances to raise Attack,\n" 
    "Defense and Speed."
    );
static const u8 sMoveDescription_HeadlongRush[] = _(
    "Hits with a full-body tackle.\n" 
    "Lowers the users's defenses."
    );
static const u8 sMoveDescription_BarbBarrage[] = _(
    "Can poison on impact. Powers\n" 
    "up against poisoned foes."
    );
static const u8 sMoveDescription_EsperWing[] = _(
    "High critical hit ratio. Ups\n" 
    "the user's Speed."
    );
static const u8 sMoveDescription_BitterMalice[] = _(
    "A spine-chilling resentment.\n" 
    "Lowers the foe's Attack."
    );
static const u8 sMoveDescription_Shelter[] = _(
    "The user hardens their skin,\n" 
    "sharply raising its Defense."
    );
static const u8 sMoveDescription_TripleArrows[] = _(
    "High critical hit ratio. May\n" 
    "lower Defense or flinch."
    );
static const u8 sMoveDescription_InfernalParade[] = _(
    "Hurts a foe harder if it has\n" 
    "an ailment. May leave a burn."
    );
static const u8 sMoveDescription_CeaselessEdge[] = _(
    "High critical hit ratio. Sets\n" 
    "Splinters that hurt the foe."
    );
static const u8 sMoveDescription_BleakwindStorm[] = _(
    "Hits with brutal, cold winds.\n" 
    "May lower the foe's Speed."
    );
static const u8 sMoveDescription_WildboltStorm[] = _(
    "Hits with a brutal tempest.\n" 
    "May inflict paralysis."
    );
static const u8 sMoveDescription_SandsearStorm[] = _(
    "Hits with brutally hot sand.\n" 
    "May inflict a burn."
    );
static const u8 sMoveDescription_LunarBlessing[] = _(
    "The user heals and cures\n" 
    "itself and its ally."
    );
static const u8 sMoveDescription_TakeHeart[] = _(
    "The user lifts its spirits to\n" 
    "heal and strengthen itself."
    );
static const u8 sMoveDescription_TeraBlast[] = _(
    "If the user's Terastallized,\n" 
    "it hits with its Tera type."
    );
static const u8 sMoveDescription_SilkTrap[] = _(
    "Protects itself, lowering\n" 
    "Speed on contact."
    );
static const u8 sMoveDescription_AxeKick[] = _(
    "May miss and hurt the kicker.\n" 
    "May cause confusion."
    );
static const u8 sMoveDescription_LastRespects[] = _(
    "This move deals more damage\n" 
    "for each defeated ally."
    );
static const u8 sMoveDescription_LuminaCrash[] = _(
    "A mind-affecting light harshly\n" 
    "lowers Sp. Def."
    );
static const u8 sMoveDescription_OrderUp[] = _(
    "Boosts a user's stats\n" 
    "depending on Tatsugiri."
    );
static const u8 sMoveDescription_JetPunch[] = _(
    "A punch is thrown at blinding\n" 
    "speed to strike first."
    );
static const u8 sMoveDescription_SpicyExtract[] = _(
    "Sharply ups target's Attack,\n" 
    "harshly lowers its Defense."
    );
static const u8 sMoveDescription_SpinOut[] = _(
    "Furiously strains its legs.\n" 
    "Harshly lowers user's Speed."
    );
static const u8 sMoveDescription_PopulationBomb[] = _(
    "The user's fellows hit one to\n" 
    "ten times in a row."
    );
static const u8 sMoveDescription_IceSpinner[] = _(
    "Ice-covered feet hit a foe and\n" 
    "destroy the terrain."
    );
static const u8 sMoveDescription_GlaiveRush[] = _(
    "Foe attacks next turn can't\n" 
    "miss and do double damage."
    );
static const u8 sMoveDescription_RevivalBlessing[] = _(
    "Revives a fainted party {PKMN}\n" 
    "and restores half of its HP."
    );
static const u8 sMoveDescription_SaltCure[] = _(
    "Hurts foe every turn. Double\n" 
    "damage to Steel and Water."
    );
static const u8 sMoveDescription_TripleDive[] = _(
    "Hits target with splashes of\n" 
    "water 3 times in a row."
    );
static const u8 sMoveDescription_MortalSpin[] = _(
    "Erases trap moves and Leech\n" 
    "Seed. Poisons adjacent foes."
    );
static const u8 sMoveDescription_Doodle[] = _(
    "Changes user's and ally's\n" 
    "Ability into the target's."
    );
static const u8 sMoveDescription_FilletAway[] = _(
    "Sharply boosts offenses and\n" 
    "Speed by using its own HP."
    );
static const u8 sMoveDescription_KowtowCleave[] = _(
    "User slashes the foe after\n" 
    "kowtowing. It never misses."
    );
static const u8 sMoveDescription_FlowerTrick[] = _(
    "Rigged bouquet. Always gets a\n" 
    "critical hit, never missing."
    );
static const u8 sMoveDescription_TorchSong[] = _(
    "Flames scorch the target.\n" 
    "Boosts the user's Sp. Atk."
    );
static const u8 sMoveDescription_AquaStep[] = _(
    "Hits with light, fluid dance\n" 
    "steps. Ups the user's Speed."
    );
static const u8 sMoveDescription_RagingBull[] = _(
    "Tackle that breaks barriers.\n" 
    "User's form determines type."
    );
static const u8 sMoveDescription_MakeItRain[] = _(
    "Lowers the user's Sp. Atk.\n" 
    "Money is recovered after."
    );
static const u8 sMoveDescription_Ruination[] = _(
    "Summons a ruinous disaster and\n" 
    "cuts half the foe's HP."
    );
static const u8 sMoveDescription_CollisionCourse[] = _(
    "Prehistoric explosion that's\n" 
    "stronger if super effective."
    );
static const u8 sMoveDescription_ElectroDrift[] = _(
    "Futuristic electricity. It's\n" 
    "stronger if super effective."
    );
static const u8 sMoveDescription_ShedTail[] = _(
    "Creates a Substitute for\n" 
    "itself before switching out."
    );
static const u8 sMoveDescription_ChillyReception[] = _(
    "Bad joke summons hailstorm.\n" 
    "The user also switches out."
    );
static const u8 sMoveDescription_TidyUp[] = _(
    "User tidies up hazards and\n" 
    "raises its Attack and Speed."
    );
static const u8 sMoveDescription_Snowscape[] = _(
    "Summons a hailstorm that\n" 
    "strikes every turn."
    );
static const u8 sMoveDescription_Pounce[] = _(
    "The user pounces on the foe,\n" 
    "lowering its Speed."
    );
static const u8 sMoveDescription_Trailblaze[] = _(
    "The user attacks suddenly,\n" 
    "raising its Speed."
    );
static const u8 sMoveDescription_ChillingWater[] = _(
    "A shower with ice-cold water\n" 
    "lowers the target's Attack."
    );
static const u8 sMoveDescription_HyperDrill[] = _(
    "A spinning pointed part\n" 
    "bypasses a foe's Protect."
    );
static const u8 sMoveDescription_TwinBeam[] = _(
    "Mystical eye-beams that hit\n" 
    "the target twice in a row."
    );
static const u8 sMoveDescription_RageFist[] = _(
    "The more the user has been\n" 
    "hit, the stronger the move."
    );
static const u8 sMoveDescription_ArmorCannon[] = _(
    "A strong attack but lowers the\n" 
    "defensive stats."
    );
static const u8 sMoveDescription_BitterBlade[] = _(
    "An attack that absorbs half\n" 
    "the damage inflicted."
    );
static const u8 sMoveDescription_DoubleShock[] = _(
    "Discharges all electricity,\n" 
    "losing the Electric type."
    );
static const u8 sMoveDescription_GigatonHammer[] = _(
    "Swings a huge hammer. Can't be\n" 
    "used twice in a row."
    );
static const u8 sMoveDescription_Comeuppance[] = _(
    "Retaliates strongly against\n" 
    "who last hurt the user."
    );
static const u8 sMoveDescription_AquaCutter[] = _(
    "Pressurized water cut with a\n" 
    "high critical-hit ratio."
    );
static const u8 sMoveDescription_BlazingTorque[] = _("---");
static const u8 sMoveDescription_WickedTorque[] = _("---");
static const u8 sMoveDescription_NoxiousTorque[] = _("---");
static const u8 sMoveDescription_CombatTorque[] = _("---");
static const u8 sMoveDescription_MagicalTorque[] = _("---");
static const u8 sMoveDescription_Psyblade[] = _(
    "This move's power increases\n" 
    "when on Electric Terrain."
    );
static const u8 sMoveDescription_HydroSteam[] = _(
    "This move's power increases\n" 
    "under harsh sunlight."
    );
static const u8 sMoveDescription_BloodMoon[] = _(
    "Unleashes the blood moon.\n" 
    "Can't be used twice in a row."
    );
static const u8 sMoveDescription_MatchaGotcha[] = _(
    "Absorbs half the damage\n" 
    "inflicted. May cause a burn."
    );
static const u8 sMoveDescription_SyrupBomb[] = _(
    "Lowers the foe's speed each\n" 
    "turn for 3 turns."
    );
static const u8 sMoveDescription_IvyCudgel[] = _(
    "Type changes with held mask.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_ElectroShot[] = _(
    "Gathers electricity, then\n" 
    "fires a high-voltage shot."
    );
static const u8 sMoveDescription_TeraStarstorm[] = _(
    "In Terapagos's Stellar Form,\n" 
    "it hits all foes."
    );
static const u8 sMoveDescription_FickleBeam[] = _(
    "Shoots a beam of light.\n" 
    "Sometimes twice as strong."
    );
static const u8 sMoveDescription_BurningBulwark[] = _(
    "Evades attack, and burns the\n" 
    "foe if struck."
    );
static const u8 sMoveDescription_Thunderclap[] = _(
    "Strikes first if the foe is\n" 
    "preparing an attack."
    );
static const u8 sMoveDescription_MightyCleave[] = _(
    "An attack that hits foes using\n" 
    "moves like Protect."
    );
static const u8 sMoveDescription_TachyonCutter[] = _(
    "Launches particle blades at\n" 
    "the target. Strikes twice."
    );
static const u8 sMoveDescription_HardPress[] = _(
    "The higher the foe's HP the\n" 
    "more damage caused."
    );
static const u8 sMoveDescription_DragonCheer[] = _(
    "Increases allies' critical hit\n" 
    "ratio, especially if Dragons."
    );
static const u8 sMoveDescription_AlluringVoice[] = _(
    "Confuses foe if its stats were\n" 
    "boosted this turn."
    );
static const u8 sMoveDescription_TemperFlare[] = _(
    "A desperation attack. Power\n" 
    "doubles if last move failed."
    );
static const u8 sMoveDescription_SupercellSlam[] = _(
    "An electrified slam. If it\n" 
    "misses, the user is hurt."
    );
static const u8 sMoveDescription_PsychicNoise[] = _(
    "Sound waves that damage and\n" 
    "prevent healing for 2 turns."
    );
static const u8 sMoveDescription_UpperHand[] = _(
    "Makes the target flinch if\n" 
    "readying a priority move."
    );
static const u8 sMoveDescription_MalignantChain[] = _(
    "A corrosive chain attack that\n" 
    "may badly poison."
    );
static const u8 sMoveDescription_BreakneckBlitz[] = _(
    "Builds momentum and crashes\n" 
    "into the foe. Power varies."
    );
static const u8 sMoveDescription_AllOutPummeling[] = _(
    "Rams an energy orb into the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_SupersonicSkystrike[] = _(
    "Soars up and plummets toward\n" 
    "the target. Power varies."
    );
static const u8 sMoveDescription_AcidDownpour[] = _(
    "Sinks the target in a poison\n" 
    "swamp. Power varies."
    );
static const u8 sMoveDescription_TectonicRage[] = _(
    "Burrows deep and slams into\n" 
    "the target. Power varies."
    );
static const u8 sMoveDescription_ContinentalCrush[] = _(
    "Drops a huge rock mountain on\n" 
    "the foe. Power varies."
    );
static const u8 sMoveDescription_SavageSpinOut[] = _(
    "Spits threads of silk to bind\n" 
    "the foe. Power varies."
    );
static const u8 sMoveDescription_NeverEndingNightmare[] = _(
    "Deep-seated grudges trap the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_CorkscrewCrash[] = _(
    "Spins very fast and rams the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_InfernoOverdrive[] = _(
    "Breathes intense fire at the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_HydroVortex[] = _(
    "A huge whirlpool swallows the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_BloomDoom[] = _(
    "Uses plant energy to attack\n" 
    "the target. Power varies."
    );
static const u8 sMoveDescription_GigavoltHavoc[] = _(
    "Hits the foe with powerful\n" 
    "electricity. Power varies."
    );
static const u8 sMoveDescription_ShatteredPsyche[] = _(
    "Controls the target to hurt\n" 
    "it. Power varies."
    );
static const u8 sMoveDescription_SubzeroSlammer[] = _(
    "Drops the temp and freezes the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_DevastatingDrake[] = _(
    "Develops aura and attacks the\n" 
    "target. Power varies."
    );
static const u8 sMoveDescription_BlackHoleEclipse[] = _(
    "Sucks the target into dark\n" 
    "energy. Power varies."
    );
static const u8 sMoveDescription_TwinkleTackle[] = _(
    "Toys with the target in a\n" 
    "charming space. Power varies."
    );
static const u8 sMoveDescription_Catastropika[] = _(
    "Pikachu uses the max amount of\n" 
    "electricity and pounces."
    );
static const u8 sMoveDescription_10000000VoltThunderbolt[] = _(
    "Cap Pikachu unleashes jolt.\n" 
    "High critical-hit ratio."
    );
static const u8 sMoveDescription_StokedSparksurfer[] = _(
    "Alolan Raichu attacks with\n" 
    "full force. Causes paralysis."
    );
static const u8 sMoveDescription_ExtremeEvoboost[] = _(
    "Eevee gets energy from its\n" 
    "friends. Boosts stats."
    );
static const u8 sMoveDescription_PulverizingPancake[] = _(
    "Snorlax energetically moves\n" 
    "and attacks with full force."
    );
static const u8 sMoveDescription_GenesisSupernova[] = _(
    "Mew attacks with full force.\n" 
    "Psychically charges terrain."
    );
static const u8 sMoveDescription_SinisterArrowRaid[] = _(
    "Decidueye shoots countless\n" 
    "arrows with full force."
    );
static const u8 sMoveDescription_MaliciousMoonsault[] = _(
    "Incineroar crashes into the\n" 
    "target with full force."
    );
static const u8 sMoveDescription_OceanicOperetta[] = _(
    "Primarina summons a massive\n" 
    "amount of water at the foe."
    );
static const u8 sMoveDescription_SplinteredStormshards[] = _(
    "Lycanroc attacks with full\n" 
    "force. Removes all terrain."
    );
static const u8 sMoveDescription_LetsSnuggleForever[] = _(
    "Mimikyu punches the target\n" 
    "with full force."
    );
static const u8 sMoveDescription_ClangorousSoulblaze[] = _(
    "Kommo-o attacks with full\n" 
    "force. Boosts all stats."
    );
static const u8 sMoveDescription_GuardianOfAlola[] = _(
    "The Land Spirit Pokémon\n" 
    "greatly reduces the foe's HP."
    );
static const u8 sMoveDescription_SearingSunrazeSmash[] = _(
    "Solgaleo attacks with full\n" 
    "force. Ignores abilities."
    );
static const u8 sMoveDescription_MenacingMoonrazeMaelstrom[] = _(
    "Lunala attacks with full\n" 
    "force. Ignores abilities."
    );
static const u8 sMoveDescription_LightThatBurnsTheSky[] = _(
    "Uses Necrozma's highest\n" 
    "attack. Ignores abilities."
    );
static const u8 sMoveDescription_SoulStealing7StarStrike[] = _(
    "Marshadow punches and kicks\n" 
    "with full force."
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
