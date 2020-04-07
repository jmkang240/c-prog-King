/*
 ============================================================================
 Name        : 15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

/* Part A. The largest value for a short factorial is 7 at 5040. */
	int x, i;
	short fact=1;
	printf("Enter a positive number: ");
	scanf("%d", &x);
	for(i=2; i<=x; i++){
		fact *= i;
	}
	printf("Factorial of %d is %d", x, fact);

/* Part B. The largest value for a int factorial is 12 at 479001600 */
//	int x, i, fact = 1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %d", x, fact);

/* Part C. The largest value for a long factorial is 20 at 2432902008176640000 */
//	int x, i;
//	long fact=1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %ld", x, fact);

/* Part D. The largest value for a long long factorial is 20 at 2432902008176640000 */
//	int x, i;
//	long long fact=1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %lld", x, fact);

/* Part E. The largest value for a float factorial is 34 at 295232822996533287161359432338880069632.000000 */
//	int x, i;
//	float fact=1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %f", x, fact);

/* Part F. The largest value for a double factorial is 170 at 7257415615307994045399635715589591467896184117242257803405544211755693246215271577444614997868077640013184176271985826801597743247247979077995336619429980685793285768053360886112149825437081356365699043287884614002788490694530469661753007801896962563721104619242357348735986883814984039817295623520648167424.000000
														   or 7.25741561530799E+306 */
//	int x, i;
//	double fact=1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %lf", x, fact);

/* Part G. The largest value for a long double factorial is 1754 at 19792618901050100552850370901568324491091476598455474533349138121447944050325455850220281751827991384731053649988146087506707500713316118450297463542626967177677317383212058137982824491114171272675325925385091291348344674979200530993915365120537997037788115972151350365016904816499136885828794831985778358219533899724906196428924462793239208373259569980666491941948491688531157807561724110851652739304334136004591199891978806967456331982495640534174613526738910323044744523281810359662924140161968085802174927702027366144023962261879724957022413921518821003624008695403198223408428573788493328660304425682841558674829441437291732515789186402991397163203897141160336978345599243498249364039658855817799979632528308994450886197814548433145091251578381565049749658112815806689758223715290365638492491992735096565546943213902798919272649028917874538001328105166441899683241060502445440113694282322244584050992214829266737568265565147130952913069765264311603420219853097231644370301875199624359666003771097786048493988649018561061422651010642224110759242062896270695123637591659253079701793479163641485869085830076204418000154341720940406976446204231289088236363114711048038756369547511693735325367128720014655716948561876751380950539770459473439810843031005135187629468546260804010901771043272527750486288550056587926992141108600609048080682349545223363550668549969826968411197526095024141458631963384517117816944418167272223756048632904414788440168884977726254971513384701083027721696601240868658349934681024453916139055533173828280975072161250230678766722735688960104944143588847089750300743671668207755677938523117936354562839743392336482208193724881335215308906111441934126608844980315086606414923649730205907156086329528401780691096939429689638080901430342438319489153495975524475787861753289610093111203190783015121956660741004785046570825463368919984420132011367331559584322177073939108383195334757979423034892784699077071750683038289442496189252810408511426468756566092232682212947623213890008449024670383417296700912399278859516597609984833070311095186477566780847748598098887623194207377034979483832865197984175319367200164230775881872125558071802200605586624897037870168402192750354683901371167954338441233101412391016861928006819024316869506213223441036849635065082993882684701780877414922453568609752674893665003188540157177037296150724620662351351943541055194257043158843540609675072447908266747442694779693271275625905162991558428024797357498290175934608776530314835464903478151154657598060727934397651422356400431765248369227574410097385831331745592853824751044210600532143140117522973364473780223566022418580907429985705449455910418485579485336879492441449760389365912653485252372037909830963249405108104253548777034454639803958585401256339516258749871856322010914314002057229264400105093246582584711387995066768479986142681783210959414386412029436944927347470697158059534383975977724748342492255032676191199050046388732476133109881363960919967702683896251409790161107378717999862751282058396285448769913927666124075980748550001835646336284448917221752366570009952062496220414971255921052753939596506110459162890502135573562557037370393488209109096950347818817341853656944820163940157902225873582002975324265417546162879457858736334381975081968887994188967026046597517253251462332189081807866165230591278027604755114148117620428055622265730775414471278888693764470123466586820863416749147364220592619471177011768619205983179801033987946504454913716066813837900672082251612136246193809092451347844335685371087205281106210809530745443376307900563116629574221118364138624672673493418611309530426670898241804633051747554969124193251370002935050517852199813133883136379309139754736867710521951665801628709974843743450383141092987245845233899317368135082621408025066342565909218092923135384768331770348658633807837274673729205713521881489901252466190325984708138502065278557285405816157387741358011104554497688686538062714688742659289925996604996431153831148147247545495881571414226695373260931530523491054948179625413028447305648396371243474365222837471772455405612172501831105819480281660524752076445635674064111164484503817344876336982583660470890991230668951889238391507888465710128403771785743526783830866988821138329241011650308210409934309318815677390464031529346122450232272003314073439002939704387887871055310731736070014958552233350025195859006759041932363749060800654468613018772921664585622106859147958728229165310056135572947274803199844813366705599620684932569957969624604178915887383644340598792882772272253056143966745756991550306631905501669509891422091558878374974656837600873729798008290992519443998111738599637728825353076346451831884027369464447642606987110969799714031282561628041282826041833066716213605750718096992275386578993508438600918098693356818893478304731850487517981798906946781125517813589282895824917540881222651898777597160541422307305397653419142087117334240920115573918239455805735698432.000000
												..anyway the max is 1.7976931348623157 x 10^308. */
//	int x, i;
//	long double fact=1;
//	printf("Enter a positive number: ");
//	scanf("%d", &x);
//	for(i=2; i<=x; i++){
//		fact *= i;
//	}
//	printf("Factorial of %d is %Lf", x, fact);

	return EXIT_SUCCESS;
}
