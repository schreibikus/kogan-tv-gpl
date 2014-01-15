//<MStar Software>
//***********************************************************************************
//MStar Software
//Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
//All software, firmware and related documentation herein (��MStar Software��) are intellectual property of MStar Semiconductor, Inc. (��MStar��) and protected by law, including, but not limited to, copyright law and international treaties.  Any use, modification, reproduction, retransmission, or republication of all or part of MStar Software is expressly prohibited, unless prior written permission has been granted by MStar. 
//By accessing, browsing and/or using MStar Software, you acknowledge that you have read, understood, and agree, to be bound by below terms (��Terms��) and to comply with all applicable laws and regulations:
//
//1. MStar shall retain any and all right, ownership and interest to MStar Software and any modification/derivatives thereof.  No right, ownership, or interest to MStar Software and any modification/derivatives thereof is transferred to you under Terms.
//2. You understand that MStar Software might include, incorporate or be supplied together with third party��s software and the use of MStar Software may require additional licenses from third parties.  Therefore, you hereby agree it is your sole responsibility to separately obtain any and all third party right and license necessary for your use of such third party��s software. 
//3. MStar Software and any modification/derivatives thereof shall be deemed as MStar��s confidential information and you agree to keep MStar��s confidential information in strictest confidence and not disclose to any third party.  
//4. MStar Software is provided on an ��AS IS�� basis without warranties of any kind. Any warranties are hereby expressly disclaimed by MStar, including without limitation, any warranties of merchantability, non-infringement of intellectual property rights, fitness for a particular purpose, error free and in conformity with any international standard.  You agree to waive any claim against MStar for any loss, damage, cost or expense that you may incur related to your use of MStar Software.  
//   In no event shall MStar be liable for any direct, indirect, incidental or consequential damages, including without limitation, lost of profit or revenues, lost or damage of data, and unauthorized system use.  You agree that this Section 4 shall still apply without being affected even if MStar Software has been modified by MStar in accordance with your request or instruction for your use, except otherwise agreed by both parties in writing.
//5. If requested, MStar may from time to time provide technical supports or services in relation with MStar Software to you for your use of MStar Software in conjunction with your or your customer��s product (��Services��).  You understand and agree that, except otherwise agreed by both parties in writing, Services are provided on an ��AS IS�� basis and the warranty disclaimer set forth in Section 4 above shall apply.  
//6. Nothing contained herein shall be construed as by implication, estoppels or otherwise: (a) conferring any license or right to use MStar name, trademark, service mark, symbol or any other identification; (b) obligating MStar or any of its affiliates to furnish any person, including without limitation, you and your customers, any assistance of any kind whatsoever, or any information; or (c) conferring any license or right under any intellectual property right.
//7. These terms shall be governed by and construed in accordance with the laws of Taiwan, R.O.C., excluding its conflict of law rules.  Any and all dispute arising out hereof or related hereto shall be finally settled by arbitration referred to the Chinese Arbitration Association, Taipei in accordance with the ROC Arbitration Law and the Arbitration Rules of the Association by three (3) arbitrators appointed in accordance with the said Rules.  The place of arbitration shall be in Taipei, Taiwan and the language shall be English.  
//   The arbitration award shall be final and binding to both parties.
//
//���B�Ҧ��n��B����ά�������(�U�١uMStar Software�v)����MStar Semiconductor, Inc. (�U�١uMStar�v)�����z�]���v�ì������k��(�]�A��������ۧ@�v�k�ΰ�ڱ���)�ҫO�@�A���󥼸gMStar�ƫe�ѭ���i���ϥΡB�ק�B���s�B�ǰe�Τ��}�����T��C
//�@���z�i�J�B�s���Ψϥ�MStar Software�A�z�Y�n���z�w��Ū�B�F�ѨæP�N���U�C���ڡ]�U�١u�����ڡv�^�ҩ���ñN���u�����k�W���W�w�G
//
//1.	MStar���O��MStar Software�Ψ�ק磌���l�ͪ�������P�������v�Q�B�Ҧ��v�ΧQ�q�A�z�å��]�����ڦӨ��o����MStar Software�Ψ�ק磌���l�ͪ�������P�������v�Q�B�Ҧ��v�ΧQ�q�C
//2.	�z�F��MStar Software�i��t���ε��X���ݩ�ĤT�H���n��ΫY�P�ĤT�H���n��@�ִ��ѡA�Өϥ�MStar Software�i��ݥt��V�ĤT�H���o���v�A�]���z�P�N�z�N�ۦ�t�d�V�����ĤT�H���o���v�H�X�k�ϥ�MStar Software�C
//3.	MStar Software�Ψ�ק磌���l�ͪ����Q����MStar�����K��T�A�z�P�N�N�H�̾��K�O�sMStar�����K��T�B���N�����S������ĤT�H�C
//4.	MStar Software�Y�u�̲{���v�Ҵ��ѦӵL�����O�CMStar�󦹧_�{��MStar Software���ѥ����O�A�]�A��������i�ӫ~�ơB���I�v�B�ŦX�S�w�ϥΥت��B�L�岫�βŦX�����ڼзǤ���O�C�z�P�N�N���|��MStar�D�i�z�]�ϥ�MStar Software�ҥͤ�����l���B�l�`�B�O�ΩΤ�X�C����󱡪p�U�AMStar��󪽱����B�������B���a���Υ��M���l�`�����t�d���A�]�A��������Q���禬�l���B��Ƥ����l�򥢤Ψt�γQ���g���v�ϥΡC�z�æP�N�A������t���ѭ���ĳ�~�A�Y��MStar���̱z���n�D�Ϋ��ܦӭק�MStar Software�A����4�����W�w���~��A�ΦӤ����v�T�C
//5.	�p�g�n�D�AMStar���ɱN���ѧ޳N�䴩�ΪA�Ȥ��z�A�H�Q�z�����~�i�H�PMStar Software�@�P�ϥ�(�U�١u�A�ȡv)�A�z�F�ѨæP�N�A������t���ѭ���ĳ�~�A�Ҧ��A�ȧ��Y�u�H�{���v���ѡA��4���������Ѿ�O�����W�w�����A�Τ��C
//6.	�����ڤ�������ڤ��o�Q������(�L�ר��q�ܡB�T�Ϩ���h�Ψ䥦)�G(a) �¤������v�Q�H�ϥ�MStar���W�١B�ӼСB�A�ȼг��B�Ÿ��Ψ䥦�ѧO�Ϲ��F(b)�Ҥ�MStar�Ψ����Y���~���Ѥ�����H(�]�A��������z�αz���Ȥ�)����Φ�����U�θ�T���q�ȡF��(c) �¤����󴼼z�]���v�C
//7.	���������̤��إ���k�߬��Ǿڪk(���t��Ĭ�k�h)�C�����󥻱��کҥͩλP�����ڬ�������ĳ�̲����̤��إ������k�θӨ�|������W�h�ѨM�A�������3�W����H�H�^��b�x�W�x�_�i��A����H���̤��إ�������|������W�h��X�A����P�_�����ק����B�����觡������O�C
//***********************************************************************************
//<MStar Software>

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// file    cmd_secure.c
/// @brief  SCS Main Function
/// @author MStar Semiconductor Inc.
///////////////////////////////////////////////////////////////////////////////////////////////////


