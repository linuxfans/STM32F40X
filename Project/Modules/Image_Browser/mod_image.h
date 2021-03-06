/**
  ******************************************************************************
  * @file    mod_image.h
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    06-September-2012
  * @brief   Header for mod_image.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MOD_IMAGE_H
#define __MOD_IMAGE_H

/* Includes ------------------------------------------------------------------*/
#include "global_includes.h"
#include "mod_core.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define MOD_IMAGE_VER              1
#define MOD_IMAGE_UID              0x20
#define IMAGE_SETTINGS_MEM         1
/* Exported macro ------------------------------------------------------------*/
/* Exported variables ------------------------------------------------------- */
extern MOD_InitTypeDef  mod_image ;
/* Exported functions ------------------------------------------------------- */
extern void IMAGE_DirectEx(GL_Page_TypeDef* pParent, uint8_t *file_path);
extern void IMAGE_CameraView(GL_Page_TypeDef* pParent, uint8_t *dir_path);
#endif /* __MOD_IMAGE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
