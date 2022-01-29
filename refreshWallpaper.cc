/* TO REFRESH THE WALLPAPER AFTER THE PROGRAM IS EXIT */
#include <stdio.h>
#include <Windows.h>
 
int main()
{
	if(SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, NULL, SPIF_SENDCHANGE|SPIF_UPDATEINIFILE)) printf("Successful to refresh the wallpaper!\n");
	else printf("Failed to refresh the wallpaper!\n");
	return 0;
}