//-------------------------------------------------------------------------------------------------
//  Include Files
//-------------------------------------------------------------------------------------------------
#include <common.h>
#include <command.h>
#include <secure/MsSecureCommon.h>
#include <secure/crypto_rsa.h>
#include <secure/crypto_sha.h>
#include <secure/crypto_func.h>
#include <secure/crypto_aes.h>
#include <secure/crypto_auth.h>
#include <secure/apiSecureBoot.h>
#include <MsTypes.h>
#include <MsSystem.h>
#include <exports.h>
#include <ShareType.h>
#include <MsDebug.h>
#include <MsUtility.h>

//-------------------------------------------------------------------------------------------------
//  Debug
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//  Local Defines
//-------------------------------------------------------------------------------------------------
#define DEFAULT_SEGMENT_SIZE 10240
#define CERTIFICATE_LOCATION        "certificate"
#define RSA_PUBLIC_KEY_PATH "/RSAPublicKeyAPP.bin"
#define AES_KEY_PATH "/Kcust.bin"





//-------------------------------------------------------------------------------------------------
//  Local Structurs
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//  Global Variables
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Local Variables
//-------------------------------------------------------------------------------------------------
static unsigned char aesKeyReady=FALSE;
static char aesKey[0x10];
static unsigned int segmentSize=0;
static unsigned char fileSizeReady=FALSE;
static unsigned int gfileSize=0;

