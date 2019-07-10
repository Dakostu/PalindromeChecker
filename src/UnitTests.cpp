#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "palindrome.h"
#include "stdio.h"

#include <vector>

TEST_CASE( "Check palindromes", "[PalindromeCheck]" ) {
    
    std::vector<const char*> palindromes = {
        "ROTAVATOR",
        "Ed, I saw Harpo Marx ram Oprah W. aside.",
        "Murder for a jar of red rum.",
        "UFO tofu?",
        "A but of stressed desserts fo' tuba.",
        "A car, a man, a maraca.",
        "A dank, sad nap. Eels sleep and ask nada.",
        "A dog! A panic in a pagoda!",
        "A dog, a plan, a canal: pagoda.",
        "A fine snore, rare Ronsen IFA.",
        "A Fool, A Tool, A Pool; LOOPALOOTALOOFA!",
        "A maj, a plan, a canal, pajama.",
        "A man, a pain, a mania, Panama.",
        "A man, a plan, a canal, Panama.",
        "A man, a plan, an anal panama.",
        "A peg at lovely Tsar - a style voltage, pa.",
        "A relic, Odin. I'm a mini, docile Ra.",
        "A Santa at NASA.",
        "A Santa deified at NASA.",
        "A Santa dog lived as a devil god at NASA.",
        "A Santa lived as a devil at NASA.",
        "A Santa lives evil at NASA.",
        "A Santa pets rats, as Pat taps a star step at NASA.",
        "A Santa snaps pans at NASA.",
        "A Santa snips pins at NASA.",
        "A Santa spat taps at NASA.",
        "A Santa spit taboo bat tips at NASA.",
        "A Santa spits tips at NASA.",
        "A Santa spots tops at NASA.",
        "A Santa stops pots at NASA.",
        "A Santa taps Pat at NASA.",
        "A Santa's rats top Nat, as Satan pots tars at NASA.",
        "A slut nixes sex in Tulsa.",
        "A tin mug for a jar of gum, Nita.",
        "A Toyota. Race fast, safe car. A Toyota",
        "A Toyota.",
        "Able was I, ere I saw Elba.",
        "Age, irony, Noriega.",
        "Ah, Satan sees Natasha.",
        "Aha!",
        "Al lets Della call Ed Stella.",
        "Alan Alda stops racecar, spots ad: \"Lana-L.A.\"",
        "Amaryllis sillyrama.",
        "An Elena call: \"Eek! I let a rapper named 'DeMan Reppa' rate like Ella.\" Can Elena?",
        "And we saw a Jawa sew DNA.",
        "Animal loots foliated detail of stool lamina.",
        "Anne, I vote more cars race Rome to Vienna.",
        "Are we not drawn onward to new era?",
        "Are we not drawn onward, we few, drawn onward to new era?",
        "Barge in. Relate mere war of 1991 for a were-metal Ernie grab.",
        "Bel Paese a pleb.",
        "Bird rib.",
        "Bob, Level Bob.",
        "Bombard a drab mob.",
        "Bonk. One Mac. Newton sees not wen came (no knob).",
        "Bush saw Sununu swash sub.",
        "But sad Eva saved a stub.",
        "Cain: A maniac.",
        "Campus motto: Bottoms up, Mac.",
        "Camus sees sumac.",
        "Cigar? Toss it in a can. It is so tragic.",
        "Daedalus: nine, Peninsula: dead.",
        "Dairy myriad.",
        "Dammit, I'm Mad.",
        "Damn. I, Agassi, miss again. Mad.",
        "Dee saw a seed.",
        "Deified.",
        "Deirdre wets altar of St. Simons - no mists, for at last ewer dried.",
        "Del saw a sled.",
        "Delia and Edna ailed",
        "Delia saw I was ailed.",
        "Della C., Bob called.",
        "Denim axes examined.",
        "Dennis and Edna sinned.",
        "Dennis sinned.",
        "Dennis, Nell, Edna, Leon, Nedra, Anita, Rolf, Nora, Alice, Carol, Leo, Jane, Reed, Dena, Dale, Basil, Rae, Penny, Lana, Dave, Denny, Lena, Ida, Bernadette, Ben, Ray, Lila, Nina, Jo, Ira, Mara, Sara, Mario, Jan, Ina, Lily, Arne, Bette, Dan, Reba, Diane, Lynn, Ed, Eva, Dana, Lynne, Pearl, Isabel, Ada, Ned, Dee, Rena, Joel, Lora, Cecil, Aaron, Flora, Tina, Arden, Noel, and Ellen sinned.",
        "Depardieu, go razz a rogue I draped.",
        "Desserts I stressed.",
        "Detartrated.",
        "Devo met a Mr., eh, DNA and her mate moved.",
        "Di as dad said.",
        "Did I draw Della too tall, Edward? I did?",
        "Dior droid.",
        "DNA-land.",
        "Do geese see god?",
        "Do good? I? No. Evil anon I deliver. I maim nine more hero-men in Saginaw, sanitary sword a-tuck, Carol, I. Lo! Rack, cut a drowsy rat in Aswan. I gas nine more hero-men in Miami. Reviled, I (Nona) live on. I do, O God.",
        "\"Do nine men interpret?\" \"Nine men,\" I nod.",
        "Do not start at rats to nod.",
        "Doc, note I dissent a fatness. I diet on cod.",
        "Doc, note I dissent. A fast never prevents a fatness. I diet on cod.",
        "Dog, as a devil deified, lived as a god.",
        "Dogma? I am God.",
        "Don't nod.",
        "Dot saw I was Tod.",
        "Drab as a fool, aloof as a bard.",
        "Drab bard.",
        "Drat Sadat, a dastard.",
        "Drat Saddam, a mad dastard.",
        "Draw no dray a yard onward.",
        "Draw pupil's lip upward.",
        "Draw putrid dirt upward.",
        "Draw, O coward.",
        "Dumb mobs bomb mud.",
        "Dumb mud.",
        "E. Borgnine drags Dad's gardening robe.",
        "Ed is on no side.",
        "Ed, I saw Harpo Marx ram Oprah W. aside.",
        "Eda Nomel's lemonade.",
        "Eel, urbane hen a brulee.",
        "Egad, no bondage.",
        "Egad, a base life defiles a bad age.",
        "Egad, a base tone denotes a bad age.",
        "Egad, an adage.",
        "Eh, consider: red is noche.",
        "Embargos are macabre. Sad Nell, listen O, not to no nets. I'll lend a Serb a camera, so grab me.",
        "Emil peed deep lime.",
        "Emil saw a slime.",
        "Emit a mile, lima time.",
        "Emit Eno one time.",
        "Emit no tot on time.",
        "Emu fat sap pasta fume.",
        "Enid and Edna dine.",
        "Eno misses ordered roses, Simone.",
        "Eno, rehtori. A fair other one.",
        "Enola Devil lived alone.",
        "Er, go on, trap Steven in, I say. Me oh my. Nor can an \"air\" bee sew. We see, Brian. An acronym? Hoe my asinine vet's part? No, ogre.",
        "Eros' sis is sore.",
        "Eros? Sidney, my end is sore.",
        "Eva can ignite virtuosos out riveting in a cave.",
        "Eva, can I stab bats in a cave?",
        "Evade me, Dave.",
        "Evil I did dwell, lewd did I live.",
        "Evil olive.",
        "Fart, R.A.F.",
        "Feds parry trams as martyr raps. Def!",
        "Feeble, el beef.",
        "Flee to me, remote elf.",
        "Flesh, saw I Mimi wash self.",
        "Gateman sees name, garageman sees name tag.",
        "Gert, I saw Ron avoid a radio-van, or was it Reg?",
        "Gift fig.",
        "Gnu dung.",
        "Go deliver a dare, vile dog",
        "Go hang a salami, doc. Note: I dissent, a fast never prevents a fatness. I diet on cod, I'm a lasagna hog.",
        "Go hang a salami, I'm a lasagna hog.",
        "Go, desire vagina. Man I gave. Rise, dog.",
        "God damn mad dog.",
        "God lived as a devil dog.",
        "God lived on no devil dog.",
        "God save Eva's dog.",
        "God saw I was dog.",
        "God to Hanoi on a hot dog.",
        "God, a red nugget. A fat egg under a dog.",
        "God, a saw was a dog.",
        "God, a slap. Paris, sir, appals a dog.",
        "God, Edam made dog.",
        "Gold log.",
        "Goldenrod-adorned log.",
        "Golf? No sir, prefer prison flog.",
        "Greta? Education? No, it a cud eater, G.",
        "Guns 'n' robes, a base born snug.",
        "Gustav Klimt milk vats - ug.",
        "Harasoo, Sarah.",
        "Harass sensuousness, Sarah.",
        "He did, eh?",
        "He goddam mad dog, eh?",
        "He maps spam, eh?",
        "He stops spots, eh?",
        "He won snow, eh?",
        "He won't, ah, wander, Edna. What now, eh?",
        "How? O, he boinks. Ask Niobe how. Oh.",
        "I.",
        "I did not revert on Didi.",
        "I did, did I?",
        "I, lad Dali.",
        "I led deli.",
        "I madam, I made radio! So I dared. Am I mad? Am I?",
        "I maim Miami.",
        "I met System I.",
        "I roamed under it as a tired, nude Maori.",
        "I saw a gif. Fig. A was I.",
        "I saw desserts; I'd no lemons; alas, no melon. Distressed was I.",
        "I won, Karen, an era know I.",
        "I yam, fun 'nuf. May I?",
        "I'm a lasagna, hang a salami.",
        "I'm a lass, a salad, new end alas as salami.",
        "I'm runnin', Nurmi.",
        "I'm, alas, a salami.",
        "I, man, am regal, a German am I.",
        "I, Mary, tramp martyr. Am I?",
        "I, Rasputin, knit up Sari.",
        "I, zany Nazi.",
        "If I had a hi-fi.",
        "Is Don Adams mad? (A nod.) Si.",
        "Is sensuousness I?",
        "Jar a tonga, nag not a raj.",
        "Kay, a red nude, peeped under a yak.",
        "Kayak salad, Alaska yak.",
        "Kayak.",
        "KC, answer DNA loop award. Emit time. Draw a pool. Andrew, snack.",
        "Kodak ad, OK.",
        "Lager, sir, is regal.",
        "Laid on no dial.",
        "Laminated E.T. animal.",
        "Late? Bill is ill. I bet, Al.",
        "Lay a wallaby baby ball away, Al.",
        "Lee had a heel.",
        "Lem saw I was Mel.",
        "Lepers repel.",
        "Let O'Hara gain an inn in a niagara hotel.",
        "Lew, Otto has a hot towel.",
        "Lewd I did live, evil did I dwel.",
        "Lid of fade, metallic soot, emit Garret-simple, help mister ragtime to oscillate me, daffodil.",
        "Lisa Bonet ate no basil.",
        "Live dirt up a side track carted is a putrid evil.",
        "Live evil.",
        "Live not on evil, madam, live not on evil.",
        "Live not on evil.",
        "Lived on Decaf, Faced no Devil.",
        "Llewopnotyalc, Madam, I'm Adam Clayton Powell.",
        "Lonely Tylenol.",
        "\"M\" lab menial slain: embalm.",
        "Ma has a ham.",
        "Ma is a nun, as I am.",
        "Ma is as selfless as I am.",
        "Ma, I say. Lee's as eely as I am.",
        "Mad dastard, a sad rat - Saddam.",
        "Madam, I'm Adam.",
        "Madam in Eden, I'm Adam.",
        "Man, Eve let an irate tar in at eleven a.m.",
        "Man, Oprah's sharp on A.M.",
        "Marge lets Norah see Sharon's telegram.",
        "May a moody baby doom a yam?",
        "May it name 'em anti-yam?",
        "Mayhem, eh Yam?",
        "Meg, am I naive? No, yaw a kayak away on Evian. I'm a gem.",
        "Miry rim. So many daffodils slid off a dynamo's miry rim.",
        "\"Miry rim. So many daffodils,\" Delia wailed, \"slid off a dynamo's miry rim.\"",
        "Mo spell it so that lovers revolt. Ah to still Epsom.",
        "Model truth: turtledom.",
        "Mr. Owl Ate My Metal Worm.",
        "Murder for a jar of red rum.",
        "Must sell at tallest sum.",
        "N.A. medico: Negro Jamaica? A CIA major genocide, man.",
        "Nail, ligature, rut. A Gillian?",
        "Nam was a saw man.",
        "Name now one man.",
        "Named undenominationally rebel, I rile Beryl. La, no! I tan. I'm, O Ned, nude man.",
        "Naomi, did I moan?",
        "\"Naomi, sex at noon taxes,\" I moan.",
        "\"Naomi,\" I Moan.",
        "Ned, go gag Ogden.",
        "Neil A. sees alien.",
        "Neil, an alien.",
        "Never odd or even.",
        "Niagara, O roar again.",
        "No cab, no tuna nut on bacon.",
        "No cabs' bulbs? A gnat's tool loots Tan \"Gas\" Blub's bacon.",
        "No gnu have never after fret far, even Eva hung on.",
        "No, I met System Ion.",
        "No, it can, as it is, it is a war. Raw as it is, it is an action.",
        "No, it is open on one position.",
        "No, it is opposed, art sees trade's opposition",
        "No, it is opposition.",
        "No lemons, no melon.",
        "No, Mel Gibson is a casino's big lemon.",
        "No misses ordered roses, Simon.",
        "No pet so tragic as a cigar to step on.",
        "No, she stops spots, eh, son?",
        "No side, no in union, Edison.",
        "No, sir, prefer prison.",
        "No, son! Onanism's a gross orgasm sin -- a no-no, son.",
        "No stetson.",
        "No stetson hats. Operas are post. Ah, no stetson.",
        "No witness, a fool. A nasal aria's time emits air. Alas, an aloof assent: I won.",
        "Nog eroded Oregon.",
        "Nora, a raft! Is it far, Aaron?",
        "Noriega can idle, held in a cage, iron.",
        "Norma is as selfless as I am, Ron.",
        "Nosegay ages on.",
        "Not lads simple, help Miss Dalton.",
        "Not New York, Roy went on.",
        "Note: nine Devo-organists in a groove den in Eton.",
        "Now, Ned, I am a maiden nun. Ned, I am a maiden won.",
        "Now's evil for evil? Ah, a liver of lives won.",
        "Nurses run.",
        "O, geronimo, no minor ego.",
        "O, I dare not tone radio.",
        "O, memsahib Bart, rabbi has memo.",
        "O, stone, be not so.",
        "O.E.D. or rodeo?",
        "Ogre, flog a golfer. Go.",
        "Oh, no! Don Ho.",
        "Olli'd accept a fat peccadillo.",
        "On a clover, if alive, erupts a vast, pure evil, a fire volcano.",
        "Otto did bob did otto.",
        "Otto saw pup, pup was Otto.",
        "Oy, Oy, a tonsil is not a yo-yo.",
        "Pa's a sap.",
        "Paganini: Din in A Gap.",
        "Paget saw an Irish tooth, Sir, in a waste gap.",
        "Panda had nap.",
        "Parcel bare ferret up mock computer-referable crap.",
        "Parkay yak rap.",
        "Party boobytrap.",
        "Party-trap.",
        "\"Peanuts' Legs\" is Gels' Tuna EP.",
        "Pint a' Catnip.",
        "Plan no damn Madonna LP.",
        "Poor Dan is in a droop.",
        "Poor Das is a droop.",
        "Pope pop.",
        "Puff up.",
        "Pull up if I pull up.",
        "Pus, Dan, Ogre sales use laser gonads up.",
        "Racecar.",
        "Race fast, safe car.",
        "Radar.",
        "Rae, bite yon no yeti bear.",
        "Rat-star.",
        "Rats ailed, damn it, in mad Delia's tar.",
        "Rats drown in WordStar.",
        "Rats live on no evil star.",
        "Raw sexes war.",
        "Raw, evil dam on Niagara. Gain net time. Sub bus, emit ten Niagara. Gain no mad, live war.",
        "Re-paper.",
        "Red lost case, Ma. Jesse James acts older.",
        "Red rum, sir, is murder.",
        "Red? No. Who is it? 'Tis I. Oh, wonder!",
        "Redivider.",
        "Redraw a warder.",
        "Reflog a golfer.",
        "\"Regal as tide\" Kramer remarked. \"It's a lager.\"",
        "Regal lager.",
        "Reg, Its sarcastic. Its a crass tiger.",
        "Remarkable was I ere I saw Elba Kramer.",
        "Reno loner.",
        "Reviled did I live, said I, as evil I did deliver.",
        "Reward animals, O Greg, ergo slam in a drawer.",
        "Rise to vote, sir.",
        "Rise, sir lapdog. Revolt, lover God, pal, rise, sir.",
        "Rise, take lame female Kate, sir.",
        "Rob a loneliness? Senile, no labor.",
        "Rococo \"R\".",
        "Rot can rob a born actor.",
        "Rot-corpse Sumatran art amuses proctor.",
        "Rotavator.",
        "Roti de pup editor.",
        "Roy, am I mayor?",
        "Rub bur.",
        "Sad, I'm Midas.",
        "Sardi puts nog on stupid RA's.",
        "Satan oscillate my metallic sonatas.",
        "Saw tide rose? So red it was.",
        "Self-furnace Pecan ruffles.",
        "Senile felines.",
        "Set at serif, as Safire states.",
        "Sex at noon taxes.",
        "Sex-aware era waxes.",
        "Sexes.",
        "Sh, Tom sees moths.",
        "Sir, I soon saw Bob was no Osiris.",
        "Sis, ask Costner to not rent socks \"as is\".",
        "Sis, Sargasso moss a grass is.",
        "Sit on a potato pan, Otis.",
        "Sniff'um muffins.",
        "Snug & raw was I ere I saw war & guns.",
        "Snug all L.A. guns.",
        "So many dynamos.",
        "So, G. Rivera's tots are virgos.",
        "So, Ida, adios.",
        "Solo gigolos.",
        "Solos.",
        "Some men interpret nine memos.",
        "Sore eye, Eros?",
        "Sore was I ere I saw Eros.",
        "Splat, I hit Alps.",
        "Stab nail at ill Italian bats.",
        "Star comedy by Democrats.",
        "Star Wars awe was raw rats.",
        "Star-red rum and Edna murder rats.",
        "Star? Come Donna Melba, I'm an amiable man, no Democrats.",
        "Stella won no wallets.",
        "Step on no pets.",
        "Stop! Murder us not, tonsured rumpots.",
        "Stop, Syrian, I start at rats in airy spots.",
        "Strap on no parts.",
        "Stratagem: megatarts.",
        "Straw warts.",
        "Straw? No, too stupid a fad, I put soot on warts.",
        "Stunts is. Niece insist nuts.",
        "Sums are not set as a test on Erasmus.",
        "Suneva, Nina is sure Russian in a Venus.",
        "Sup not on pus.",
        "Suppository rot, I sop pus.",
        "Swen, on gnus, sung no news.",
        "Sworn I sit, 'tis in rows.",
        "T. Eliot nixes sex in toilet.",
        "T. Eliot, top bard, notes putrid tang emanating, is sad, I'd assign it a name: gnat dirt upset on drab pot toilet.",
        "Tangy gnat.",
        "Tarzan raised Desi Arnaz' rat.",
        "Ten animals I slam in a net.",
        "Tense, I snap Sharon roses, or Norah's pansies net.",
        "The almanac can am laeht.",
        "Timid, I'm it.",
        "'Tis Ivan on a visit.",
        "To Idi Amin: I'm a idiot.",
        "To last, Carter retracts a lot.",
        "To Dr., et al. Re: Grub. Ma had a hamburger. Later, Dot.",
        "Toni Tennille fell in net. I, not.",
        "Tons o' snot.",
        "Too bad, I hid a boot.",
        "Too hot to hoot.",
        "Top spot.",
        "Top step's pup's pet spot.",
        "Trade bad DA bed art.",
        "Trafalgar rag: La Fart.",
        "Trays simple help, missy art.",
        "Tulsa night life: filth, gin, a slut.",
        "Tuna nut.",
        "UFO tofu.",
        "Unremarkable was I ere I saw Elba Kramer, nu?",
        "Vanna, wanna V?",
        "Viva le te de Tel Aviv.",
        "Vote to not slip up, refer pupils to note TOV.",
        "Warsaw was raw.",
        "Was it a bar or a bat I saw?",
        "Was it a bat I saw?",
        "Was it a car or a cat I saw?",
        "Was it a cat I saw?",
        "Was it a rat I saw?",
        "Was it Eliot's toilet I saw?",
        "Was raw tap ale not a reviver at one lap at Warsaw?",
        "We few erase cares, Al. Laser aces are we few.",
        "We few.",
        "We panic in a pew.",
        "We seven, Eve, sew.",
        "Wet rare paper art, ew!",
        "Wo Nemo, toss a lasso to me now.",
        "Woman maps yam snot and DNA. Tons may spam Nam. Ow!",
        "Won't cat lovers revolt? Act now!",
        "Won't lovers revolt now?",
        "Wonder if Sununu's fired now.",
        "Wontons? Not now.",
        "Xerxes was stunned. Eden nuts saw sex, rex.",
        "Yaw. A sleep apnoea. A eon, Pa, peels away.",
        "Yawn a more Roman way.",
        "Yawn. Madonna fan? No damn way.",
        "Yell upset a cider, predicates pulley.",
        "Yo bob, mug a gumbo boy.",
        "Yo! Banana Boy.",
        "Yo! Bottoms up, U.S. Motto, boy.",
        "Yo! job mug gumbo joy.",
        "Yo, oy.",
        "You buoy.",
        "Young Ada had a gnu. Oy!",
        "Yreka Bakery.",
        "Zeus was deified, saw Suez. "
        
    };
    
    
    for (auto palindrome : palindromes) {
        puts(palindrome);
        REQUIRE(checkIfPalindrome(palindrome) == 1);
    }
    
}

