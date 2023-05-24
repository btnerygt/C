#include <stdio.h>
#include <locale.h>

int main()
{
    //türkçe karakterleri aktif etme
    setlocale(LC_ALL, "Turkish");

    // harf kontrolleri
    int sesliharf=0;
    int kalinsesliharf=0;
    int incesesliharf=0;
    int duzsesliharf=0;
    int yuvarlaksesliharf=0;
    int darsesliharf=0;
    int genissesliharf=0;
    int sessizharf=0;
    int sertsessizharf=0;
    int yumusaksessizharf=0;
    int dudaksessizharf=0;
    int dissessizharf=0;
    int damaksessizharf=0;
    int girtlaksessizharf=0;
    int sureklisessizharf=0;
    int sureksizsessizharf=0;

    char harf;
    printf("bir harf gir:");    
    scanf("%c" ,&harf);

    // harflerin özellikleri
    char sesli_harfler[]={'a','A','e','E','ı','I','i','İ','o','O','ö','Ö','u','U','ü','Ü'};
    char kalin_sesli_harfler[]={'a','A','ı','I','o','O','u','U'};
    char ince_sesli_harfler[]={'e','E','i','İ','ö','Ö','ü','Ü'};
    char duz_sesli_harfler[]={'a','A','ı','I','e','E','i','İ'};
    char yuvarlak_sesli_harfler[]={'o','O','u','U','ö','Ö','ü','Ü'};
    char dar_sesli_harfler[]={'ı','I','i','İ','u','U','ü','Ü'};
    char genis_sesli_harfler[]={'a','A','e','E','o','O','ö','Ö'};
    char sessiz_harfler[]={'b','B','c','C','ç','Ç','d','D','f','F','g','G','ğ','Ğ','j','J','h','H','k','K','l','L','m','M','n','N','p','P','r','R','s','S','ş','Ş','t','T','v','V','y','Y','z','Z'};
    char sert_sessiz_harfler[]={'ç','Ç','f','F','h','H','k','K','p','P','s','S','ş','Ş','t','T'};
    char yumusak_sessiz_harfler[]={'b','B','c','C','d','D','g','G','ğ','Ğ','j','J','l','L','m','M','n','N','r','R','v','V','y','Y','z','Z'};
    char dudak_sessiz_harfler[]={'b','B','f','F','m','M','p','P','v','V'};
    char dis_sessiz_harfler[]={'c','C','ç','Ç','d','D','j','J','n','N','s','S','ş','Ş','t','T','z','Z'};
    char damak_sessiz_harfler[]={'g','G','ğ','Ğ','k','K','l','L','r','R','y','Y'};
    char girtlak_sessiz_harfler[]={'h','H'};
    char surekli_sessiz_harfler[]={'f','F','ğ','Ğ','h','H','j','J','l','L','m','M','n','N','r','R','s','S','ş','Ş','v','V','y','Y','z','Z'};
    char sureksiz_sessiz_harfler[]={'b','B','c','C','ç','Ç','d','D','g','G','k','K'};
    
    // sesli harf mi?
    for(int i=0;i<16;i++){ if(harf == sesli_harfler[i]){ sesliharf++; break; } }

    if(sesliharf != 0){ printf("%c harfi sesli harftir. \n" ,harf); }

    // kalın sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == kalin_sesli_harfler[i]){ kalinsesliharf++; break; } }

    if(kalinsesliharf != 0){ printf("%c harfi kalin sesli harftir. \n" ,harf); }

    // ince sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == ince_sesli_harfler[i]){ incesesliharf++; break; } }

    if(incesesliharf != 0){ printf("%c harfi ince sesli harftir. \n" ,harf);}

    // düz sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == duz_sesli_harfler[i]){ duzsesliharf++; break; } }

    if(duzsesliharf != 0){ printf("%c harfi duz sesli harftir. \n" ,harf); }

    // yuvarlak sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == yuvarlak_sesli_harfler[i]){ yuvarlaksesliharf++; break; } }

    if(yuvarlaksesliharf != 0){ printf("%c harfi yuvarlak sesli harftir. \n" ,harf); }

    // dar sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == dar_sesli_harfler[i]){ darsesliharf++; break; } }

    if(darsesliharf != 0){ printf("%c harfi dar sesli harftir. \n" ,harf); }

    // genis sesli harf mi?
    for(int i=0;i<8;i++){ if(harf == genis_sesli_harfler[i]){ genissesliharf++; break; } }

    if(genissesliharf != 0){ printf("%c harfi genis sesli harftir. \n" ,harf); }

    // sessiz harf mi?
    for(int i=0;i<42;i++){ if(harf == sessiz_harfler[i]){ sessizharf++; break; } }

    if(sessizharf != 0){ printf("%c harfi sessiz harftir. \n" ,harf); }

    // sert sessiz harf mi?
    for(int i=0;i<16;i++){ if(harf == sert_sessiz_harfler[i]){ sertsessizharf++; break; } }

    if(sertsessizharf != 0){ printf("%c harfi sert sessiz harftir. \n" ,harf); }

    // yumusak sessiz harf mi?
    for(int i=0;i<26;i++){ if(harf == yumusak_sessiz_harfler[i]){ yumusaksessizharf++; break; } }

    if(yumusaksessizharf != 0){ printf("%c harfi yumusak sessiz harftir. \n" ,harf); }

    // dudak sessiz harf mi?
    for(int i=0;i<10;i++){ if(harf == dudak_sessiz_harfler[i]){ dudaksessizharf++; break; } }

    if(dudaksessizharf != 0){ printf("%c harfi dudak sessiz harftir. \n" ,harf); }

    // dis sessiz harf mi?
    for(int i=0;i<18;i++){ if(harf == dis_sessiz_harfler[i]){ dissessizharf++; break; } }

    if(dissessizharf != 0){ printf("%c harfi dis sessiz harftir. \n" ,harf); }

    // damak sessiz harf mi?
    for(int i=0;i<12;i++){ if(harf == damak_sessiz_harfler[i]){ damaksessizharf++; break; } }

    if(damaksessizharf != 0){ printf("%c harfi damak sessiz harftir." ,harf); }

    // gırtlak sessiz harf mi?
    for(int i=0;i<2;i++){ if(harf == girtlak_sessiz_harfler[i]){ girtlaksessizharf++; break; } }

    if(girtlaksessizharf != 0){ printf("%c harfi gırtlak sessiz harftir. \n" ,harf); }

    // sürekli sessiz harf mi?
    for(int i=0;i<26;i++){ if(harf == surekli_sessiz_harfler[i]){ sureklisessizharf++; break; } }

    if(sureklisessizharf != 0){ printf("%c harfi surekli sessiz harftir. \n" ,harf); }

    // sureksiz sessiz harf mi?
    for(int i=0;i<12;i++){ if(harf == sureksiz_sessiz_harfler[i]){ sureksizsessizharf++; break; } }

    if(sureksizsessizharf != 0){ printf("%c harfi sureksiz sessiz harftir. \n" ,harf); }
}