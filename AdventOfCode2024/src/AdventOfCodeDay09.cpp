#include <iostream>
#include <string>

std::string diskMap = "9953877292941648772616264775767428658883838268139271603033278826197512792138493841982683804757568110199215215571317977709849759733243569153182826948453096391192839170636590177283483639322341355356571986364617949975397540918247773979215998528235644578989248914549383222856258361161819260156064179996391961266912604423901066942216914217854276303630422886332436181925374685244140386687415960519939986071571752695323769824328476131628683469846953449356965554115590163216555863101814371821622059234754412952107359623159457288984076219639102672923788441086209687475033947873589869404644549648288825655198836028588849758065833038712860453278561629128194451431258781766519411112346859714318866328287132359827888716365493428476151089579915842478564939451742488886252065218125523183159190857623387862114038404875807456711075467031177026179750205411979310986675644388976287333467536853431970802022963588477642723084159186887657821874314618571866853797513937864514587980968044956444686467732298472170894497766918323313989886969526469633529546661027279823624833113451138628707972506178886396324927519720802441301629508356486017323180388623763989948880162984381152646523226343867258512950529356692920347519284216878459724924704970186844211512936492958969145515253550988722274195372951367390245879138326936518286787""8289681985452396754394931481239884292379194140175675952944846655594488423912106576151814474945535237764465322670548175924580891556628469721450857381548372547047802552332658395393324943662665169026126067101952785883414137788570941844555222956193229055497746236981896997195116481258991086158821153424787378107091147418668962122490153975476215692261327062163047608085272414798617672285409310241721578421264585767763806835122112576494437073372733806486431070927041288030487297635827916798548269744363925533655985968576378635532737862216841458271457302389204217739432413339594065536737809888536696656329696092458841473256757412638371253992836217261""49153411123642513793771858546857241277844831758533096187329191192361899778775713766998925943964184060264161763929733129582060575776484674601481529293815518873595751299526753664798962691879371805960298650334921172837319162182739246199967977214958347582443988559040643576693613983710696599846618146310779935379427431572672232268710655256633119349722255254203244955318837479425818595058883159522172125123477046519623366023145950406420354021749856829987964757726770415929142616243825957194497512509467596299714567534620735696408398914927186575213628658975237577677626323098658718648480865153104585133043937441179934613447178932735183479837326461991514446224691285712816505421541188864390611231927199591053914773621381565619193490195121385563574974937319557723857518526440808767948253626897581294468744535957758397546675114268117396104199435561738635794559332173994456165773288285741399281892454219551981493991442413833474294486626217544268366367187026302572665585866062523091628551188032541345842830979462141866933637901250962086336185168431312716258429489520567518252710745963708049963539775895149137364332434462726826231991396378361974721851949847672075589859766537584973547169256840567516434560894380499411878764195355193035302887129050241641201250961293975638785637187254574782124164129680894281469996816781699791178788244086854725936594812845931719195684974841658662601927629977874565221515386218324555108186774423385493241557644638839648745875638947398840123565984453571979909757926026289488665321107437543533396842773526625812213616892173728395363984803489224172528070385657677840357753157114318886445125641565586266477412135619594119137841696238254810805831352342848580527035329868161013883669199278821722521150934216691484199172157412282530101185386123414891593078398445927193841635702990427485337758105257733624627347669857817741308281681138852620595044127944544789191465553956964159491666471443563074428589697914352241831984786723241080278698647317928130309765124361472562874661222045471149487043475720541326123514815943282820348967742558178412412414135353178865331357643149844765803666617637783611704835558719607962508717646147752059281064953822469035371530632815485687555634191623366675503964863051775824444147585169378779551097444690316481411899565016451780724170808454921319401678696177347666251347934156702386771942763348868028172776348376221253179521337346113247956732527952655817561927434210448881992966445210673859576794468665191678689247808451405275545236352187538233843619665694706337239238629011374993369793569671716258663085762456827453912170611066353248999297411819916182797156237051184841992592339435212385474955625835921165998283901542687939615294923238201528233713886046981860586775496659582487675458216668363267653677537891276083451310652735394592355427138739756320976992291532507217847550451795661114242814384594891669237013966088185015482234495358866928591321924652371181186059891815317081896037791581977716361599558822304391387735483664237887341241354720476735327889843575636129711374991549899215849997423991464614514032494340901368534549584243686387358667444626196855211095336941424745799841654930414637644887764944624460154358402017538730543447148671769981113256148070577868289940588936172424582914987473316044282311541518919665711224906238739936561817752250153374305931396036179219369821377252497568568250156341609471128816304032249564192531778921182065439631941065364089841617474463385572205840483077878490575839534354729862836339876229903613517085426363432773354826853553727541897789834211554825133921224365828334981123504958961594206053553483709481146157356685777532584438651184342081922416522783174781616231869739895864375446352560311667264286237668157023136176433614647667496539454023249784802548328650266339305842107410749492225394862298634745702428653812525763236232592227624283172694271450966649719068497169417549752646163911336765793418992437835021438772424649411248378669845923251194381342237048637531293784611443937070638020663256844440483533962245523972719859756097172238369373392295222475845599608442796664343615224131875268144890813116575168587370312823733117864491278973552882147562661155498388461856856096417976196946939215521019595764304737736732457555962679789795685091998488474875814627625782718444402428625496116555226690657446719238128945757654875735533343179170869860373430658018811866618327328349516792661612205669813710187113276357548366402212545322638361738991168755989667203647145273647810671530573735624845288764371816215665271159716953365444585027431379699640397396133954135399603516353538837439743725672776265038728578585314388042679131164764364916782745345891148730908727766796452872635667763119221265529827609971127211338743835439287769244138852763479488156867262982133086324759701067804283842637652643513062915552572674544126624195555859181218516745833792654984625525434969908913332568413561757349296827507576983591343669477240643151468133791480811118296898471163956771413336196924521689681975239548387366135114994140296399109120289440326062193917524311497525149644274261109920403890847086152399173383524712454978449751507711982653808947917370862492713527334423317470755494253968443310828711147875793790737777941979648735283670974310982185384938715444122943571584486790468686223050737945717443168060374439218990137794352738103172104081203540616278756022737823666377359476495058113531809154173651869062235699735456865283147317236961345364864143174825531969794223358613273988734337448524645190922460157534274138587463873091876911563198446067534862926368879149579728378627536920372452681275528637203370169322193447428262828442757385279978409260572137844773116733109354202018335753448549441752432917543886228918269131831685261378588686778745214467721133755350629892337532413155772155661770843849722217204041858875326692698269704389213544148426436910157511926252664598194994991788192828198815215037372649508323305617411625571476589324883275234479852239863295768848672139202532321314805070918588118513683239524512926965529976684378906482205985184060821781167395331492339731796769146936226821152019775539589339271720203722444456366866357468364573812310178513403124963434292151275573603722913575992914852883589445284177802981195971105110113989484531136494959365913526804010971849728042311681687314693218481080827850565234892063955349852588471318817254902334475443599637128319893352602739721472176798834599194920423044723085139290743820459""8409722799835317581883250529390781943774678362438588470926694678722858839263443849262742639375771773999507014619120249075502076299644757926542750214866828619102234955585156473699325275775729020563292928995475735223687238535834192435549855375611889814273425916211042572149114590253054146445671196303645139469415259289540672263752978967381174353565292669293432275412060473475903741758097252224314770727954464295532395191556551743411463221218994175179711893383257220942442779551549254131272133980536680873297877184304436436477225433514484186926478922574271477620606753215498236977416929589261709555672688633592561198452175788165686343656650499726467073217889287520352682514353528541731256593539512320523570427283198178542452215194989097553613732894551246577694366284835829954041244464412337796567135279411282849686645869246366393917747752807890951722679636149182798610575217252681422033805791754387513562146229113840751366311763857772833160568585343076133828388198561291691089924111309289254777487485301443209223274462343976455692926952778184847721943627249218443897849047602177593444496226609669506028234540918492327456372045911036692919604066603194524394208592492153376753632358792378267668842778649113933063608073243665438823737786483893619677391237295846165491785527444767463327544453952197103214293655233879612745605050304625154871677937739115389935304525263694931373295868843774384499644131767815126455322357147327313022563846769819989971516427507046506279949670971539212821755837944844618971431264833516145939255377226270482274409517419483276537123085202617555515539575302899839191442474642085789324886446859989492957383320964590749637691437373677152861875277997354811260191318398474466925997389538295103348618656679737885821602072711379997711703439217535306464418810228697405997982781459442977928362499284343295139533389228496839416346611826959356921963110422262913942745564931951724980353854172177352914604173438643997944327851603583351530768490616756166554908358267432245612689012831715601720882836966999343276284762778521402254201951384740319327859516691330143761608333709973774577261157373787234245953772376942217425191978607665683485413488334288978091245793732540938030356358299456426956568119365934578051863938572249622967597268981371151815336067589443549754965239965052355367667061939363236743405854729098814785149344732259116721479246221410792110417312169212359298922484549439661357754728666247507239987162716541194419155698548495911639247047837797922626483686861885489952647969524388969447238850893557842572698372564859116836913343179181235519951189776813497288283638834316145977433270579951245178596414614623563772883952415612135584381964571488627993199853407489548329593168208797769656571514751493756330841884121087231666175757459993691843205029342365126274934328265489537828377772779427804937459481842431489983999669532720855550802290801481461797256199233850739683966582969455785983322576663055518697991915382597371026189289739999816672656376274668255326829649897698657092317759147877784981325037277960914891644021185611555959933255639727672627654939804717174932102593513535299286298955356846208376973875124599307726577382651326438839896913934097431115189282672142899247586654155853926561305336295661861127368974961593527881734393688962771889758997428141129128137395284598342990817084829623533447723333785786927410813180292491391755489087761029243516892527431488317446508762642017449248683348645029879422365365655578959337679893774696725853726649447881377678564510243396605836411379896252719525596592675628772710417138822125834527592115571385103593554578908953878731654327816510721630886584706383624789943315408994443464247025579045897720799233386435559052987469405050364499658325942040478678801868433150851054871957672493745935161971711136775313761783175254579518502325219989363416522472948838471513674394691929902745249638385951963789954631841027304072721292826531737395512599292795664585795684519164535018932240378175997788278952735244897584955357894822461270353329324059836152252577629896908283317186847016841841257780654653726969113551598521518959361820873914543322217973648741725581494595654447701928249374126044823288691036304846394775435057319917687121216949341190115842198693507831822857614544655388187277905269334072733663961873495450664546478739433612818025985688836493856870428299664993295882152877736314954196335994768870567159306736197810307284148369105231138088792999364974752533399976844962628548262729707728196971775064486661772396143653603813507918654438162732738285832446229788652717194425385527227654573111345927369374575167361145489850565717444774354511579835521079551354639669897242326226287517791561536728921572404862883789602825722230487096863659181145264177117875962816653415267337745862404874104323397486838372454816598377812714858471599280715479127162187131425645239440362416285246849852551326322299903317518243315599817744108589129576623317523269125664418251515443407618946524852723809181177724952523426797346414166388372237416536744183997565707989919039979135199524641066726055276264304963871933833278796195227833471886353689113912274795286764424694352452135346887037195174192650519571855217486090299233898733485176789627965750766880462476257898207757915052891497603241942656836226545394695218355060652835919368461015918110999218988728201991857953353185516218353727922897898366713160938545109090172487128778737148512868839312361563845379253833604361328590337165885450548724879936116559153060409856112752765335196151939175315833417498536096247561755680813317419122972363605035682157924239326860232814529381409287947338905853193827588595675169851170518875251254992147709948858974123066457639216873632097738831908338179237751362204470144370113815105612223488312771532958837721386857621598639050195759864522618188309723997060881334228245471841648714454510671752941218961642938894245823349810705096853983137918613512148218914059256310665164178919957395293286421759881464336795107496275020704748807263213042224277197149619025114932342021703548165412539995734745704812281096944464144513829542125526852937456394463642752147873881156014878466365417661298943062193730238343422493351912338311445826556611285233744959921140428056811786982133575862109132591442586014795090171741843070892982815674506229895224719456936460381051144328888793935372477142693486379463585869588997785987738569969178882379952023444669162599966785743645758168999413246252123486965799315722806043459819749418447094885597753664549226962853868017937811126350517364371968511895526338861554573610281851594534755236409424485434596769964211728021118453754742126840827327329334612579449450735998415595162998584623945156881818796655182031311117762181862772335689616860982144846768303875374113646456221665561228517750912463999551856197916364731987972372522797531849333691734775162037359297402565909973206626808529808196848349185418175776789844934020487149155936746152235091787481964189539973514192255632713286543699801864635995425697355240714626521894461310701862153196958045775964426884956114553328844054894893901857368682666477634073808218642744856088605659424344344239933896643210472252331374606652536721826799833937271899218783537436521292349470961413112393218060822910196283595439284935433414496798608529843116826830332221602113865653747193594714864822639456548950969994509058906267237891905530238342426546627037561976509937901020315243902318205940754121749187284317769599826860122218519251647483665419876643606697672853133280802694981710697775679296551231209749395333125858249533255669427397424093825258857821378792631167124455627467845914244792204182343277605812981963252010582064564561618436598714768592836684179098396692902887999319461495783649377932179541622733109122567188786249973769295049928922281178541354661327482474688473427442175232586675882559822049979241636079995439805217807568832936666755236741281283707224953864185363539949471035204129428419233374259754194796795737375859935571269197391741815846264965122230868920509841654429332514602342613362483760495592349336567092194790552479429718231580663996721167859436917072661935746379853937523337583041321635598616375083962893211577166187838029165821204773685540136030987932615566376013566078192548186487597929985668688427737926948281747389809774933189791249455931248145506787189947872396231983408729597856305919389737144852334176514615974881983838459967899487339259161325802014184669888140293970841867923142693571501469597490107685877512758662318695643819963225221534525154838299806495805529369395728344866848317037359184499050533713137313288737389974141973327541856550512020304724528079618919222716168822733683145537221974286754228853574426699913161786206954496290881156551228708269143880132690248628419940119316202243719639489083481715349756115175174728549646186842273283113123326230792035683938776441248589199462799037886352939044934051912846288628797997437081697993135694275381756244821440752736851049547459457511924574211593267114692039489711183117423010644582921152244161322691521188441294432634255263311184333982641492808486224111945449138222481991513744902776183856146137763838217812805718484461771455379431926521815833643084983341574156223444616264813548669545423284477728103287455578655534113440578555933590457517621740152121526591302320559493688171195416355714694998259354198818705781182756942114632682272136284883575280919593157621637473133250744922472672141028998878465035946233359238802415798587342415415956358865""8672367915602047241214831220723332719036163350229913162185644431402752943935151636688135736759515552878233877880891931273027437542409471348459494""09385164569115454941218594789402072916960128927927990254679567778125447485882164363214440766119874247157116293725707015798837281338901937259473292449648813929228272399211780959298809232925663678033429118831678152099878469665094866196935799111341986528859043331222618879521530753632675588535427316432882116995121997093207593563361117881355517864444178030397698216252344474465980188880264516637142533270""641053302369485350305428969012358319774283702927478777563758235345959359223773393691108389664774834689589038262466502098432789507029983778303135173897436029715412108018712655232950197155411920701852727114775230534440264925323028708470902349185574289760638116429830431845918367558939952""4432046458894351067737564607441844631315174904093325997336532957382359824435986731738137553471828968645887017821888154580349933177076387441481697692033891381297475398838782091686672953719887782227470332146344374611417317322557221716682894236864431426580776127596663947724""93535810661043548792425895171992433136754977783539147917909383476383744833241712642127381016319920983446154390787923783971141351873183368782853129235748759958111068876374686496414124415795946489379561333483676999701347756217653547723995707640345597451491161419634675851866761185993131611530297251277228955627332670""978954501550251248344179612948425197206640703311517936302362467087346343129458151782908338854428153387954993488034938780423821502621499599346410101918825587441376669447944837307190459069567576669116843867283137144373126289422555997646316157428774633889529165638012362499739244517""6761589811141701991869359372718522111534731252418859794668123967466651157103516144324667127689711998657345723685657712741844392943517992773332016342634173373667983329876352985528789439537702827949643543015891452267660175166974665538977382853981529678316124772978982858098375964785485503449297672172017667297481419166596""8377679057111757554567632341809178939763698516466521754449277681728248314745265416923943105833124832186658567050623356888616753862411790965125587883649825467173538445845222588678831547771055609250801044119039714391542276714523732863532885628165471526409163824";
//std::string diskMap = "2333133121414131402";
//std::string diskMap = "15324";