//-------------------------------------------------------------------------------------------------
//  extern function
//-------------------------------------------------------------------------------------------------
extern int snprintf(char *str, size_t size, const char *fmt, ...);

//-------------------------------------------------------------------------------------------------
//  inline
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Local function
//-------------------------------------------------------------------------------------------------
U32 Secure_SegmentSize (void);
int GetAESKeyforAESUsbUpgrade(void);
int GetfileSizeforAESUsbUpgrade(char *file);


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------




int do_file_segment_rsa_authendication(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
    #define TARGET_INTERFACE argv[1]
    #define TARGET_DEVICE  argv[2]
    #define TARGET_FILE  argv[3]
    /// chunk file size in all-in-one segment rsa mode
    #define SEGMENT_RSA_CHUNK_FILE_SIZE 128
    /// CHUNK file's start signature
    #define CHUNK_ID "MSTAR..."
    /// CHUNK file's end signature
    #define CHUNK_END "...mstar"
    /// RSA publick key N length
    #define RSA_PUBLIC_KEN_N_LEN 256
    /// RSA publick key E length
    #define RSA_PUBLIC_KEN_E_LEN 4
    /// RSA publick key total length
    #undef RSA_PUBLIC_KEY_LEN
    #define RSA_PUBLIC_KEY_LEN          (RSA_PUBLIC_KEN_N_LEN+RSA_PUBLIC_KEN_E_LEN)
    #define SHA256_DIGEST_SIZE ( 256 / 8)
    #define BUF_SIZE 4096

    SECUREBOOT_MbxRetStruct SecureBootMbxRetStruct;

    
    unsigned int i=0;
    unsigned int fileDataOffset=0;
    unsigned int fileDataLen=0;
    unsigned int fileHashOffset=0;
    unsigned int fileHashLen=0;
    unsigned int fileSignatureOffset=0;
    unsigned int fileSignatureLen=0;
    unsigned int *pReadChunk=NULL;
    char *buffer=NULL;
    int ret=0;
    unsigned int fileSize=0;
    unsigned int readLen=0;
    unsigned char rsaOutBuf[RSA_KEY_DIGI_LEN*4];
    unsigned char rsaPublicKey[RSA_PUBLIC_KEY_LEN];
    unsigned char hashOutBuf[SHA256_DIGEST_SIZE];
    unsigned char *pt=NULL;

    if(argc<4)
        return -1;

    buffer=(char *)malloc(BUF_SIZE);
    if(buffer==0){
        printf("[ERROR]memroy allocate fail\n");
        return -1;
    }
    else
    {
    memset(buffer,0,BUF_SIZE);
    snprintf(buffer, BUF_SIZE, "fatfilesize usb 0 %s 0x%08x", TARGET_FILE, &fileSize);
    //printf("cmd:%s\n",buffer);
    ret=run_command(buffer, 0);
    if(ret<0){
        goto exit;
    }
    
    //Read last segment , because we want to get chunk file.
    memset(buffer,0,BUF_SIZE);
    snprintf(buffer, BUF_SIZE, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,RSA_AUTHENTICATION_ADDR, TARGET_FILE, fileSize-SEGMENT_RSA_CHUNK_FILE_SIZE, SEGMENT_RSA_CHUNK_FILE_SIZE);
    ret=run_command(buffer, 0);
    if(ret<0){
        goto exit;
    }
    }
    
    if(memcmp((const void *)(RSA_AUTHENTICATION_ADDR),CHUNK_ID,sizeof(CHUNK_ID))!=0){
        printf("[ERROR] CHUNK_ID compare fail\n");
        goto exit;
    }

    if(memcmp((const void *)(RSA_AUTHENTICATION_ADDR+SEGMENT_RSA_CHUNK_FILE_SIZE-strlen(CHUNK_END)),CHUNK_END,strlen(CHUNK_END))!=0){
        printf("[ERROR] CHUNK_END compare fail\n");
        goto exit;
    }

    //Get hash, signature infor from chunk data
    pReadChunk=(unsigned int *)(RSA_AUTHENTICATION_ADDR);
    pReadChunk+=2;
    segmentSize=*pReadChunk;
    pReadChunk+=1;
    fileDataOffset=*pReadChunk;
    pReadChunk++;
    fileDataLen=*pReadChunk;
    pReadChunk++;

    fileHashOffset=*pReadChunk;
    pReadChunk++;
    fileHashLen=*pReadChunk;
    pReadChunk++;
    fileSignatureOffset=*pReadChunk;
    pReadChunk++;
    fileSignatureLen=*pReadChunk;
    pReadChunk++;
    printf("[DEBUG] segment size=0x%x\n",segmentSize);
    printf("[DEBUG] fileDataOffset=0x%x\n",fileDataOffset);
    printf("[DEBUG] fileDataLen=0x%x\n",fileDataLen);
    printf("[DEBUG] fileHashOffset=0x%x\n",fileHashOffset);
    printf("[DEBUG] fileHashLen=0x%x\n",fileHashLen);
    printf("[DEBUG] fileSignatureOffset=0x%x\n",fileSignatureOffset);
    printf("[DEBUG] fileSignatureLen=0x%x\n",fileSignatureLen);


     //Get rsa public key
      if(IsHouseKeepingBootingMode()==FALSE)
     {
         flush_cache((U32)rsaPublicKey,RSA_PUBLIC_KEY_LEN);
         Chip_Flush_Memory();
         Secure_MailBox_GetKey(&SecureBootMbxRetStruct,(U32)rsaPublicKey,E_RSA_UPGRADE_PUBLIC_KEY,RSA_PUBLIC_KEY_LEN); 
         }
     else
     {
         ret=run_command("ubi part UBI",0);
         if(ret<0) {
             goto exit;
         }

         snprintf(buffer, BUF_SIZE, "ubifsmount %s", CERTIFICATE_LOCATION);
         ret=run_command(buffer,0);
         if(ret<0) {
              ret=run_command("ubi part UBIRO",0);
              if(ret<0) {
                goto exit;
              }
              snprintf(buffer, BUF_SIZE, "ubifsmount %s", CERTIFICATE_LOCATION);
              ret=run_command(buffer,0);
              if(ret<0)
                  goto exit;
         }
         if( buffer!=NULL )
         {
         memset(buffer, 0 , BUF_SIZE);
         snprintf(buffer, BUF_SIZE, "ubifsload %x %s ", RSA_AUTHENTICATION_ADDR, RSA_PUBLIC_KEY_PATH);
         ret = run_command(buffer, 0);
         if(ret<0){
             goto exit;
         }
     }


     pt=(unsigned char *)(RSA_AUTHENTICATION_ADDR);
     for(i=0;i<RSA_PUBLIC_KEY_LEN;i++){
        rsaPublicKey[i]=*pt;
        pt++;
    }
    }
     
    //Read ***.hash.signature, and then do rsa decod
    memset(buffer,0,BUF_SIZE);
    
    snprintf(buffer, BUF_SIZE, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,RSA_AUTHENTICATION_ADDR, TARGET_FILE, fileSignatureOffset, fileSignatureLen);
    ret=run_command(buffer, 0);
    if(ret<0){
           
        goto exit;
    }
    
    rsa_main((unsigned char *)RSA_AUTHENTICATION_ADDR,&rsaPublicKey[0],&rsaPublicKey[RSA_PUBLIC_KEN_N_LEN],rsaOutBuf);
    
    // Do rsa authentication for ***.hash
    if( buffer != NULL )
   {
    memset(buffer,0,BUF_SIZE);
    
    snprintf(buffer, BUF_SIZE, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,RSA_AUTHENTICATION_ADDR, TARGET_FILE, fileHashOffset, fileHashLen);

    ret=run_command(buffer, 0);
    if(ret<0){
        goto exit;
    }
    }
    
    if(CommonSHA(RSA_AUTHENTICATION_ADDR,(MS_U32)hashOutBuf,(MS_U32)fileHashLen)!=0)
    {
      free(buffer);
      return -1;  
    }
    #if 1
    for(i = 0; i<SHA256_DIGEST_SIZE; i++)
    {

        if(hashOutBuf[i] != rsaOutBuf[i])
        {
           printf("hashOutBuf[%d]=0x%x, rsaOutBuf[%d]=0x%x \n",i,hashOutBuf[i],i,rsaOutBuf[i]);
           free(buffer);
           return -1;
        }
    }
    #endif

    // Do rsa authentication for ***.hash
    printf("Segment RSA Authentication ....\n");
    while(fileDataLen){
        printf("*");
        readLen=(fileDataLen>=segmentSize)?segmentSize:fileDataLen;

        memset(buffer,0,BUF_SIZE);
        snprintf(buffer, BUF_SIZE, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,RSA_AUTHENTICATION_ADDR, TARGET_FILE, fileDataOffset, readLen);
        ret=run_command(buffer, 0);
        if(ret<0){
            goto exit;
        }
        if(CommonSHA(RSA_AUTHENTICATION_ADDR,(MS_U32)hashOutBuf,(MS_U32)readLen)!=0)
        {
          free(buffer);
          return -1;  
        }

        memset(buffer,0,BUF_SIZE);
        snprintf(buffer, BUF_SIZE, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,RSA_AUTHENTICATION_ADDR, TARGET_FILE, fileHashOffset, SHA256_DIGEST_SIZE*2);
        ret=run_command(buffer, 0);
        if(ret<0){
            goto exit;
        }

        pt=(unsigned char *)(RSA_AUTHENTICATION_ADDR);//+SHA256_DIGEST_SIZE-1);
        for(i = 0; i<SHA256_DIGEST_SIZE; i++)
        {
             if(hashOutBuf[SHA256_DIGEST_SIZE-1-i] != *pt){
                printf("hashOutBuf[%d]=0x%x, *pt=0x%x \n",SHA256_DIGEST_SIZE-1-i,hashOutBuf[SHA256_DIGEST_SIZE-1-i],*pt);
                free(buffer);
                return -1;
             }
             pt++;
        }
        fileDataLen-=readLen;
        fileDataOffset+=readLen;
        fileHashOffset+=SHA256_DIGEST_SIZE;
        #if 0
        printf("[DEBUG] readLen=0x%x\n",readLen);
        printf("[DEBUG] fileDataLen=0x%x\n",fileDataLen);
        printf("[DEBUG] fileDataOffset=0x%x\n",fileDataOffset);
        printf("[DEBUG] fileHashOffset=0x%x\n",fileHashOffset);
        #endif
    }
    exit:
    free(buffer);
    return ret;
}



