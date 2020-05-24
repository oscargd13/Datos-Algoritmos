#include <iostream>
#include "node.h"
#include "data.h"
#include "graph.h"

using namespace std;

int main()

//Parte sacada de GitHub.

//Estan todas las lineas de Metro.

//No metro-ligero.

{

    // LINEA 1-33(n)

    Node* n1 = new Node(new Data("PinarDeChamartin"));

    Node* n2 = new Node(new Data("Bambu"));

    Node* n3 = new Node(new Data("Chamartin"));

    Node* n4 = new Node(new Data("PlazaDeCastilla"));

    Node* n5 = new Node(new Data("Valdeacederas"));

    Node* n6 = new Node(new Data("Tetuan"));

    Node* n7 = new Node(new Data("Estrcho"));

    Node* n8 = new Node(new Data("Alvarado"));

    Node* n9 = new Node(new Data("CuatroCaminos"));

    Node* n10 = new Node(new Data("RiosRosas"));

    Node* n11 = new Node(new Data("Iglesia"));

    Node* n12 = new Node(new Data("Bilbao"));

    Node* n13 = new Node(new Data("Tribunal"));

    Node* n14= new Node(new Data("GranVia"));

    Node* n15 = new Node(new Data("Sol"));

    Node* n16 = new Node(new Data("TirsoDeMolina"));

    Node* n17 = new Node(new Data("AntonMartin"));

    Node* n18 = new Node(new Data("EstacionDelArte"));

    Node* n19 = new Node(new Data("AtochaRenfe"));

    Node* n20 = new Node(new Data("MenendezPelayo"));

    Node* n21 = new Node(new Data("Pacifico"));

    Node* n22 = new Node(new Data("PuenteVallecas"));

    Node* n23 = new Node(new Data("NuevaNumancia"));

    Node* n24 = new Node(new Data("Portazgo"));

    Node* n25 = new Node(new Data("BuenosAires"));

    Node* n26 = new Node(new Data("AltoDelArenal"));

    Node* n27 = new Node(new Data("MiguelHernandez"));

    Node* n28 = new Node(new Data("SierraDeGuadalupe"));

    Node* n29 = new Node(new Data("VillaDeVallecas"));

    Node* n30 = new Node(new Data("Congosto"));

    Node* n31 = new Node(new Data("LaGavia"));

    Node* n32 = new Node(new Data("LasSuertes"));

    Node* n33 = new Node(new Data("Valdecarros"));

    //LINEA 2-20(s)



    Node* s1 = new Node(new Data("LasRosas"));

    Node* s2 = new Node(new Data("AvenidaDeGuadalajara"));

    Node* s3 = new Node(new Data("Alsacia"));

    Node* s4 = new Node(new Data("LaAlmudena"));

    Node* s5 = new Node(new Data("LaElipa"));

    Node* s6 = new Node(new Data("Ventas"));

    Node* s7 = new Node(new Data("ManuelBecerra"));

    Node* s8 = new Node(new Data("Goya"));

    Node* s9 = new Node(new Data("PrincipeDeVergara"));

    Node* s10 = new Node(new Data("Retiro"));

    Node* s11 = new Node(new Data("BancoDeEspana"));

    Node* s12 = new Node(new Data("Sevilla"));

    Node* s14= new Node(new Data("Opera"));

    Node* s15 = new Node(new Data("SantoDomingo"));

    Node* s16 = new Node(new Data("Noviciado"));

    Node* s17 = new Node(new Data("SanBernardo"));

    Node* s18 = new Node(new Data("Quevedo"));

    Node* s19 = new Node(new Data("Canal"));


    //LINEA 3-18(a)


    Node* a1 = new Node(new Data("VillaverdeAlto"));

    Node* a2 = new Node(new Data("SanCristobal"));

    Node* a3 = new Node(new Data("VillaverdeBajoCruce"));

    Node* a4 = new Node(new Data("CiudadDeLosAngeles"));

    Node* a5 = new Node(new Data("SanFerminOrcaSur"));

    Node* a6 = new Node(new Data("Hospital12DeOctubre"));

    Node* a7 = new Node(new Data("Almendrales"));

    Node* a8 = new Node(new Data("Legazpi"));

    Node* a9 = new Node(new Data("Delicias"));

    Node* a10 = new Node(new Data("PalosDeLaFrontera"));

    Node* a11 = new Node(new Data("Embajadores"));

    Node* a12 = new Node(new Data("Lavapies"));

    Node* a14= new Node(new Data("Callao"));

    Node* a15 = new Node(new Data("PlazaDeEspana"));

    Node* a16 = new Node(new Data("VenturaRodriguez"));

    Node* a17 = new Node(new Data("Arguelles"));

    Node* a18 = new Node(new Data("Moncloa"));



    //LINEA 4-23(r)


    Node* r4 = new Node(new Data("AlonsoMartinez"));

    Node* r5 = new Node(new Data("Colon"));

    Node* r6 = new Node(new Data("Serrano"));

    Node* r7 = new Node(new Data("Velazquez"));

    Node* r9 = new Node(new Data("Lista"));

    Node* r10 = new Node(new Data("DiegoDeLeon"));

    Node* r11 = new Node(new Data("AvenidaDeAmerica"));

    Node* r12 = new Node(new Data("Prosperidad"));

    Node* r13 = new Node(new Data("Alfonso13"));

    Node* r14= new Node(new Data("AvenidaDeLaPaz"));

    Node* r15 = new Node(new Data("ArturoSoria"));

    Node* r16 = new Node(new Data("Esperanza"));

    Node* r17 = new Node(new Data("Canillas"));

    Node* r18 = new Node(new Data("MarDeCristal"));

    Node* r19 = new Node(new Data("SanLorenzo"));

    Node* r20 = new Node(new Data("ParqueDeSantaMaria"));

    Node* r21 = new Node(new Data("Hortaleza"));

    Node* r22 = new Node(new Data("Manoteras"));

    //LINEA 5-32(w)



    Node* w1 = new Node(new Data("AlmedaDeOsuna"));

    Node* w2 = new Node(new Data("ElCapricho"));

    Node* w3 = new Node(new Data("Canillejas"));

    Node* w4 = new Node(new Data("TorreArias"));

    Node* w5 = new Node(new Data("Suances"));

    Node* w6 = new Node(new Data("CiudadLineal"));

    Node* w7 = new Node(new Data("PuebloNuevo"));

    Node* w8 = new Node(new Data("Quintana"));

    Node* w9 = new Node(new Data("ElCarmen"));

    Node* w12 = new Node(new Data("NunezDeBalboa"));

    Node* w13 = new Node(new Data("RubenDario"));

    Node* w15 = new Node(new Data("Chueca"));

    Node* w19 = new Node(new Data("LaLatina"));

    Node* w20 = new Node(new Data("PuertaDeToledo"));

    Node* w21 = new Node(new Data("Acacias"));

    Node* w22 = new Node(new Data("Piramides"));

    Node* w23 = new Node(new Data("MarquesDeVadillo"));

    Node* w24 = new Node(new Data("Urgel"));

    Node* w25 = new Node(new Data("Oporto"));

    Node* w26 = new Node(new Data("VistaAlegre"));

    Node* w27 = new Node(new Data("Carabanchel"));

    Node* w28 = new Node(new Data("EugeniaDeMontijo"));

    Node* w29 = new Node(new Data("Aluche"));

    Node* w30 = new Node(new Data("Empalme"));

    Node* w31 = new Node(new Data("Campamento"));

    Node* w32 = new Node(new Data("CasaDeCampo"));



    //LINEA 6-28(f)



    Node* f1 = new Node(new Data("PuertaDelAngel"));

    Node* f2 = new Node(new Data("AltoDeExtremadura"));

    Node* f3 = new Node(new Data("Lucero"));

    Node* f4 = new Node(new Data("Laguna"));

    Node* f5 = new Node(new Data("Carpetana"));

    Node* f7 = new Node(new Data("Opanel"));

    Node* f8 = new Node(new Data("PlazaEliptica"));

    Node* f9 = new Node(new Data("Usera"));

    Node* f11= new Node(new Data("ArganzuelaPlanetario"));

    Node* f12= new Node(new Data("MendezAlvaro"));

    Node* f14 = new Node(new Data("CondeDeCasal"));

    Node* f15 = new Node(new Data("SainzDeBaranda"));

    Node* f16 = new Node(new Data("ODonnell"));

    Node* f20 = new Node(new Data("RepublicaArgentina"));

    Node* f21 = new Node(new Data("NuevosMinisterios"));

    Node* f23 = new Node(new Data("GuzmanElBueno"));

    Node* f24 = new Node(new Data("VicenteAleixandre"));

    Node* f25 = new Node(new Data("CiudadUniversitaria"));

    Node* f26 = new Node(new Data("Moncloa"));

    Node* f28 = new Node(new Data("PrincipePio"));

    //LINEA 7-30(q)



    Node* q1 = new Node(new Data("HospitalDeHenares"));

    Node* q2 = new Node(new Data("Henares"));

    Node* q3 = new Node(new Data("Jarama"));

    Node* q4 = new Node(new Data("SanFernando"));

    Node* q5 = new Node(new Data("LaRambla"));

    Node* q6 = new Node(new Data("CosladaCentral"));

    Node* q7 = new Node(new Data("BarrioDelPuerto"));

    Node* q8 = new Node(new Data("EstadioMetropolitano"));

    Node* q9 = new Node(new Data("LasMusas"));

    Node* q10 = new Node(new Data("SanBlas"));

    Node* q11 = new Node(new Data("Simancas"));

    Node* q12 = new Node(new Data("GarciaNoblejas"));

    Node* q13 = new Node(new Data("Ascao"));

    Node* q15 = new Node(new Data("BarrioDeLaConfeccion"));

    Node* q16 = new Node(new Data("ParqueDeLasAvenidas"));

    Node* q17 = new Node(new Data("Cartagena"));

    Node* q19 = new Node(new Data("GregorioMaranon"));

    Node* q20 = new Node(new Data("AlonsoCano"));

    Node* q22 = new Node(new Data("IslasFilipinas"));

    Node* q24 = new Node(new Data("FrancosRodriguez"));

    Node* q25 = new Node(new Data("Valdezarza"));

    Node* q26 = new Node(new Data("AntonioMachado"));

    Node* q27 = new Node(new Data("Penagrande"));

    Node* q28 = new Node(new Data("AvenidaDeLaIlustracion"));

    Node* q29 = new Node(new Data("Lacoma"));

    Node* q30 = new Node(new Data("Pitis"));

    //LINEA 8-8(h)



    Node* h2 = new Node(new Data("Colombia"));

    Node* h3 = new Node(new Data("PinarDelRey"));

    Node* h5 = new Node(new Data("FeriaDeMadrid"));

    Node* h6 = new Node(new Data("AeropuertoT1T2T3"));

    Node* h7 = new Node(new Data("Barajas"));

    Node* h8 = new Node(new Data("AeropuertoT4"));



            //LINEA 9-29(z)



    Node* z1 = new Node(new Data("PacoDeLucia"));

    Node* z2 = new Node(new Data("Mirasierra"));

    Node* z3 = new Node(new Data("HerreraOria"));

    Node* z4 = new Node(new Data("BarrioDelPilar"));

    Node* z5 = new Node(new Data("Ventilla"));

    Node* z6 = new Node(new Data("PlazaDeCastilla"));

    Node* z7 = new Node(new Data("DuqueDePastrana"));

    Node* z8 = new Node(new Data("Pio12"));

    Node* z10 = new Node(new Data("ConchaEspina"));

    Node* z11 = new Node(new Data("CruzDelRayo"));

    Node* z15 = new Node(new Data("Ibiza"));

    Node* z17 = new Node(new Data("Estrella"));

    Node* z18 = new Node(new Data("Vinateros"));

    Node* z19 = new Node(new Data("Artilleros"));

    Node* z20 = new Node(new Data("Pavones"));

    Node* z21 = new Node(new Data("Valdebernardo"));

    Node* z22 = new Node(new Data("Vicalvaro"));

    Node* z23 = new Node(new Data("SanCipriano"));

    Node* z24 = new Node(new Data("PuertaDeArganda"));

    Node* z25 = new Node(new Data("RivasUrbanizaciones"));

    Node* z26 = new Node(new Data("RivasFutura"));

    Node* z27 = new Node(new Data("RivasVaciamadrid"));

    Node* z28 = new Node(new Data("LaPoveda"));

    Node* z29 = new Node(new Data("ArgandaDelRey"));


    //LINEA 10-31(x)


    Node* x1 = new Node(new Data("HospitalInfantaSofia"));

    Node* x2 = new Node(new Data("ReyesCatolicos"));

    Node* x3 = new Node(new Data("Baunatal"));

    Node* x4 = new Node(new Data("ManuelDeFalla"));

    Node* x5 = new Node(new Data("MarquesDeLaValdavia"));

    Node* x6 = new Node(new Data("LaMoraleja"));

    Node* x7 = new Node(new Data("LaGranja"));

    Node* x8 = new Node(new Data("RondaDeLaComunicacion"));

    Node* x9 = new Node(new Data("LasTablas"));

    Node* x10 = new Node(new Data("Montecarmelo"));

    Node* x11 = new Node(new Data("TresOlivos"));

    Node* x12 = new Node(new Data("Fuencarral"));

    Node* x13 = new Node(new Data("Begona"));

    Node* x16 = new Node(new Data("Cuzco"));

    Node* x17 = new Node(new Data("SantiagoBernabeu"));

    Node* x24 = new Node(new Data("Lago"));

    Node* x25 = new Node(new Data("Batan"));

    Node* x27 = new Node(new Data("ColoniaJardin"));

    Node* x28 = new Node(new Data("AviacionEspanola"));

    Node* x29 = new Node(new Data("CuatroVientos"));

    Node* x30 = new Node(new Data("JoaquinVilumbrales"));

    Node* x31 = new Node(new Data("PuertaDelSur"));

    //LINEA 11-7(v)



    Node* v1 = new Node(new Data("LaFortuna"));

    Node* v2 = new Node(new Data("LaPeseta"));

    Node* v3 = new Node(new Data("CarabanchelAlto"));

    Node* v4 = new Node(new Data("SanFrancisco"));

    Node* v5 = new Node(new Data("PanBendito"));

    Node* v6 = new Node(new Data("Abrantes"));

    //LINEA 12-28(m)



    Node* m1 = new Node(new Data("ParqueOeste"));

    Node* m2 = new Node(new Data("UniversidadReyJuanCarlos"));

    Node* m3 = new Node(new Data("MostolesCentral"));

    Node* m4 = new Node(new Data("Pardillo"));

    Node* m5 = new Node(new Data("HospitalDeMostoles"));

    Node* m6 = new Node(new Data("ManuelaMalasana"));

    Node* m7 = new Node(new Data("Loranca"));

    Node* m8 = new Node(new Data("HospitalDeFuenlabrada"));

    Node* m9 = new Node(new Data("ParqueEuropa"));

    Node* m10 = new Node(new Data("FuenlabradaCentral"));

    Node* m11= new Node(new Data("ParqueDeLosEstados"));

    Node* m12 = new Node(new Data("ArroyoCulebro"));

    Node* m13 = new Node(new Data("Conservatorio"));

    Node* m14 = new Node(new Data("AlonsoDeMendoza"));

    Node* m15 = new Node(new Data("GetafeCentral"));

    Node* m16 = new Node(new Data("JuanDeLaCierva"));

    Node* m17 = new Node(new Data("ElCasar"));

    Node* m18 = new Node(new Data("LosEspartales"));

    Node* m19 = new Node(new Data("ElBercial"));

    Node* m20 = new Node(new Data("ElCarrascal"));

    Node* m21 = new Node(new Data("JulianBesterio"));

    Node* m22 = new Node(new Data("CasaDelReloj"));

    Node* m23 = new Node(new Data("HospitalSeveroOchoa"));

    Node* m24 = new Node(new Data("LeganesCentral"));

    Node* m25 = new Node(new Data("SanNicasio"));

    Node* m27 = new Node(new Data("ParqueLisboa"));

    Node* m28 = new Node(new Data("AlcorconCentral"));


    //LINEA R-2(p)

///////////////////////////////////////////////////////////////////////////////////////////////////

        Graph metro;
        string comienzo,llegada;

        cout << "Desde que parada desea salir?: ";
        cin >> comienzo;


        //LINEA1


        if(comienzo == n1->getData()->getValue()){

            metro.setEntryPoint(n1);

        }else if (comienzo == n2->getData()->getValue()) {

            metro.setEntryPoint(n2);

        }else if (comienzo == n3->getData()->getValue()) {

            metro.setEntryPoint(n3);

        }else if (comienzo == n4->getData()->getValue()) {

            metro.setEntryPoint(n4);

        }else if (comienzo == n5->getData()->getValue()) {

            metro.setEntryPoint(n5);

        }else if (comienzo == n6->getData()->getValue()) {

            metro.setEntryPoint(n6);

        }else if (comienzo == n7->getData()->getValue()) {

            metro.setEntryPoint(n7);

        }else if (comienzo == n8->getData()->getValue()) {

            metro.setEntryPoint(n8);

        }else if (comienzo == n9->getData()->getValue()) {

            metro.setEntryPoint(n9);

        }else if (comienzo == n10->getData()->getValue()) {

            metro.setEntryPoint(n10);

        }else if (comienzo == n11->getData()->getValue()) {

            metro.setEntryPoint(n11);

        }else if (comienzo == n12->getData()->getValue()) {

            metro.setEntryPoint(n12);

        }else if (comienzo == n13->getData()->getValue()) {

            metro.setEntryPoint(n13);

        }else if (comienzo == n14->getData()->getValue()) {

            metro.setEntryPoint(n14);

        }else if (comienzo == n15->getData()->getValue()) {

            metro.setEntryPoint(n15);

        }else if (comienzo == n16->getData()->getValue()) {

            metro.setEntryPoint(n16);

        }else if (comienzo == n17->getData()->getValue()) {

            metro.setEntryPoint(n17);

        }else if (comienzo == n18->getData()->getValue()) {

            metro.setEntryPoint(n18);

        }else if (comienzo == n19->getData()->getValue()) {

            metro.setEntryPoint(n19);

        }else if (comienzo == n20->getData()->getValue()) {

            metro.setEntryPoint(n20);

        }else if (comienzo == n21->getData()->getValue()) {

            metro.setEntryPoint(n21);

        }else if (comienzo == n22->getData()->getValue()) {

            metro.setEntryPoint(n22);

        }else if (comienzo == n23->getData()->getValue()) {

            metro.setEntryPoint(n23);

        }else if (comienzo == n24->getData()->getValue()) {

            metro.setEntryPoint(n24);

        }else if (comienzo == n25->getData()->getValue()) {

            metro.setEntryPoint(n25);

        }else if (comienzo == n26->getData()->getValue()) {

            metro.setEntryPoint(n26);

        }else if (comienzo == n27->getData()->getValue()) {

            metro.setEntryPoint(n27);

        }else if (comienzo == n28->getData()->getValue()) {

            metro.setEntryPoint(n28);

        }else if (comienzo == n29->getData()->getValue()) {

            metro.setEntryPoint(n29);

        }else if (comienzo == n30->getData()->getValue()) {

            metro.setEntryPoint(n30);

        }else if (comienzo == n31->getData()->getValue()) {

            metro.setEntryPoint(n31);

        }else if (comienzo == n32->getData()->getValue()) {

            metro.setEntryPoint(n32);

        }else if (comienzo == n33->getData()->getValue()) {

            metro.setEntryPoint(n33);

        }

        //LINEA2



        if(comienzo == s1->getData()->getValue()){

            metro.setEntryPoint(s1);

        }else if (comienzo == s2->getData()->getValue()) {

            metro.setEntryPoint(s2);

        }else if (comienzo == s3->getData()->getValue()) {

            metro.setEntryPoint(s3);

        }else if (comienzo == s4->getData()->getValue()) {

            metro.setEntryPoint(s4);

        }else if (comienzo == s5->getData()->getValue()) {

            metro.setEntryPoint(s5);

        }else if (comienzo == s6->getData()->getValue()) {

            metro.setEntryPoint(s6);

        }else if (comienzo == s7->getData()->getValue()) {

            metro.setEntryPoint(s7);

        }else if (comienzo == s8->getData()->getValue()) {

            metro.setEntryPoint(s8);

        }else if (comienzo == s9->getData()->getValue()) {

            metro.setEntryPoint(s9);

        }else if (comienzo == s10->getData()->getValue()) {

            metro.setEntryPoint(s10);

        }else if (comienzo == s11->getData()->getValue()) {

            metro.setEntryPoint(s11);

        }else if (comienzo == s12->getData()->getValue()) {

            metro.setEntryPoint(s12);

        }else if (comienzo == n15->getData()->getValue()) {

            metro.setEntryPoint(n15);

        }else if (comienzo == s14->getData()->getValue()) {

            metro.setEntryPoint(s14);

        }else if (comienzo == s15->getData()->getValue()) {

            metro.setEntryPoint(s15);

        }else if (comienzo == s16->getData()->getValue()) {

            metro.setEntryPoint(s16);

        }else if (comienzo == s17->getData()->getValue()) {

            metro.setEntryPoint(s17);

        }else if (comienzo == s18->getData()->getValue()) {

            metro.setEntryPoint(s18);

        }else if (comienzo == s19->getData()->getValue()) {

            metro.setEntryPoint(s19);

        }else if (comienzo == n9->getData()->getValue()) {

            metro.setEntryPoint(n9);

        }

        //LINEA3


        if(comienzo == a1->getData()->getValue()){

            metro.setEntryPoint(a1);

        }else if (comienzo == a2->getData()->getValue()) {

            metro.setEntryPoint(a2);

        }else if (comienzo == a3->getData()->getValue()) {

            metro.setEntryPoint(a3);

        }else if (comienzo == a4->getData()->getValue()) {

            metro.setEntryPoint(a4);

        }else if (comienzo == a5->getData()->getValue()) {

            metro.setEntryPoint(a5);

        }else if (comienzo == a6->getData()->getValue()) {

            metro.setEntryPoint(a6);

        }else if (comienzo == a7->getData()->getValue()) {

            metro.setEntryPoint(a7);

        }else if (comienzo == a8->getData()->getValue()) {

            metro.setEntryPoint(a8);

        }else if (comienzo == a9->getData()->getValue()) {

            metro.setEntryPoint(a9);

        }else if (comienzo == a10->getData()->getValue()) {

            metro.setEntryPoint(a10);

        }else if (comienzo == a11->getData()->getValue()) {

            metro.setEntryPoint(a11);

        }else if (comienzo == a12->getData()->getValue()) {

            metro.setEntryPoint(a12);

        }else if (comienzo == n15->getData()->getValue()) {

            metro.setEntryPoint(n15);

        }else if (comienzo == a14->getData()->getValue()) {

            metro.setEntryPoint(a14);

        }else if (comienzo == a15->getData()->getValue()) {

            metro.setEntryPoint(a15);

        }else if (comienzo == a16->getData()->getValue()) {

            metro.setEntryPoint(a16);

        }else if (comienzo == a17->getData()->getValue()) {

            metro.setEntryPoint(a17);

        }else if (comienzo == a18->getData()->getValue()) {

            metro.setEntryPoint(a18);

        }

        //LINEA4


        if(comienzo == a17->getData()->getValue()){

            metro.setEntryPoint(a17);

        }else if (comienzo == s17->getData()->getValue()) {

            metro.setEntryPoint(s17);

        }else if (comienzo == n12->getData()->getValue()) {

            metro.setEntryPoint(n12);

        }else if (comienzo == r4->getData()->getValue()) {

            metro.setEntryPoint(r4);

        }else if (comienzo == r5->getData()->getValue()) {

            metro.setEntryPoint(r5);

        }else if (comienzo == r6->getData()->getValue()) {

            metro.setEntryPoint(r6);

        }else if (comienzo == r7->getData()->getValue()) {

            metro.setEntryPoint(r7);

        }else if (comienzo == s8->getData()->getValue()) {

            metro.setEntryPoint(s8);

        }else if (comienzo == r9->getData()->getValue()) {

            metro.setEntryPoint(r9);

        }else if (comienzo == r10->getData()->getValue()) {

            metro.setEntryPoint(r10);

        }else if (comienzo == r11->getData()->getValue()) {

            metro.setEntryPoint(r11);

        }else if (comienzo == r12->getData()->getValue()) {

            metro.setEntryPoint(r12);

        }else if (comienzo == r13->getData()->getValue()) {

            metro.setEntryPoint(r13);

        }else if (comienzo == r14->getData()->getValue()) {

            metro.setEntryPoint(r14);

        }else if (comienzo == r15->getData()->getValue()) {

            metro.setEntryPoint(r15);

        }else if (comienzo == r16->getData()->getValue()) {

            metro.setEntryPoint(r16);

        }else if (comienzo == r17->getData()->getValue()) {

            metro.setEntryPoint(r17);

        }else if (comienzo == r18->getData()->getValue()) {

            metro.setEntryPoint(r18);

        }else if (comienzo == r19->getData()->getValue()) {

            metro.setEntryPoint(r19);

        }else if (comienzo == r20->getData()->getValue()) {

            metro.setEntryPoint(r20);

        }else if (comienzo == r21->getData()->getValue()) {

            metro.setEntryPoint(r21);

        }else if (comienzo == r22->getData()->getValue()) {

            metro.setEntryPoint(r22);

        }else if (comienzo == n1->getData()->getValue()) {

            metro.setEntryPoint(n1);

        }

        //LINEA5

        if(comienzo == w1->getData()->getValue()){

            metro.setEntryPoint(w1);

        }else if (comienzo == w2->getData()->getValue()) {

            metro.setEntryPoint(w2);

        }else if (comienzo == w3->getData()->getValue()) {

            metro.setEntryPoint(w3);

        }else if (comienzo == w4->getData()->getValue()) {

            metro.setEntryPoint(w4);

        }else if (comienzo == w5->getData()->getValue()) {

            metro.setEntryPoint(w5);

        }else if (comienzo == w6->getData()->getValue()) {

            metro.setEntryPoint(w6);

        }else if (comienzo == w7->getData()->getValue()) {

            metro.setEntryPoint(w7);

        }else if (comienzo == w8->getData()->getValue()) {

            metro.setEntryPoint(w8);

        }else if (comienzo == w9->getData()->getValue()) {

            metro.setEntryPoint(w9);

        }else if (comienzo == s6->getData()->getValue()) {

            metro.setEntryPoint(s6);

        }else if (comienzo == r10->getData()->getValue()) {

            metro.setEntryPoint(r10);

        }else if (comienzo == w12->getData()->getValue()) {

            metro.setEntryPoint(w12);

        }else if (comienzo == w13->getData()->getValue()) {

            metro.setEntryPoint(w13);

        }else if (comienzo == r4->getData()->getValue()) {

            metro.setEntryPoint(r4);

        }else if (comienzo == w15->getData()->getValue()) {

            metro.setEntryPoint(w15);

        }else if (comienzo == n14->getData()->getValue()) {

            metro.setEntryPoint(n14);

        }else if (comienzo == a14->getData()->getValue()) {

            metro.setEntryPoint(a14);

        }else if (comienzo == s14->getData()->getValue()) {

            metro.setEntryPoint(s14);

        }else if (comienzo == w19->getData()->getValue()) {

            metro.setEntryPoint(w19);

        }else if (comienzo == w20->getData()->getValue()) {

            metro.setEntryPoint(w20);

        }else if (comienzo == w21->getData()->getValue()) {

            metro.setEntryPoint(w21);

        }else if (comienzo == w22->getData()->getValue()) {

            metro.setEntryPoint(w22);

        }else if (comienzo == w23->getData()->getValue()) {

            metro.setEntryPoint(w23);

        }else if (comienzo == w24->getData()->getValue()) {

            metro.setEntryPoint(w24);

        }else if (comienzo == w25->getData()->getValue()) {

            metro.setEntryPoint(w25);

        }else if (comienzo == w26->getData()->getValue()) {

            metro.setEntryPoint(w26);

        }else if (comienzo == w27->getData()->getValue()) {

            metro.setEntryPoint(w27);

        }else if (comienzo == w28->getData()->getValue()) {

            metro.setEntryPoint(w28);

        }else if (comienzo == w29->getData()->getValue()) {

            metro.setEntryPoint(w29);

        }else if (comienzo == w30->getData()->getValue()) {

            metro.setEntryPoint(w30);

        }else if (comienzo == w31->getData()->getValue()) {

            metro.setEntryPoint(w31);

        }else if (comienzo == w32->getData()->getValue()) {

            metro.setEntryPoint(w32);

        }

        //LINEA6



        if(comienzo == f1->getData()->getValue()){

            metro.setEntryPoint(f1);

        }else if (comienzo == f2->getData()->getValue()) {

            metro.setEntryPoint(f2);

        }else if (comienzo == f3->getData()->getValue()) {

            metro.setEntryPoint(f3);

        }else if (comienzo == f4->getData()->getValue()) {

            metro.setEntryPoint(f4);

        }else if (comienzo == f5->getData()->getValue()) {

            metro.setEntryPoint(f5);

        }else if (comienzo == w25->getData()->getValue()) {

            metro.setEntryPoint(w25);

        }else if (comienzo == f7->getData()->getValue()) {

            metro.setEntryPoint(f7);

        }else if (comienzo == f8->getData()->getValue()) {

            metro.setEntryPoint(f8);

        }else if (comienzo == f9->getData()->getValue()) {

            metro.setEntryPoint(f9);

        }else if (comienzo == a8->getData()->getValue()) {

            metro.setEntryPoint(a8);

        }else if (comienzo == f11->getData()->getValue()) {

            metro.setEntryPoint(f11);

        }else if (comienzo == f12->getData()->getValue()) {

            metro.setEntryPoint(f12);

        }else if (comienzo == n21->getData()->getValue()) {

            metro.setEntryPoint(n21);

        }else if (comienzo == f14->getData()->getValue()) {

            metro.setEntryPoint(f14);

        }else if (comienzo == f15->getData()->getValue()) {

            metro.setEntryPoint(f15);

        }else if (comienzo == f16->getData()->getValue()) {

            metro.setEntryPoint(f16);

        }else if (comienzo == s7->getData()->getValue()) {

            metro.setEntryPoint(s7);

        }else if (comienzo == r10->getData()->getValue()) {

            metro.setEntryPoint(r10);

        }else if (comienzo == r11->getData()->getValue()) {

            metro.setEntryPoint(r11);

        }else if (comienzo == f20->getData()->getValue()) {

            metro.setEntryPoint(f20);

        }else if (comienzo == f21->getData()->getValue()) {

            metro.setEntryPoint(f21);

        }else if (comienzo == n9->getData()->getValue()) {

            metro.setEntryPoint(n9);

        }else if (comienzo == f23->getData()->getValue()) {

            metro.setEntryPoint(f23);

        }else if (comienzo == f24->getData()->getValue()) {

            metro.setEntryPoint(f24);

        }else if (comienzo == f25->getData()->getValue()) {

            metro.setEntryPoint(f25);

        }else if (comienzo == f26->getData()->getValue()) {

            metro.setEntryPoint(f26);

        }else if (comienzo == a17->getData()->getValue()) {

            metro.setEntryPoint(a17);

        }else if (comienzo == a18->getData()->getValue()) {

            metro.setEntryPoint(a18);

        }

        //LINEA7



        if(comienzo == q1->getData()->getValue()){

            metro.setEntryPoint(q1);

        }else if (comienzo == q2->getData()->getValue()) {

            metro.setEntryPoint(q2);

        }else if (comienzo == q3->getData()->getValue()) {

            metro.setEntryPoint(q3);

        }else if (comienzo == q4->getData()->getValue()) {

            metro.setEntryPoint(q4);

        }else if (comienzo == q5->getData()->getValue()) {

            metro.setEntryPoint(q5);

        }else if (comienzo == q6->getData()->getValue()) {

            metro.setEntryPoint(q6);

        }else if (comienzo == q7->getData()->getValue()) {

            metro.setEntryPoint(q7);

        }else if (comienzo == q8->getData()->getValue()) {

            metro.setEntryPoint(q8);

        }else if (comienzo == q9->getData()->getValue()) {

            metro.setEntryPoint(q9);

        }else if (comienzo == q10->getData()->getValue()) {

            metro.setEntryPoint(q10);

        }else if (comienzo == q11->getData()->getValue()) {

            metro.setEntryPoint(q11);

        }else if (comienzo == q12->getData()->getValue()) {

            metro.setEntryPoint(q12);

        }else if (comienzo == q13->getData()->getValue()) {

            metro.setEntryPoint(q13);

        }else if (comienzo == w7->getData()->getValue()) {

            metro.setEntryPoint(w7);

        }else if (comienzo == q15->getData()->getValue()) {

            metro.setEntryPoint(q15);

        }else if (comienzo == q16->getData()->getValue()) {

            metro.setEntryPoint(q16);

        }else if (comienzo == q17->getData()->getValue()) {

            metro.setEntryPoint(q17);

        }else if (comienzo == r11->getData()->getValue()) {

            metro.setEntryPoint(r11);

        }else if (comienzo == q19->getData()->getValue()) {

            metro.setEntryPoint(q19);

        }else if (comienzo == q20->getData()->getValue()) {

            metro.setEntryPoint(q20);

        }else if (comienzo == s19->getData()->getValue()) {

            metro.setEntryPoint(s19);

        }else if (comienzo == q22->getData()->getValue()) {

            metro.setEntryPoint(q22);

        }else if (comienzo == f23->getData()->getValue()) {

            metro.setEntryPoint(f23);

        }else if (comienzo == q24->getData()->getValue()) {

            metro.setEntryPoint(q24);

        }else if (comienzo == q25->getData()->getValue()) {

            metro.setEntryPoint(q25);

        }else if (comienzo == q26->getData()->getValue()) {

            metro.setEntryPoint(q26);

        }else if (comienzo == q27->getData()->getValue()) {

            metro.setEntryPoint(q27);

        }else if (comienzo == q28->getData()->getValue()) {

            metro.setEntryPoint(q28);

        }else if (comienzo == q29->getData()->getValue()) {

            metro.setEntryPoint(q29);

        }else if (comienzo == q30->getData()->getValue()) {

            metro.setEntryPoint(q30);

        }

        //LINEA8


        if(comienzo == f21->getData()->getValue()){

            metro.setEntryPoint(f21);

        }else if (comienzo == h2->getData()->getValue()) {

            metro.setEntryPoint(h2);

        }else if (comienzo == h3->getData()->getValue()) {

            metro.setEntryPoint(h3);

        }else if (comienzo == r18->getData()->getValue()) {

            metro.setEntryPoint(r18);

        }else if (comienzo == h5->getData()->getValue()) {

            metro.setEntryPoint(h5);

        }else if (comienzo == h6->getData()->getValue()) {

            metro.setEntryPoint(h6);

        }else if (comienzo == h7->getData()->getValue()) {

            metro.setEntryPoint(h7);

        }else if (comienzo == h8->getData()->getValue()) {

            metro.setEntryPoint(h8);

        }

        //LINEA9


        if(comienzo == z1->getData()->getValue()){

            metro.setEntryPoint(z1);

        }else if (comienzo == z2->getData()->getValue()) {

            metro.setEntryPoint(z2);

        }else if (comienzo == z3->getData()->getValue()) {

            metro.setEntryPoint(z3);

        }else if (comienzo == z4->getData()->getValue()) {

            metro.setEntryPoint(z4);

        }else if (comienzo == z5->getData()->getValue()) {

            metro.setEntryPoint(z5);

        }else if (comienzo == z6->getData()->getValue()) {

            metro.setEntryPoint(z6);

        }else if (comienzo == z7->getData()->getValue()) {

            metro.setEntryPoint(z7);

        }else if (comienzo == z8->getData()->getValue()) {

            metro.setEntryPoint(z8);

        }else if (comienzo == h2->getData()->getValue()) {

            metro.setEntryPoint(h2);

        }else if (comienzo == z10->getData()->getValue()) {

            metro.setEntryPoint(z10);

        }else if (comienzo == z11->getData()->getValue()) {

            metro.setEntryPoint(z11);

        }else if (comienzo == r11->getData()->getValue()) {

            metro.setEntryPoint(r11);

        }else if (comienzo == w12->getData()->getValue()) {

            metro.setEntryPoint(w12);

        }else if (comienzo == s9->getData()->getValue()) {

            metro.setEntryPoint(s9);

        }else if (comienzo == z15->getData()->getValue()) {

            metro.setEntryPoint(z15);

        }else if (comienzo == f15->getData()->getValue()) {

            metro.setEntryPoint(f15);

        }else if (comienzo == z17->getData()->getValue()) {

            metro.setEntryPoint(z17);

        }else if (comienzo == z18->getData()->getValue()) {

            metro.setEntryPoint(z18);

        }else if (comienzo == z19->getData()->getValue()) {

            metro.setEntryPoint(z19);

        }else if (comienzo == z20->getData()->getValue()) {

            metro.setEntryPoint(z20);

        }else if (comienzo == z21->getData()->getValue()) {

            metro.setEntryPoint(z21);

        }else if (comienzo == z22->getData()->getValue()) {

            metro.setEntryPoint(z22);

        }else if (comienzo == z23->getData()->getValue()) {

            metro.setEntryPoint(z23);

        }else if (comienzo == z24->getData()->getValue()) {

            metro.setEntryPoint(z24);

        }else if (comienzo == z25->getData()->getValue()) {

            metro.setEntryPoint(z25);

        }else if (comienzo == z26->getData()->getValue()) {

            metro.setEntryPoint(z26);

        }else if (comienzo == z27->getData()->getValue()) {

            metro.setEntryPoint(z27);

        }else if (comienzo == z28->getData()->getValue()) {

            metro.setEntryPoint(z28);

        }else if (comienzo == z29->getData()->getValue()) {

            metro.setEntryPoint(z29);

        }

        //LINEA 10



        if(comienzo == x1->getData()->getValue()){

            metro.setEntryPoint(x1);

        }else if (comienzo == x2->getData()->getValue()) {

            metro.setEntryPoint(x2);

        }else if (comienzo == x3->getData()->getValue()) {

            metro.setEntryPoint(x3);

        }else if (comienzo == x4->getData()->getValue()) {

            metro.setEntryPoint(x4);

        }else if (comienzo == x5->getData()->getValue()) {

            metro.setEntryPoint(x5);

        }else if (comienzo == x6->getData()->getValue()) {

            metro.setEntryPoint(x6);

        }else if (comienzo == x7->getData()->getValue()) {

            metro.setEntryPoint(x7);

        }else if (comienzo == x8->getData()->getValue()) {

            metro.setEntryPoint(x8);

        }else if (comienzo == x9->getData()->getValue()) {

            metro.setEntryPoint(x9);

        }else if (comienzo == x10->getData()->getValue()) {

            metro.setEntryPoint(x10);

        }else if (comienzo == x11->getData()->getValue()) {

            metro.setEntryPoint(x11);

        }else if (comienzo == x12->getData()->getValue()) {

            metro.setEntryPoint(x12);

        }else if (comienzo == x13->getData()->getValue()) {

            metro.setEntryPoint(x13);

        }else if (comienzo == n3->getData()->getValue()) {

            metro.setEntryPoint(n3);

        }else if (comienzo == n4->getData()->getValue()) {

            metro.setEntryPoint(n4);

        }else if (comienzo == x16->getData()->getValue()) {

            metro.setEntryPoint(x16);

        }else if (comienzo == x17->getData()->getValue()) {

            metro.setEntryPoint(x17);

        }else if (comienzo == f21->getData()->getValue()) {

            metro.setEntryPoint(f21);

        }else if (comienzo == q19->getData()->getValue()) {

            metro.setEntryPoint(q19);

        }else if (comienzo == r4->getData()->getValue()) {

            metro.setEntryPoint(r4);

        }else if (comienzo == n13->getData()->getValue()) {

            metro.setEntryPoint(n13);

        }else if (comienzo == a15->getData()->getValue()) {

            metro.setEntryPoint(a15);

        }else if (comienzo == f28->getData()->getValue()) {

            metro.setEntryPoint(f28);

        }else if (comienzo == x24->getData()->getValue()) {

            metro.setEntryPoint(x24);

        }else if (comienzo == x25->getData()->getValue()) {

            metro.setEntryPoint(x25);

        }else if (comienzo == w32->getData()->getValue()) {

            metro.setEntryPoint(w32);

        }else if (comienzo == x27->getData()->getValue()) {

            metro.setEntryPoint(x27);

        }else if (comienzo == x28->getData()->getValue()) {

            metro.setEntryPoint(x28);

        }else if (comienzo == x29->getData()->getValue()) {

            metro.setEntryPoint(x29);

        }else if (comienzo == x30->getData()->getValue()) {

            metro.setEntryPoint(x30);

        }else if (comienzo == x31->getData()->getValue()) {

            metro.setEntryPoint(x31);

        }

        //LINEA 11


        if(comienzo == v1->getData()->getValue()){

            metro.setEntryPoint(v1);

        }else if (comienzo == v2->getData()->getValue()) {

            metro.setEntryPoint(v2);

        }else if (comienzo == v3->getData()->getValue()) {

            metro.setEntryPoint(v3);

        }else if (comienzo == v4->getData()->getValue()) {

            metro.setEntryPoint(v4);

        }else if (comienzo == v5->getData()->getValue()) {

            metro.setEntryPoint(v5);

        }else if (comienzo == v6->getData()->getValue()) {

            metro.setEntryPoint(v6);

        }else if (comienzo == f8->getData()->getValue()) {

            metro.setEntryPoint(f8);

        }


        //LINEA 12


        if(comienzo == m1->getData()->getValue()){

            metro.setEntryPoint(m1);

        }else if (comienzo == m2->getData()->getValue()) {

            metro.setEntryPoint(m2);

        }else if (comienzo == m3->getData()->getValue()) {

            metro.setEntryPoint(m3);

        }else if (comienzo == m4->getData()->getValue()) {

            metro.setEntryPoint(m4);

        }else if (comienzo == m5->getData()->getValue()) {

            metro.setEntryPoint(m5);

        }else if (comienzo == m6->getData()->getValue()) {

            metro.setEntryPoint(m6);

        }else if (comienzo == m7->getData()->getValue()) {

            metro.setEntryPoint(m7);

        }else if (comienzo == m8->getData()->getValue()) {

            metro.setEntryPoint(m8);

        }else if (comienzo == m9->getData()->getValue()) {

            metro.setEntryPoint(m9);

        }else if (comienzo == m10->getData()->getValue()) {

            metro.setEntryPoint(m10);

        }else if (comienzo == m11->getData()->getValue()) {

            metro.setEntryPoint(m11);

        }else if (comienzo == m12->getData()->getValue()) {

            metro.setEntryPoint(m12);

        }else if (comienzo == m13->getData()->getValue()) {

            metro.setEntryPoint(m13);

        }else if (comienzo == m14->getData()->getValue()) {

            metro.setEntryPoint(m14);

        }else if (comienzo == m15->getData()->getValue()) {

            metro.setEntryPoint(m15);

        }else if (comienzo == m16->getData()->getValue()) {

            metro.setEntryPoint(m16);

        }else if (comienzo == m17->getData()->getValue()) {

            metro.setEntryPoint(m17);

        }else if (comienzo == m18->getData()->getValue()) {

            metro.setEntryPoint(m18);

        }else if (comienzo == m19->getData()->getValue()) {

            metro.setEntryPoint(m19);

        }else if (comienzo == m20->getData()->getValue()) {

            metro.setEntryPoint(m20);

        }else if (comienzo == m21->getData()->getValue()) {

            metro.setEntryPoint(m21);

        }else if (comienzo == m22->getData()->getValue()) {

            metro.setEntryPoint(m22);

        }else if (comienzo == m23->getData()->getValue()) {

            metro.setEntryPoint(m23);

        }else if (comienzo == m24->getData()->getValue()) {

            metro.setEntryPoint(m24);

        }else if (comienzo == m25->getData()->getValue()) {

            metro.setEntryPoint(m25);

        }else if (comienzo == x31->getData()->getValue()) {

            metro.setEntryPoint(x31);

        }else if (comienzo == m27->getData()->getValue()) {

            metro.setEntryPoint(m27);

        }else if (comienzo == m28->getData()->getValue()) {

            metro.setEntryPoint(m28);

        }


        //LINEA R


        if(comienzo == s14->getData()->getValue()){

            metro.setEntryPoint(s14);

        }else if (comienzo == f28->getData()->getValue()) {

            metro.setEntryPoint(f28);

        }

///////////////////////////////////////////////////////////////////////////////////////////////////


        //LINKS

                //LINEA1

                metro.link(n1,n2, true);

                metro.link(n2,n3, true);

                metro.link(n3,n4, true);

                metro.link(n4,n5, true);

                metro.link(n5,n6, true);

                metro.link(n6,n7, true);

                metro.link(n7,n8, true);

                metro.link(n8,n9, true);

                metro.link(n9,n10, true);

                metro.link(n10,n11, true);

                metro.link(n11,n12, true);

                metro.link(n12,n13, true);

                metro.link(n13,n14, true);

                metro.link(n14,n15, true);

                metro.link(n15,n16, true);

                metro.link(n16,n17, true);

                metro.link(n17,n18, true);

                metro.link(n18,n19, true);

                metro.link(n19,n20, true);

                metro.link(n20,n21, true);

                metro.link(n21,n22, true);

                metro.link(n22,n23, true);

                metro.link(n23,n24, true);

                metro.link(n24,n25, true);

                metro.link(n25,n26, true);

                metro.link(n26,n27, true);

                metro.link(n27,n28, true);

                metro.link(n28,n29, true);

                metro.link(n29,n30, true);

                metro.link(n30,n31, true);

                metro.link(n31,n32, true);

                metro.link(n32,n33, true);


                //LINEA2

                metro.link(s1,s2, true);

                metro.link(s2,s3, true);

                metro.link(s3,s4, true);

                metro.link(s4,s5, true);

                metro.link(s5,s6, true);

                metro.link(s6,s7, true);

                metro.link(s7,s8, true);

                metro.link(s8,s9, true);

                metro.link(s9,s10, true);

                metro.link(s10,s11, true);

                metro.link(s11,s12, true);

                metro.link(s12,n15, true);

                metro.link(n15,s14, true);

                metro.link(s14,s15, true);

                metro.link(s15,s16, true);

                metro.link(s16,s17, true);

                metro.link(s17,s18, true);

                metro.link(s18,s19, true);

                metro.link(s19,n9, true);


                //LINEA3

                metro.link(a1,a2, true);

                metro.link(a2,a3, true);

                metro.link(a3,a4, true);

                metro.link(a4,a5, true);

                metro.link(a5,a6, true);

                metro.link(a6,a7, true);

                metro.link(a7,a8, true);

                metro.link(a8,a9, true);

                metro.link(a9,a10, true);

                metro.link(a10,a11, true);

                metro.link(a11,a12, true);

                metro.link(a12,n15, true);

                metro.link(n15,a14, true);

                metro.link(a14,a15, true);

                metro.link(a15,a16, true);

                metro.link(a16,a17, true);

                metro.link(a17,a18, true);


                //LINEA4

                metro.link(a17,s17, true);

                metro.link(s17,n12, true);

                metro.link(n12,r4, true);

                metro.link(r4,r5, true);

                metro.link(r5,r6, true);

                metro.link(r6,r7, true);

                metro.link(r7,s8, true);

                metro.link(s8,r9, true);

                metro.link(r9,r10, true);

                metro.link(r10,r11, true);

                metro.link(r11,r12, true);

                metro.link(r12,r13, true);

                metro.link(r13,r14, true);

                metro.link(r14,r15, true);

                metro.link(r15,r16, true);

                metro.link(r16,r17, true);

                metro.link(r17,r18, true);

                metro.link(r18,r19, true);

                metro.link(r19,r20, true);

                metro.link(r20,r21, true);

                metro.link(r21,r22, true);

                metro.link(r22,n1, true);


                //LINEA5

                metro.link(w1,w2, true);

                metro.link(w2,w3, true);

                metro.link(w3,w4, true);

                metro.link(w4,w5, true);

                metro.link(w5,w6, true);

                metro.link(w6,w7, true);

                metro.link(w7,w8, true);

                metro.link(w8,w9, true);

                metro.link(w9,s6, true);

                metro.link(s6,r10, true);

                metro.link(r10,w12, true);

                metro.link(w12,w13, true);

                metro.link(w13,r4, true);

                metro.link(r4,w15, true);

                metro.link(w15,n14, true);

                metro.link(n14,a14, true);

                metro.link(a14,s14, true);

                metro.link(s14,w19, true);

                metro.link(w19,w20, true);

                metro.link(w20,w21, true);

                metro.link(w21,w22, true);

                metro.link(w22,w23, true);

                metro.link(w23,w24, true);

                metro.link(w24,w25, true);

                metro.link(w25,w26, true);

                metro.link(w26,w27, true);

                metro.link(w27,w28, true);

                metro.link(w28,w29, true);

                metro.link(w29,w30, true);

                metro.link(w30,w31, true);

                metro.link(w31,w32, true);


                //LINEA6

                metro.link(f1,f2, true);

                metro.link(f2,f3, true);

                metro.link(f3,f4, true);

                metro.link(f4,f5, true);

                metro.link(f5,w25, true);

                metro.link(w25,f7, true);

                metro.link(f7,f8, true);

                metro.link(f8,f9, true);

                metro.link(f9,a8, true);

                metro.link(a8,f11, true);

                metro.link(f11,f12, true);

                metro.link(f12,n21, true);

                metro.link(n21,f14, true);

                metro.link(f14,f15, true);

                metro.link(f15,f16, true);

                metro.link(f16,s7, true);

                metro.link(s7,r10, true);

                metro.link(r10,r11, true);

                metro.link(r11,f20, true);

                metro.link(f20,f21, true);

                metro.link(f21,n9, true);

                metro.link(n9,f23, true);

                metro.link(f23,f24, true);

                metro.link(f24,f25, true);

                metro.link(f25,f26, true);

                metro.link(f26,a17, true);

                metro.link(a17,f28, true);


                //LINEA7

                metro.link(q1,q2, true);

                metro.link(q2,q3, true);

                metro.link(q3,q4, true);

                metro.link(q4,q5, true);

                metro.link(q5,q6, true);

                metro.link(q6,q7, true);

                metro.link(q7,q8, true);

                metro.link(q8,q9, true);

                metro.link(q9,q10, true);

                metro.link(q10,q11, true);

                metro.link(q11,q12, true);

                metro.link(q12,q13, true);

                metro.link(q13,w7, true);

                metro.link(w7,q15, true);

                metro.link(q15,q16, true);

                metro.link(q16,q17, true);

                metro.link(q17,r11, true);

                metro.link(r11,q19, true);

                metro.link(q19,q20, true);

                metro.link(q20,s19, true);

                metro.link(s19,q22, true);

                metro.link(q22,f23, true);

                metro.link(f23,q24, true);

                metro.link(q24,q25, true);

                metro.link(q25,q26, true);

                metro.link(q26,q27, true);

                metro.link(q27,q28, true);

                metro.link(q28,q29, true);

                metro.link(q29,q30, true);


                //LINEA8

                metro.link(f21,h2, true);

                metro.link(h2,h3, true);

                metro.link(h3,r18, true);

                metro.link(r18,h5, true);

                metro.link(h5,h6, true);

                metro.link(h6,h7, true);

                metro.link(h7,h8, true);


                //LINEA9

                metro.link(z1,z2, true);

                metro.link(z2,z3, true);

                metro.link(z3,z4, true);

                metro.link(z4,z5, true);

                metro.link(z5,z6, true);

                metro.link(z6,z7, true);

                metro.link(z7,z8, true);

                metro.link(z8,h2, true);

                metro.link(h2,z10, true);

                metro.link(z10,z11, true);

                metro.link(z11,r11, true);

                metro.link(r11,w12, true);

                metro.link(w12,s9, true);

                metro.link(s9,z15, true);

                metro.link(z15,f15, true);

                metro.link(f15,z17, true);

                metro.link(z17,z18, true);

                metro.link(z18,z19, true);

                metro.link(z19,z20, true);

                metro.link(z20,z21, true);

                metro.link(z21,z22, true);

                metro.link(z22,z23, true);

                metro.link(z23,z24, true);

                metro.link(z24,z25, true);

                metro.link(z25,z26, true);

                metro.link(z26,z27, true);

                metro.link(z27,z28, true);


                //LINEA10

                metro.link(x1,x2, true);

                metro.link(x2,x3, true);

                metro.link(x3,x4, true);

                metro.link(x4,x5, true);

                metro.link(x5,x6, true);

                metro.link(x6,x7, true);

                metro.link(x7,x8, true);

                metro.link(x8,x9, true);

                metro.link(x9,x10, true);

                metro.link(x10,x11, true);

                metro.link(x11,x12, true);

                metro.link(x12,x13, true);

                metro.link(x13,n3, true);

                metro.link(n3,n4, true);

                metro.link(n4,x16, true);

                metro.link(x16,x17, true);

                metro.link(x17,f21, true);

                metro.link(f21,q19, true);

                metro.link(q19,r4, true);

                metro.link(r4,n13, true);

                metro.link(n13,a15, true);

                metro.link(a15,f28, true);

                metro.link(f28,x24, true);

                metro.link(x24,x25, true);

                metro.link(x25,w32, true);

                metro.link(w32,x27, true);

                metro.link(x27,x28, true);

                metro.link(x28,x29, true);

                metro.link(x29,x30, true);

                metro.link(x30,x31, true);


                //LINEA11

                metro.link(v1,v2, true);

                metro.link(v2,v3, true);

                metro.link(v3,v4, true);

                metro.link(v4,v5, true);

                metro.link(v5,v6, true);

                metro.link(v6,f8, true);


                //LINEA12

                metro.link(m1,m2, true);

                metro.link(m2,m3, true);

                metro.link(m3,m4, true);

                metro.link(m4,m5, true);

                metro.link(m5,m6, true);

                metro.link(m6,m7, true);

                metro.link(m7,m8, true);

                metro.link(m8,m9, true);

                metro.link(m9,m10, true);

                metro.link(m10,m11, true);

                metro.link(m11,m12, true);

                metro.link(m12,m13, true);

                metro.link(m13,m14, true);

                metro.link(m14,m15, true);

                metro.link(m15,m16, true);

                metro.link(m16,m17, true);

                metro.link(m17,m18, true);

                metro.link(m18,m19, true);

                metro.link(m19,m20, true);

                metro.link(m20,m21, true);

                metro.link(m21,m22, true);

                metro.link(m22,m23, true);

                metro.link(m23,m24, true);

                metro.link(m24,m25, true);

                metro.link(m25,x31, true);

                metro.link(x31,m27, true);

                metro.link(m27,m28, true);

                //LINEAR

                metro.link(s14,f28, true);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////


        cout << "A que estacion quiere ir?: ";

        cin >>llegada;

        //LINEA2

        if(llegada == s1->getData()->getValue()){

            metro.printPath(s1);

        }else if (llegada == s2->getData()->getValue()) {

            metro.printPath(s2);

        }else if (llegada == s3->getData()->getValue()) {

            metro.printPath(s3);

        }else if (llegada == s4->getData()->getValue()) {

            metro.printPath(s4);

        }else if (llegada == s5->getData()->getValue()) {

            metro.printPath(s5);

        }else if (llegada == s6->getData()->getValue()) {

            metro.printPath(s6);

        }else if (llegada == s7->getData()->getValue()) {

            metro.printPath(s7);

        }else if (llegada == s8->getData()->getValue()) {

            metro.printPath(s8);

        }else if (llegada == s9->getData()->getValue()) {

            metro.printPath(s9);

        }else if (llegada == s10->getData()->getValue()) {

            metro.printPath(s10);

        }else if (llegada == s11->getData()->getValue()) {

            metro.printPath(s11);

        }else if (llegada == s12->getData()->getValue()) {

            metro.printPath(s12);

        }else if (llegada == n15->getData()->getValue()) {

            metro.printPath(n15);

        }else if (llegada == s14->getData()->getValue()) {

            metro.printPath(s14);

        }else if (llegada == s15->getData()->getValue()) {

            metro.printPath(s15);

        }else if (llegada == s16->getData()->getValue()) {

            metro.printPath(s16);

        }else if (llegada == s17->getData()->getValue()) {

            metro.printPath(s17);

        }else if (llegada == s18->getData()->getValue()) {

            metro.printPath(s18);

        }else if (llegada == s19->getData()->getValue()) {

            metro.printPath(s19);

        }else if (llegada == n9->getData()->getValue()) {

            metro.printPath(n9);

        }

        //linea 3

        if(llegada == a1->getData()->getValue()){

            metro.printPath(a1);

        }else if (llegada == a2->getData()->getValue()) {

            metro.printPath(a2);

        }else if (llegada == a3->getData()->getValue()) {

            metro.printPath(a3);

        }else if (llegada == a4->getData()->getValue()) {

            metro.printPath(a4);

        }else if (llegada == a5->getData()->getValue()) {

            metro.printPath(a5);

        }else if (llegada == a6->getData()->getValue()) {

            metro.printPath(a6);

        }else if (llegada == a7->getData()->getValue()) {

            metro.printPath(a7);

        }else if (llegada == a8->getData()->getValue()) {

            metro.printPath(a8);

        }else if (llegada == a9->getData()->getValue()) {

            metro.printPath(a9);

        }else if (llegada == a10->getData()->getValue()) {

            metro.printPath(a10);

        }else if (llegada == a11->getData()->getValue()) {

            metro.printPath(a11);

        }else if (llegada == a12->getData()->getValue()) {

            metro.printPath(a12);

        }else if (llegada == n15->getData()->getValue()) {

            metro.printPath(n15);

        }else if (llegada == a14->getData()->getValue()) {

            metro.printPath(a14);

        }else if (llegada == a15->getData()->getValue()) {

            metro.printPath(a15);

        }else if (llegada == a16->getData()->getValue()) {

            metro.printPath(a16);

        }else if (llegada == a17->getData()->getValue()) {

            metro.printPath(a17);

        }else if (llegada == a18->getData()->getValue()) {

            metro.printPath(a18);

        }

        //LINEA4

        if(llegada == a17->getData()->getValue()){

            metro.printPath(a17);

        }else if (llegada == s17->getData()->getValue()) {

            metro.printPath(s17);

        }else if (llegada == n12->getData()->getValue()) {

            metro.printPath(n12);

        }else if (llegada == r4->getData()->getValue()) {

            metro.printPath(r4);

        }else if (llegada == r5->getData()->getValue()) {

            metro.printPath(r5);

        }else if (llegada == r6->getData()->getValue()) {

            metro.printPath(r6);

        }else if (llegada == r7->getData()->getValue()) {

            metro.printPath(r7);

        }else if (llegada == s8->getData()->getValue()) {

            metro.printPath(s8);

        }else if (llegada == r9->getData()->getValue()) {

            metro.printPath(r9);

        }else if (llegada == r10->getData()->getValue()) {

            metro.printPath(r10);

        }else if (llegada == r11->getData()->getValue()) {

            metro.printPath(r11);

        }else if (llegada == r12->getData()->getValue()) {

            metro.printPath(r12);

        }else if (llegada == r13->getData()->getValue()) {

            metro.printPath(r13);

        }else if (llegada == r14->getData()->getValue()) {

            metro.printPath(r14);

        }else if (llegada == r15->getData()->getValue()) {

            metro.printPath(r15);

        }else if (llegada == r16->getData()->getValue()) {

            metro.printPath(r16);

        }else if (llegada == r17->getData()->getValue()) {

            metro.printPath(r17);

        }else if (llegada == r18->getData()->getValue()) {

            metro.printPath(r18);

        }else if (llegada == r19->getData()->getValue()) {

            metro.printPath(r19);

        }else if (llegada == r20->getData()->getValue()) {

            metro.printPath(r20);

        }else if (llegada == r21->getData()->getValue()) {

            metro.printPath(r21);

        }else if (llegada == r22->getData()->getValue()) {

            metro.printPath(r22);

        }else if (llegada == n1->getData()->getValue()) {

            metro.printPath(n1);

        }

        //linea 5

        if(llegada == w1->getData()->getValue()){

            metro.printPath(w1);

        }else if (llegada == w2->getData()->getValue()) {

            metro.printPath(w2);

        }else if (llegada == w3->getData()->getValue()) {

            metro.printPath(w3);

        }else if (llegada == w4->getData()->getValue()) {

            metro.printPath(w4);

        }else if (llegada == w5->getData()->getValue()) {

            metro.printPath(w5);

        }else if (llegada == w6->getData()->getValue()) {

            metro.printPath(w6);

        }else if (llegada == w7->getData()->getValue()) {

            metro.printPath(w7);

        }else if (llegada == w8->getData()->getValue()) {

            metro.printPath(w8);

        }else if (llegada == w9->getData()->getValue()) {

            metro.printPath(w9);

        }else if (llegada == s6->getData()->getValue()) {

            metro.printPath(s6);

        }else if (llegada == r10->getData()->getValue()) {

            metro.printPath(r10);

        }else if (llegada == w12->getData()->getValue()) {

            metro.printPath(w12);

        }else if (llegada == w13->getData()->getValue()) {

            metro.printPath(w13);

        }else if (llegada == r4->getData()->getValue()) {

            metro.printPath(r4);

        }else if (llegada == w15->getData()->getValue()) {

            metro.printPath(w15);

        }else if (llegada == n14->getData()->getValue()) {

            metro.printPath(n14);

        }else if (llegada == a14->getData()->getValue()) {

            metro.printPath(a14);

        }else if (llegada == s14->getData()->getValue()) {

            metro.printPath(s14);

        }else if (llegada == w19->getData()->getValue()) {

            metro.printPath(w19);

        }else if (llegada == w20->getData()->getValue()) {

            metro.printPath(w20);

        }else if (llegada == w21->getData()->getValue()) {

            metro.printPath(w21);

        }else if (llegada == w22->getData()->getValue()) {

            metro.printPath(w22);

        }else if (llegada == w23->getData()->getValue()) {

            metro.printPath(w23);

        }else if (llegada == w24->getData()->getValue()) {

            metro.printPath(w24);

        }else if (llegada == w25->getData()->getValue()) {

            metro.printPath(w25);

        }else if (llegada == w26->getData()->getValue()) {

            metro.printPath(w26);

        }else if (llegada == w27->getData()->getValue()) {

            metro.printPath(w27);

        }else if (llegada == w28->getData()->getValue()) {

            metro.printPath(w28);

        }else if (llegada == w29->getData()->getValue()) {

            metro.printPath(w29);

        }else if (llegada == w30->getData()->getValue()) {

            metro.printPath(w30);

        }else if (llegada == w31->getData()->getValue()) {

            metro.printPath(w31);

        }else if (llegada == w32->getData()->getValue()) {

            metro.printPath(w32);

        }

        //linea 6

        if(llegada == f1->getData()->getValue()){

            metro.printPath(f1);

        }else if (llegada == f2->getData()->getValue()) {

            metro.printPath(f2);

        }else if (llegada == f3->getData()->getValue()) {

            metro.printPath(f3);

        }else if (llegada == f4->getData()->getValue()) {

            metro.printPath(f4);

        }else if (llegada == f5->getData()->getValue()) {

            metro.printPath(f5);

        }else if (llegada == w25->getData()->getValue()) {

            metro.printPath(w25);

        }else if (llegada == f7->getData()->getValue()) {

            metro.printPath(f7);

        }else if (llegada == f8->getData()->getValue()) {

            metro.printPath(f8);

        }else if (llegada == f9->getData()->getValue()) {

            metro.printPath(f9);

        }else if (llegada == a8->getData()->getValue()) {

            metro.printPath(a8);

        }else if (llegada == f11->getData()->getValue()) {

            metro.printPath(f11);

        }else if (llegada == f12->getData()->getValue()) {

            metro.printPath(f12);

        }else if (llegada == n21->getData()->getValue()) {

            metro.printPath(n21);

        }else if (llegada == f14->getData()->getValue()) {

            metro.printPath(f14);

        }else if (llegada == f15->getData()->getValue()) {

            metro.printPath(f15);

        }else if (llegada == f16->getData()->getValue()) {

            metro.printPath(f16);

        }else if (llegada == s7->getData()->getValue()) {

            metro.printPath(s7);

        }else if (llegada == r10->getData()->getValue()) {

            metro.printPath(r10);

        }else if (llegada == r11->getData()->getValue()) {

            metro.printPath(r11);

        }else if (llegada == f20->getData()->getValue()) {

            metro.printPath(f20);

        }else if (llegada == f21->getData()->getValue()) {

            metro.printPath(f21);

        }else if (llegada == n9->getData()->getValue()) {

            metro.printPath(n9);

        }else if (llegada == f23->getData()->getValue()) {

            metro.printPath(f23);

        }else if (llegada == f24->getData()->getValue()) {

            metro.printPath(f24);

        }else if (llegada == f25->getData()->getValue()) {

            metro.printPath(f25);

        }else if (llegada == f26->getData()->getValue()) {

            metro.printPath(f26);

        }else if (llegada == a17->getData()->getValue()) {

            metro.printPath(a17);

        }else if (llegada == a18->getData()->getValue()) {

            metro.printPath(a18);

        }

        //linea 7

        if(llegada == q1->getData()->getValue()){

            metro.printPath(q1);

        }else if (llegada == q2->getData()->getValue()) {

            metro.printPath(q2);

        }else if (llegada == q3->getData()->getValue()) {

            metro.printPath(q3);

        }else if (llegada == q4->getData()->getValue()) {

            metro.printPath(q4);

        }else if (llegada == q5->getData()->getValue()) {

            metro.printPath(q5);

        }else if (llegada == q6->getData()->getValue()) {

            metro.printPath(q6);

        }else if (llegada == q7->getData()->getValue()) {

            metro.printPath(q7);

        }else if (llegada == q8->getData()->getValue()) {

            metro.printPath(q8);

        }else if (llegada == q9->getData()->getValue()) {

            metro.printPath(q9);

        }else if (llegada == q10->getData()->getValue()) {

            metro.printPath(q10);

        }else if (llegada == q11->getData()->getValue()) {

            metro.printPath(q11);

        }else if (llegada == q12->getData()->getValue()) {

            metro.printPath(q12);

        }else if (llegada == q13->getData()->getValue()) {

            metro.printPath(q13);

        }else if (llegada == w7->getData()->getValue()) {

            metro.printPath(w7);

        }else if (llegada == q15->getData()->getValue()) {

            metro.printPath(q15);

        }else if (llegada == q16->getData()->getValue()) {

            metro.printPath(q16);

        }else if (llegada == q17->getData()->getValue()) {

            metro.printPath(q17);

        }else if (llegada == r11->getData()->getValue()) {

            metro.printPath(r11);

        }else if (llegada == q19->getData()->getValue()) {

            metro.printPath(q19);

        }else if (llegada == q20->getData()->getValue()) {

            metro.printPath(q20);

        }else if (llegada == s19->getData()->getValue()) {

            metro.printPath(s19);

        }else if (llegada == q22->getData()->getValue()) {

            metro.printPath(q22);

        }else if (llegada == f23->getData()->getValue()) {

            metro.printPath(f23);

        }else if (llegada == q24->getData()->getValue()) {

            metro.printPath(q24);

        }else if (llegada == q25->getData()->getValue()) {

            metro.printPath(q25);

        }else if (llegada == q26->getData()->getValue()) {

            metro.printPath(q26);

        }else if (llegada == q27->getData()->getValue()) {

            metro.printPath(q27);

        }else if (llegada == q28->getData()->getValue()) {

            metro.printPath(q28);

        }else if (llegada == q29->getData()->getValue()) {

            metro.printPath(q29);

        }else if (llegada == q30->getData()->getValue()) {

            metro.printPath(q30);

        }

        //linea 8

        if(llegada == f21->getData()->getValue()){

            metro.printPath(f21);

        }else if (llegada == h2->getData()->getValue()) {

            metro.printPath(h2);

        }else if (llegada == h3->getData()->getValue()) {

            metro.printPath(h3);

        }else if (llegada == r18->getData()->getValue()) {

            metro.printPath(r18);

        }else if (llegada == h5->getData()->getValue()) {

            metro.printPath(h5);

        }else if (llegada == h6->getData()->getValue()) {

            metro.printPath(h6);

        }else if (llegada == h7->getData()->getValue()) {

            metro.printPath(h7);

        }else if (llegada == h8->getData()->getValue()) {

            metro.printPath(h8);

        }

         // linea 9

        if(llegada == z1->getData()->getValue()){

            metro.printPath(z1);

        }else if (llegada == z2->getData()->getValue()) {

            metro.printPath(z2);

        }else if (llegada == z3->getData()->getValue()) {

            metro.printPath(z3);

        }else if (llegada == z4->getData()->getValue()) {

            metro.printPath(z4);

        }else if (llegada == z5->getData()->getValue()) {

            metro.printPath(z5);

        }else if (llegada == z6->getData()->getValue()) {

            metro.printPath(z6);

        }else if (llegada == z7->getData()->getValue()) {

            metro.printPath(z7);

        }else if (llegada == z8->getData()->getValue()) {

            metro.printPath(z8);

        }else if (llegada == h2->getData()->getValue()) {

            metro.printPath(h2);

        }else if (llegada == z10->getData()->getValue()) {

            metro.printPath(z10);

        }else if (llegada == z11->getData()->getValue()) {

            metro.printPath(z11);

        }else if (llegada == r11->getData()->getValue()) {

            metro.printPath(r11);

        }else if (llegada == w12->getData()->getValue()) {

            metro.printPath(w12);

        }else if (llegada == s9->getData()->getValue()) {

            metro.printPath(s9);

        }else if (llegada == z15->getData()->getValue()) {

            metro.printPath(z15);

        }else if (llegada == f15->getData()->getValue()) {

            metro.printPath(f15);

        }else if (llegada == z17->getData()->getValue()) {

            metro.printPath(z17);

        }else if (llegada == z18->getData()->getValue()) {

            metro.printPath(z18);

        }else if (llegada == z19->getData()->getValue()) {

            metro.printPath(z19);

        }else if (llegada == z20->getData()->getValue()) {

            metro.printPath(z20);

        }else if (llegada == z21->getData()->getValue()) {

            metro.printPath(z21);

        }else if (llegada == z22->getData()->getValue()) {

            metro.printPath(z22);

        }else if (llegada == z23->getData()->getValue()) {

            metro.printPath(z23);

        }else if (llegada == z24->getData()->getValue()) {

            metro.printPath(z24);

        }else if (llegada == z25->getData()->getValue()) {

            metro.printPath(z25);

        }else if (llegada == z26->getData()->getValue()) {

            metro.printPath(z26);

        }else if (llegada == z27->getData()->getValue()) {

            metro.printPath(z27);

        }else if (llegada == z28->getData()->getValue()) {

            metro.printPath(z28);

        }else if (llegada == z29->getData()->getValue()) {

            metro.printPath(z29);

        }

             //linea 10

        if(llegada == x1->getData()->getValue()){

            metro.printPath(x1);

        }else if (llegada == x2->getData()->getValue()) {

            metro.printPath(x2);

        }else if (llegada == x3->getData()->getValue()) {

            metro.printPath(x3);

        }else if (llegada == x4->getData()->getValue()) {

            metro.printPath(x4);

        }else if (llegada == x5->getData()->getValue()) {

            metro.printPath(x5);

        }else if (llegada == x6->getData()->getValue()) {

            metro.printPath(x6);

        }else if (llegada == x7->getData()->getValue()) {

            metro.printPath(x7);

        }else if (llegada == x8->getData()->getValue()) {

            metro.printPath(x8);

        }else if (llegada == x9->getData()->getValue()) {

            metro.printPath(x9);

        }else if (llegada == x10->getData()->getValue()) {

            metro.printPath(x10);

        }else if (llegada == x11->getData()->getValue()) {

            metro.printPath(x11);

        }else if (llegada == x12->getData()->getValue()) {

            metro.printPath(x12);

        }else if (llegada == x13->getData()->getValue()) {

            metro.printPath(x13);

        }else if (llegada == n3->getData()->getValue()) {

            metro.printPath(n3);

        }else if (llegada == n4->getData()->getValue()) {

            metro.printPath(n4);

        }else if (llegada == x16->getData()->getValue()) {

            metro.printPath(x16);

        }else if (llegada == x17->getData()->getValue()) {

            metro.printPath(x17);

        }else if (llegada == f21->getData()->getValue()) {

            metro.printPath(f21);

        }else if (llegada == q19->getData()->getValue()) {

            metro.printPath(q19);

        }else if (llegada == r4->getData()->getValue()) {

            metro.printPath(r4);

        }else if (llegada == n13->getData()->getValue()) {

            metro.printPath(n13);

        }else if (llegada == a15->getData()->getValue()) {

            metro.printPath(a15);

        }else if (llegada == f28->getData()->getValue()) {

            metro.printPath(f28);

        }else if (llegada == x24->getData()->getValue()) {

            metro.printPath(x24);

        }else if (llegada == x25->getData()->getValue()) {

            metro.printPath(x25);

        }else if (llegada == w32->getData()->getValue()) {

            metro.printPath(w32);

        }else if (llegada == x27->getData()->getValue()) {

            metro.printPath(x27);

        }else if (llegada == x28->getData()->getValue()) {

            metro.printPath(x28);

        }else if (llegada == x29->getData()->getValue()) {

            metro.printPath(x29);

        }else if (llegada == x30->getData()->getValue()) {

            metro.printPath(x30);

        }else if (llegada == x31->getData()->getValue()) {

            metro.printPath(x31);

        }

        //linea 11

        if(llegada == v1->getData()->getValue()){

            metro.printPath(v1);

        }else if (llegada == v2->getData()->getValue()) {

            metro.printPath(v2);

        }else if (llegada == v3->getData()->getValue()) {

            metro.printPath(v3);

        }else if (llegada == v4->getData()->getValue()) {

            metro.printPath(v4);

        }else if (llegada == v5->getData()->getValue()) {

            metro.printPath(v5);

        }else if (llegada == v6->getData()->getValue()) {

            metro.printPath(v6);

        }else if (llegada == f8->getData()->getValue()) {

            metro.printPath(f8);

        }

        //linea 12

        if(llegada == m1->getData()->getValue()){

            metro.printPath(m1);

        }else if (llegada == m2->getData()->getValue()) {

            metro.printPath(m2);

        }else if (llegada == m3->getData()->getValue()) {

            metro.printPath(m3);

        }else if (llegada == m4->getData()->getValue()) {

            metro.printPath(m4);

        }else if (llegada == m5->getData()->getValue()) {

            metro.printPath(m5);

        }else if (llegada == m6->getData()->getValue()) {

            metro.printPath(m6);

        }else if (llegada == m7->getData()->getValue()) {

            metro.printPath(m7);

        }else if (llegada == m8->getData()->getValue()) {

            metro.printPath(m8);

        }else if (llegada == m9->getData()->getValue()) {

            metro.printPath(m9);

        }else if (llegada == m10->getData()->getValue()) {

            metro.printPath(m10);

        }else if (llegada == m11->getData()->getValue()) {

            metro.printPath(m11);

        }else if (llegada == m12->getData()->getValue()) {

            metro.printPath(m12);

        }else if (llegada == m13->getData()->getValue()) {

            metro.printPath(m13);

        }else if (llegada == m14->getData()->getValue()) {

            metro.printPath(m14);

        }else if (llegada == m15->getData()->getValue()) {

            metro.printPath(m15);

        }else if (llegada == m16->getData()->getValue()) {

            metro.printPath(m16);

        }else if (llegada == m17->getData()->getValue()) {

            metro.printPath(m17);

        }else if (llegada == m18->getData()->getValue()) {

            metro.printPath(m18);

        }else if (llegada == m19->getData()->getValue()) {

            metro.printPath(m19);

        }else if (llegada == m20->getData()->getValue()) {

            metro.printPath(m20);

        }else if (llegada == m21->getData()->getValue()) {

            metro.printPath(m21);

        }else if (llegada == m22->getData()->getValue()) {

            metro.printPath(m22);

        }else if (llegada == m23->getData()->getValue()) {

            metro.printPath(m23);

        }else if (llegada == m24->getData()->getValue()) {

            metro.printPath(m24);

        }else if (llegada == m25->getData()->getValue()) {

            metro.printPath(m25);

        }else if (llegada == x31->getData()->getValue()) {

            metro.printPath(x31);

        }else if (llegada == m27->getData()->getValue()) {

            metro.printPath(m27);

        }else if (llegada == m28->getData()->getValue()) {

            metro.printPath(m28);

        }

        //linea r

        if(llegada == s14->getData()->getValue()){

            metro.printPath(s14);

        }else if (llegada == f28->getData()->getValue()) {

            metro.printPath(f28);

        }
                return 0;
                            }