long long Part1() 
{
    long long checkSum = 0;
    long long totalFilesLength = 0;
    int blockLength = 0;
    int remainingFileLength = 0;
    long long sortingFileIndex = diskMap.length() / 2 + 1;
    long long diskIndex = 0;

    // Count up how many full blocks there are
    for (int i = 0; i < diskMap.length(); i += 2) {
        totalFilesLength += diskMap[i] - 48;
    }

    for (int block = 0; block < diskMap.length(); block++) {
        blockLength = diskMap[block] - 48;
        for (int i = 0; i < blockLength; i++) {
            //End the script if we have reached the end of the sorted disk //
            if (diskIndex >= totalFilesLength) {
                break;
            }

            if (block % 2 == 0) {
                // If block contains a file //
                checkSum += diskIndex * ((block + 1) / 2);
                diskIndex++;
            }
            else {
                // If block does not contain a file //
                if (remainingFileLength == 0) {
                    // Jump to the next complete file //
                    sortingFileIndex -= 1;
                    remainingFileLength = diskMap[sortingFileIndex * 2] - 48;
                }

                // Add up the sorted file //
                checkSum += diskIndex * sortingFileIndex;
                
                remainingFileLength--;
                diskIndex++;
            }
        }

    }


    return checkSum;
}

long long Part2()
{
    long long checkSum = 0;
    long long totalFilesLength = 0;
    long long countedFiles = 0;
    int blockLength = 0;
    int endBlockLength = 0;
    long long sortingFileStart = diskMap.length() / 2 + 1;
    long long diskIndex = 0;
    bool blockFitted = false;
    bool testedTwice = false;

    // Count up how many full blocks there are
    for (int i = 0; i < diskMap.length(); i += 2) {
        totalFilesLength += diskMap[i] - 48;
    }

    for (int block = 0; block < diskMap.length(); block++) {
        blockLength = diskMap[block] - 48;
        if (blockLength > 0) {
            // Check whether the block contains a file //
            if (block % 2 == 0) {
                // If block contains a file //
                for (int i = 0; i < blockLength; i++) {
                    //End the script if we have reached the end of the sorted disk //
                    /*if (diskIndex >= totalFilesLength) {
                        break;
                    }*/

                    checkSum += diskIndex * ((block + 1) / 2);
                    diskIndex++;
                }
            }
            else {
                // If block does not contain a file //

                // Find the first non-zero index that fits in the file location //
                while ((blockLength > 0) && testedTwice == false) {
                    testedTwice = true;
                    blockFitted = false;
                    for (int i = (diskMap.length() - 1); i > block; i -= 2) {
                        endBlockLength = diskMap[i] - 48;
                        if (endBlockLength <= blockLength && endBlockLength > 0) {
                            // Count up the indexes of the file (skip over empty section of disk left if the file doesn't fit exactly)
                            for (int j = 0; j < endBlockLength; j++) {
                                checkSum += diskIndex * (i / 2);
                                blockLength--;
                                diskIndex++;
                            }
                            blockFitted = true;
                            testedTwice = false;

                            diskMap[i] = 48 - endBlockLength;
                            break;
                        }
                    }
                }
                testedTwice = false;

                diskIndex += blockLength;
                
            }
        }
        else {
            // Add in the length of the block (by subtracting since negative)
            diskIndex -= blockLength;
        }
    }


    return checkSum;
}