int do_file_part_load_with_segment_aes_decrypted(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
     #define DOWNLOAD_INTERFACE argv[1]
     #define DOWNLOAD_DEVICE argv[2]
     #define DOWNLOAD_ADDR argv[3]
     #define DOWNLOAD_FILE argv[4]
     #define DOWNLOAD_OFFSET argv[5]
     #define DOWNLOAD_LENGTH argv[6]
            
     unsigned int downloadOffset=0;
     unsigned int downloadLen=0;
     char *pdownloadAddr=NULL;

     unsigned int readSegmentAddr=0;
     unsigned int readOffsetInSeg=0;
     unsigned int readLen=0;
     unsigned int aesDecodeLen=0;
     unsigned int segmentNum=0;
     unsigned int _segmentSize=0;
     char* buffer=NULL;
     int ret=0;
     SECUREBOOT_MbxRetStruct SecureBootMbxRetStruct;
 
    
     if(argc<7){
        return -1;
     }
     buffer=(char *)malloc(BUF_SIZE);
     if(buffer == NULL)
     {
        printf("%s: Error: out of memory, at %d\n", __func__, __LINE__);
        return -1;
      }
     else
      memset(buffer, 0, BUF_SIZE);


      downloadOffset = (ulong)simple_strtoul(DOWNLOAD_OFFSET, NULL, 16);
      downloadLen = (ulong)simple_strtoul(DOWNLOAD_LENGTH, NULL, 16);
      pdownloadAddr = (char *)simple_strtoul(DOWNLOAD_ADDR, NULL, 16);

      //Get total file size
     ret=GetfileSizeforAESUsbUpgrade(DOWNLOAD_FILE);
     if(ret<0)
     {
        free(buffer);
        return -1;
     }

      //Get AES decode key
      if(segmentSize==0)
        _segmentSize=DEFAULT_SEGMENT_SIZE;
      else
        _segmentSize=segmentSize;
      //Read data and do aes decoder.
      segmentNum=downloadOffset/_segmentSize;

      if(IsHouseKeepingBootingMode()==FALSE)
      {
        Secure_MailBox_ASSIGN_DECRYPTED_KEY(&SecureBootMbxRetStruct,E_AES_UPGRADE_KEY,AES_KEY_LEN,E_KEY_SWAP);
      }
      else
      {
         ret=GetAESKeyforAESUsbUpgrade();
         if(ret<0)
         {
            free(buffer);
            return -1;
         }
      }
      
      while(downloadLen){

        readSegmentAddr=segmentNum*_segmentSize;
        if(downloadOffset%_segmentSize){ //Only first time
            readOffsetInSeg=downloadOffset-readSegmentAddr;
            readLen=((readOffsetInSeg+downloadLen)>=_segmentSize)?(_segmentSize-readOffsetInSeg):downloadLen;

        }
       else{
            readOffsetInSeg=0;
            readLen=(downloadLen>=_segmentSize)?_segmentSize:downloadLen;

        }
        aesDecodeLen=((readSegmentAddr+_segmentSize)>=gfileSize)?gfileSize-readSegmentAddr:_segmentSize;
#if 0
        printf("[DEBUG] downloadOffset=0x%x\n",downloadOffset);
        printf("[DEBUG] downloadLen=0x%x\n",downloadLen);
        printf("[DEBUG] pdownloadAddr=0x%x\n",pdownloadAddr);
        printf("[DEBUG] readSegmentAddr=0x%x\n",readSegmentAddr);
        printf("[DEBUG] readOffsetInSeg=0x%x\n",readOffsetInSeg);
        printf("[DEBUG] readLen=0x%x\n",readLen);
        printf("[DEBUG] aesDecodeLen=0x%x\n",aesDecodeLen);
        printf("[DEBUG] segmentNum=0x%x\n",segmentNum);
#endif

        snprintf(buffer, BUF_SIZE, "fatpartload %s %s %x %s %x %x", DOWNLOAD_INTERFACE,DOWNLOAD_DEVICE,AES_DECRYPTED_ADDR, DOWNLOAD_FILE, readSegmentAddr, aesDecodeLen);
        ret = run_command(buffer, 0);
        if(ret<0){
          free(buffer);
          return -1;
        }

        // AES decode
        if(IsHouseKeepingBootingMode()==FALSE)
        {
            flush_cache((U32)AES_DECRYPTED_ADDR,aesDecodeLen);
            Chip_Flush_Memory();
            Secure_MailBox_AESDecode(&SecureBootMbxRetStruct, MsOS_VA2PA(AES_DECRYPTED_ADDR), aesDecodeLen, SECURE_ENG_AES_MODE_ECB);
        }
        else
        {
            Secure_AES_ECB_Decrypt(AES_DECRYPTED_ADDR, aesDecodeLen, (U8 *)aesKey);
        }

        // copy to target address
        memcpy(pdownloadAddr,(char *)(AES_DECRYPTED_ADDR+readOffsetInSeg),readLen);


        downloadLen-=readLen;

        pdownloadAddr+=readLen;
        downloadOffset+=readLen;
        segmentNum++;
     }
    free(buffer);

     return 0;
}




