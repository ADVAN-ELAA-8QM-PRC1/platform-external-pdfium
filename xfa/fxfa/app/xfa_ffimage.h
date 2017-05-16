// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_APP_XFA_FFIMAGE_H_
#define XFA_FXFA_APP_XFA_FFIMAGE_H_

#include "xfa/fxfa/app/xfa_ffdraw.h"

class CXFA_FFImage : public CXFA_FFDraw {
 public:
  explicit CXFA_FFImage(CXFA_WidgetAcc* pDataAcc);
  ~CXFA_FFImage() override;

  // CXFA_FFWidget
  void RenderWidget(CFX_Graphics* pGS,
                    CFX_Matrix* pMatrix,
                    uint32_t dwStatus) override;
  bool IsLoaded() override;
  bool LoadWidget() override;
  void UnloadWidget() override;
};

#endif  // XFA_FXFA_APP_XFA_FFIMAGE_H_