int main()
{
    std::cout << "Processing...\n";
    std::cout << "The filesystem checksum for the reorganised disc is: " << Part1() << "\n";
    std::cout << "The filesystem checksum for the defragmented disc is: " << Part2() << "\n";
}







/* Part 1 notes
Ok, the most obvious solution to this problem would be to reconstruct the whole disc using the map, then reallocate all the
numbered cells into the spaces using the fact that they're empty/not empty. Then we can find the sum by adding up the sum as
it goes.

However that's going to take up a LOT of memory. Could be very bad, probably a little bad

So instead we're going to have to find a way to reconstruct the file using only the discmap

We can take the length of the string divided by two to get the number of numbers we need. (As in the number assigned to the last file's cells)
From here we can iterate backwards to get the number we need for every cell. We know we're done when we hit half of the total file spaces

*/

/* Part 2 notes
First thoughts. What if we tried going through on the empty spaces and looking for the first file that will fit within the length of that empty space?
Assume we start from the left and move rightwards. If a space isn't empty, we just add up the totals the normal way but if a space is empty, we look for
the first file we can that can fit. Once it's found, we slot it in and keep going.

Problem here is figuring out which files we've already used. Zeros should be ignored so we could replace the number with a zero to filter it out, but it
may be better to find a solution that doesn't alter the string.

For now, I'll try that. If a better solution comes to me, I'll update here

Okay so we hit a snag here. If we set to zero we have no idea what to add to the disk index as we pass that zero mark. New idea? What if we assign instead a character
that will produce a negative number. We can then use the magnitude of the negative number to determine how many places we need to move forwards on the disk index

*/