U32 Secure_SegmentSize (void)
{
    return DEFAULT_SEGMENT_SIZE;
}

int GetAESKeyforAESUsbUpgrade(void)
{
    char* buffer=NULL;
    int ret=0;
    unsigned int i=0;
    char *pkey=NULL;

    if(aesKeyReady==TRUE)
        return 0;

    buffer=(char *)malloc(BUF_SIZE);
    if(buffer == 0)
    {
       printf("%s: Error: out of memory, at %d\n", __func__, __LINE__);
       return -1;
    }
    memset(buffer, 0, BUF_SIZE);

    ret=run_command("ubi part UBI",0);

    if(ret<0) {
         free(buffer);
         printf("[ERROR] get key fail\n");
         return ret;
    }
    snprintf(buffer, BUF_SIZE, "ubifsmount %s", CERTIFICATE_LOCATION);
    ret=run_command(buffer,0);
    if(ret<0) {
        ret=run_command("ubi part UBIRO",0);
        if(ret<0){
             free(buffer);
             printf("[ERROR] get key fail\n");
             return ret;
        }

        snprintf(buffer, BUF_SIZE, "ubifsmount %s", CERTIFICATE_LOCATION);
        ret=run_command(buffer,0);
        if(ret<0){
             free(buffer);
             printf("[ERROR] get key fail\n");
             return ret;
        }

    }
    memset(buffer, 0 , BUF_SIZE);
    snprintf(buffer, BUF_SIZE, "ubifsload %x %s ", AES_DECRYPTED_ADDR, AES_KEY_PATH);
    ret = run_command(buffer, 0);
    if(ret<0){
     free(buffer);
     printf("[ERROR] get key fail\n");
     return ret;
   }
   //pkey=(char *)(AES_DECRYPTED_ADDR+15);
   pkey=(char *)(AES_DECRYPTED_ADDR);
   for(i=0;i<16;i++){
      //bKey[i]=(unsigned char *)(AES_DECRYPTED_KEY_ADDR)[15-i];
      aesKey[i]=*pkey;
      pkey++;
   }
   free(buffer);

   aesKeyReady=TRUE;
    return ret;
}
int GetfileSizeforAESUsbUpgrade(char *file)
{
    char* buffer=NULL;
    int ret=0;
    if(fileSizeReady==TRUE)
        return ret;

    buffer=(char *)malloc(BUF_SIZE);
    if(buffer == NULL)
    {
       printf("%s: Error: out of memory, at %d\n", __func__, __LINE__);
       return -1;
    }
    //Get total file size
    else
    {
    memset(buffer,0,BUF_SIZE);
    snprintf(buffer, BUF_SIZE, "fatfilesize usb 0 %s 0x%08x", file, &gfileSize);
    //printf("cmd:%s\n",buffer);
    ret=run_command(buffer, 0);
    if(ret<0){
        free(buffer);
         return -1;
    }
    }

    free(buffer);
    fileSizeReady=TRUE;
    return ret;
}


