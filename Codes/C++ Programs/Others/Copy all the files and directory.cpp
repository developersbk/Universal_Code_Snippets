Copy all the files and directory

Code :

#include <windows.h>

/*
BOOL Copy(char r_szPath[1024], char r_szDir[1024])
{
	char l_szTemp[2048] = {0};
	sprintf(l_szTemp,"%s\%s"r_szPath,r_szDir);

	if(IsDirectory(
}*/

#include <stdio.h>
#include<conio.h>

BOOL __Copy(char r_szSrcPath[1024],char r_szDesPath[1024])
{
  WIN32_FIND_DATA FindFileData;
  HANDLE hFind;
  char l_szTmp[1025] = {0};
  memcpy(l_szTmp,r_szSrcPath,1024);


  char l_szSrcPath[1025] = {0};
  char l_szDesPath[1025] = {0};
  memcpy(l_szSrcPath,r_szSrcPath,1024);
  memcpy(l_szDesPath,r_szDesPath,1024);

  char l_szNewSrcPath[1025] = {0};
  char l_szNewDesPath[1025] = {0};

  strcat(l_szTmp,"*");

  hFind = FindFirstFile(l_szTmp, &FindFileData);
  if(hFind == NULL) return FALSE;

  do
  {

	  if(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
	  {
		  if(strcmp(FindFileData.cFileName,"."))
		  {
			  if(strcmp(FindFileData.cFileName,".."))
			  {
					printf ("The Directory found is %s
", FindFileData.cFileName);
					
sprintf(l_szNewDesPath,"%s%s\",l_szDesPath,FindFileData.cFileName);
					
sprintf(l_szNewSrcPath,"%s%s\",l_szSrcPath,FindFileData.cFileName);
					CreateDirectory(l_szNewDesPath,NULL);
					__Copy(l_szNewSrcPath,l_szNewDesPath);
			  }
		  }
	  }
	  else
	  {
		  printf ("The File found is %s
", FindFileData.cFileName);
		  char l_szSrcFile[1025] = {0};
		  char l_szDesFile[1025] = {0};
		  sprintf(l_szDesFile,"%s%s",l_szDesPath,FindFileData.cFileName);
		  sprintf(l_szSrcFile,"%s%s",l_szSrcPath,FindFileData.cFileName);
		  BOOL l_bRet = CopyFile(l_szSrcFile,l_szDesFile,TRUE);

	  }


  }
  while(FindNextFile(hFind, &FindFileData));
  FindClose(hFind);
  return TRUE;
}


int main(int argc, char *argv[])
{
	__Copy("C:\fcdb\","E:\sowmya\");
	getch();
	return 0;
}


