/*
 * nt loader
 *
 * Copyright 2006-2008 Mike McCormack
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/* see http://www.fengyuan.com/article/win32ksyscall.html */

NUL(NtGdiAbortDoc),
NUL(NtGdiAbortPath),
IMP(NtGdiAddFontResourceW, 6),
NUL(NtGdiAddRemoteFontToDC),
NUL(NtGdiAddFontMemResourceEx),
NUL(NtGdiRemoveMergeFont),
NUL(NtGdiAddRemoteMMInstanceToDC),
NUL(NtGdiAlphaBlend),
NUL(NtGdiAngleArc),
NUL(NtGdiAnyLinkedFonts),
NUL(NtGdiFontIsLinked),
NUL(NtGdiArcInternal),
NUL(NtGdiBeginPath),
IMP(NtGdiBitBlt, 11),
NUL(NtGdiCancelDC),
NUL(NtGdiCheckBitmapBits),
NUL(NtGdiCloseFigure),
#ifdef SYSCALL_WINXP
NUL(NtGdiClearBitmapAttributes), // 2
NUL(NtGdiClearBrushAttributes), // 2
#endif
NUL(NtGdiColorCorrectPalette),
NUL(NtGdiCombineRgn),
NUL(NtGdiCombineTransform),
IMP(NtGdiComputeXformCoefficients, 1),
NUL(NtGdiConsoleTextOut),
NUL(NtGdiConvertMetafileRect),
IMP(NtGdiCreateBitmap, 5),
NUL(NtGdiCreateClientObj),
NUL(NtGdiCreateColorSpace),
NUL(NtGdiCreateColorTransform),
NUL(NtGdiCreateCompatibleBitmap),
IMP(NtGdiCreateCompatibleDC, 1),
NUL(NtGdiCreateDIBBrush),
IMP(NtGdiCreateDIBitmapInternal, 11),
IMP(NtGdiCreateDIBSection, 9),
NUL(NtGdiCreateEllipticRgn),
NUL(NtGdiCreateHalftonePalette),
NUL(NtGdiCreateHatchBrushInternal),
NUL(NtGdiCreateMetafileDC),
NUL(NtGdiCreatePaletteInternal),
NUL(NtGdiCreatePatternBrushInternal),
NUL(NtGdiCreatePen),
NUL(NtGdiCreateRectRgn),
NUL(NtGdiCreateRoundRectRgn),
NUL(NtGdiCreateServerMetaFile),
IMP(NtGdiCreateSolidBrush, 2),
NUL(NtGdiD3dContextCreate),
NUL(NtGdiD3dContextDestroy),
NUL(NtGdiD3dContextDestroyAll),
NUL(NtGdiD3dValidateTextureStageState),
NUL(NtGdiD3dDrawPrimitives2),
NUL(NtGdiDdGetDriverState),
NUL(NtGdiDdAddAttachedSurface),
NUL(NtGdiDdAlphaBlt),
NUL(NtGdiDdAttachSurface),
NUL(NtGdiDdBeginMoCompFrame),
NUL(NtGdiDdBlt),
NUL(NtGdiDdCanCreateSurface),
NUL(NtGdiDdCanCreateD3DBuffer),
NUL(NtGdiDdColorControl),
NUL(NtGdiDdCreateDirectDrawObject),
NUL(NtGdiDdCreateSurface),
NUL(NtGdiDdCreateD3DBuffer), // 8
NUL(NtGdiDdCreateMoComp),
NUL(NtGdiDdCreateSurfaceObject),
NUL(NtGdiDdDeleteDirectDrawObject),
NUL(NtGdiDdDeleteSurfaceObject),
NUL(NtGdiDdDestroyMoComp),
NUL(NtGdiDdDestroySurface),
NUL(NtGdiDdDestroyD3DBuffer),
NUL(NtGdiDdEndMoCompFrame),
NUL(NtGdiDdFlip),
NUL(NtGdiDdFlipToGDISurface),
NUL(NtGdiDdGetAvailDriverMemory),
NUL(NtGdiDdGetBltStatus),
NUL(NtGdiDdGetDC),
NUL(NtGdiDdGetDriverInfo),
NUL(NtGdiDdGetDxHandle),
NUL(NtGdiDdGetFlipStatus),
NUL(NtGdiDdGetInternalMoCompInfo),
NUL(NtGdiDdGetMoCompBuffInfo),
NUL(NtGdiDdGetMoCompGuids),
NUL(NtGdiDdGetMoCompFormats),
NUL(NtGdiDdGetScanLine),
NUL(NtGdiDdLock),
NUL(NtGdiDdLockD3D),
NUL(NtGdiDdQueryDirectDrawObject),
NUL(NtGdiDdQueryMoCompStatus),
NUL(NtGdiDdReenableDirectDrawObject),
NUL(NtGdiDdReleaseDC),
NUL(NtGdiDdRenderMoComp),
NUL(NtGdiDdResetVisrgn),
NUL(NtGdiDdSetColorKey),
NUL(NtGdiDdSetExclusiveMode),
NUL(NtGdiDdSetGammaRamp),
NUL(NtGdiDdCreateSurfaceEx),
NUL(NtGdiDdSetOverlayPosition),
NUL(NtGdiDdUnattachSurface),
NUL(NtGdiDdUnlock),
NUL(NtGdiDdUnlockD3D),
NUL(NtGdiDdUpdateOverlay),
NUL(NtGdiDdWaitForVerticalBlank),
NUL(NtGdiDvpCanCreateVideoPort),
NUL(NtGdiDvpColorControl),
NUL(NtGdiDvpCreateVideoPort),
NUL(NtGdiDvpDestroyVideoPort),
NUL(NtGdiDvpFlipVideoPort),
NUL(NtGdiDvpGetVideoPortBandwidth),
NUL(NtGdiDvpGetVideoPortField),
NUL(NtGdiDvpGetVideoPortFlipStatus),
NUL(NtGdiDvpGetVideoPortInputFormats),
NUL(NtGdiDvpGetVideoPortLine),
NUL(NtGdiDvpGetVideoPortOutputFormats),
NUL(NtGdiDvpGetVideoPortConnectInfo),
NUL(NtGdiDvpGetVideoSignalStatus),
NUL(NtGdiDvpUpdateVideoPort),
NUL(NtGdiDvpWaitForVideoPortSync),
#ifdef SYSCALL_WINXP
NUL(NtGdiDvpAcquireNotification), // 3
NUL(NtGdiDvpReleaseNotification), // 2
NUL(NtGdiDxgGenericThunk), // 6
#endif
NUL(NtGdiDeleteClientObj),
NUL(NtGdiDeleteColorSpace),
NUL(NtGdiDeleteColorTransform),
IMP(NtGdiDeleteObjectApp, 1),
NUL(NtGdiDescribePixelFormat),
NUL(NtGdiGetPerBandInfo),
NUL(NtGdiDoBanding),
NUL(NtGdiDoPalette),
NUL(NtGdiDrawEscape),
NUL(NtGdiEllipse),
NUL(NtGdiEnableEudc),
NUL(NtGdiEndDoc),
NUL(NtGdiEndPage),
NUL(NtGdiEndPath),
IMP(NtGdiEnumFontChunk, 5),
IMP(NtGdiEnumFontClose, 1),
IMP(NtGdiEnumFontOpen, 7),
NUL(NtGdiEnumObjects),
NUL(NtGdiEqualRgn),
#ifdef SYSCALL_WIN2K
NUL(NtGdiEudcEnumFaceNameLinkW),
#endif
NUL(NtGdiEudcLoadUnloadLink),
NUL(NtGdiExcludeClipRect),
NUL(NtGdiExtCreatePen),
NUL(NtGdiExtCreateRegion),
NUL(NtGdiExtEscape),
NUL(NtGdiExtFloodFill),
IMP(NtGdiExtGetObjectW, 3),
NUL(NtGdiExtSelectClipRgn),
IMP(NtGdiExtTextOutW, 9),
NUL(NtGdiFillPath),
NUL(NtGdiFillRgn),
NUL(NtGdiFlattenPath),
NUL(NtGdiFlushUserBatch),
IMP(NtGdiFlush, 0), // GreFlush
NUL(NtGdiForceUFIMapping),
NUL(NtGdiFrameRgn),
NUL(NtGdiFullscreenControl),
NUL(NtGdiGetAndSetDCDword),
NUL(NtGdiGetAppClipBox),
NUL(NtGdiGetBitmapBits),
NUL(NtGdiGetBitmapDimension),
NUL(NtGdiGetBoundsRect),
NUL(NtGdiGetCharABCWidthsW),
NUL(NtGdiGetCharacterPlacementW),
NUL(NtGdiGetCharSet),
NUL(NtGdiGetCharWidthW),
NUL(NtGdiGetCharWidthInfo),
NUL(NtGdiGetColorAdjustment),
NUL(NtGdiGetColorSpaceforBitmap),
NUL(NtGdiGetDCDword),
IMP(NtGdiGetDCforBitmap, 1),
IMP(NtGdiGetDCObject, 2),
NUL(NtGdiGetDCPoint),
NUL(NtGdiGetDeviceCaps),
NUL(NtGdiGetDeviceGammaRamp),
NUL(NtGdiGetDeviceCapsAll),
NUL(NtGdiGetDIBitsInternal),
NUL(NtGdiGetETM),
NUL(NtGdiGetEudcTimeStampEx),
NUL(NtGdiGetFontData),
IMP(NtGdiGetFontResourceInfoInternalW, 7),
NUL(NtGdiGetGlyphIndicesW),
NUL(NtGdiGetGlyphIndicesWInternal),
NUL(NtGdiGetGlyphOutline),
NUL(NtGdiGetKerningPairs),
NUL(NtGdiGetLinkedUFIs),
NUL(NtGdiGetMiterLimit),
NUL(NtGdiGetMonitorID),
NUL(NtGdiGetNearestColor),
NUL(NtGdiGetNearestPaletteIndex),
NUL(NtGdiGetObjectBitmapHandle),
NUL(NtGdiGetOutlineTextMetricsInternalW),
NUL(NtGdiGetPath),
NUL(NtGdiGetPixel),
NUL(NtGdiGetRandomRgn),
NUL(NtGdiGetRasterizerCaps),
NUL(NtGdiGetRealizationInfo),
NUL(NtGdiGetRegionData),
NUL(NtGdiGetRgnBox),
NUL(NtGdiGetServerMetaFileBits),
NUL(NtGdiGetSpoolMessage),
NUL(NtGdiGetStats),
IMP(NtGdiGetStockObject, 1),
NUL(NtGdiGetStringBitmapW),
NUL(NtGdiGetSystemPaletteUse),
NUL(NtGdiGetTextCharsetInfo),
NUL(NtGdiGetTextExtent),
NUL(NtGdiGetTextExtentExW),
NUL(NtGdiGetTextFaceW),
IMP(NtGdiGetTextMetricsW, 3),
NUL(NtGdiGetTransform),
NUL(NtGdiGetUFI),
#ifdef SYSCALL_WINXP
NUL(NtGdiGetEmbUFI), // 7
#endif
NUL(NtGdiGetUFIPathname),
#ifdef SYSCALL_WINXP
NUL(NtGdiGetEmbedFonts), // 0
NUL(NtGdiChangeGhostFont), // 2
NUL(NtGdiAddEmbFontToDC), // 2
#endif
NUL(NtGdiGetFontUnicodeRanges),
NUL(NtGdiGetWidthTable),
NUL(NtGdiGradientFill),
NUL(NtGdiHfontCreate),
NUL(NtGdiIcmBrushInfo),
IMP(NtGdiInit, 0),
NUL(NtGdiInitSpool),
NUL(NtGdiIntersectClipRect),
NUL(NtGdiInvertRgn),
NUL(NtGdiLineTo),
NUL(NtGdiMakeFontDir),
NUL(NtGdiMakeInfoDC),
NUL(NtGdiMaskBlt),
NUL(NtGdiModifyWorldTransform),
NUL(NtGdiMonoBitmap),
NUL(NtGdiMoveTo),
NUL(NtGdiOffsetClipRgn),
NUL(NtGdiOffsetRgn),
IMP(NtGdiOpenDCW, 7),
NUL(NtGdiPatBlt),
NUL(NtGdiPolyPatBlt),
NUL(NtGdiPathToRegion),
NUL(NtGdiPlgBlt),
NUL(NtGdiPolyDraw),
NUL(NtGdiPolyPolyDraw),
NUL(NtGdiPolyTextOutW),
NUL(NtGdiPtInRegion),
NUL(NtGdiPtVisible),
NUL(NtGdiQueryFonts),
IMP(NtGdiQueryFontAssocInfo, 1),
IMP(NtGdiRectangle, 5),
NUL(NtGdiRectInRegion),
NUL(NtGdiRectVisible),
NUL(NtGdiRemoveFontResourceW),
NUL(NtGdiRemoveFontMemResourceEx),
NUL(NtGdiResetDC),
NUL(NtGdiResizePalette),
IMP(NtGdiRestoreDC, 2),
NUL(NtGdiRoundRect),
IMP(NtGdiSaveDC, 1),
NUL(NtGdiScaleViewportExtEx),
NUL(NtGdiScaleWindowExtEx),
IMP(NtGdiSelectBitmap, 2),
NUL(NtGdiSelectBrush),
NUL(NtGdiSelectClipPath),
NUL(NtGdiSelectFont),
NUL(NtGdiSelectPen),
#ifdef SYSCALL_WINXP
NUL(NtGdiSetBitmapAttributes), // 2
#endif
NUL(NtGdiSetBitmapBits),
NUL(NtGdiSetBitmapDimension),
NUL(NtGdiSetBoundsRect),
#ifdef SYSCALL_WINXP
NUL(NtGdiSetBrushAttributes), // 2
#endif
NUL(NtGdiSetBrushOrg),
NUL(NtGdiSetColorAdjustment),
NUL(NtGdiSetColorSpace),
NUL(NtGdiSetDeviceGammaRamp),
IMP(NtGdiSetDIBitsToDeviceInternal, 16),
IMP(NtGdiSetFontEnumeration, 1),
NUL(NtGdiSetFontXform),
IMP(NtGdiSetIcmMode, 3),
NUL(NtGdiSetLinkedUFIs),
NUL(NtGdiSetMagicColors),
NUL(NtGdiSetMetaRgn),
NUL(NtGdiSetMiterLimit),
NUL(NtGdiGetDeviceWidth),
NUL(NtGdiMirrorWindowOrg),
NUL(NtGdiSetLayout),
IMP(NtGdiSetPixel, 4),
NUL(NtGdiSetPixelFormat),
NUL(NtGdiSetRectRgn),
NUL(NtGdiSetSystemPaletteUse),
NUL(NtGdiSetTextJustification),
NUL(NtGdiSetupPublicCFONT),
NUL(NtGdiSetVirtualResolution),
NUL(NtGdiSetSizeDevice),
NUL(NtGdiStartDoc),
NUL(NtGdiStartPage),
NUL(NtGdiStretchBlt),
NUL(NtGdiStretchDIBitsInternal),
NUL(NtGdiStrokeAndFillPath),
NUL(NtGdiStrokePath),
NUL(NtGdiSwapBuffers),
NUL(NtGdiTransformPoints),
NUL(NtGdiTransparentBlt),
NUL(NtGdiUnloadPrinterDriver),
NUL(NtGdiUnmapMemFont),
NUL(NtGdiUnrealizeObject),
NUL(NtGdiUpdateColors),
NUL(NtGdiWidenPath),
NUL(NtUserActivateKeyboardLayout),
NUL(NtUserAlterWindowStyle),
NUL(NtUserAssociateInputContext),
NUL(NtUserAttachThreadInput),
NUL(NtUserBeginPaint),
NUL(NtUserBitBltSysBmp),
NUL(NtUserBlockInput),
NUL(NtUserBuildHimcList),
NUL(NtUserBuildHwndList),
NUL(NtUserBuildNameList),
NUL(NtUserBuildPropList),
NUL(NtUserCallHwnd),
NUL(NtUserCallHwndLock),
NUL(NtUserCallHwndOpt),
NUL(NtUserCallHwndParam),
NUL(NtUserCallHwndParamLock),
NUL(NtUserCallMsgFilter),
NUL(NtUserCallNextHookEx),
IMP(NtUserCallNoParam, 1),
IMP(NtUserCallOneParam, 2),
IMP(NtUserCallTwoParam, 3),
NUL(NtUserChangeClipboardChain),
NUL(NtUserChangeDisplaySettings),
NUL(NtUserCheckImeHotKey),
NUL(NtUserCheckMenuItem),
NUL(NtUserChildWindowFromPointEx),
NUL(NtUserClipCursor),
NUL(NtUserCloseClipboard),
NUL(NtUserCloseDesktop),
NUL(NtUserCloseWindowStation),
IMP(NtUserConsoleControl, 3),
NUL(NtUserConvertMemHandle),
NUL(NtUserCopyAcceleratorTable),
NUL(NtUserCountClipboardFormats),
NUL(NtUserCreateAcceleratorTable),
NUL(NtUserCreateCaret),
IMP(NtUserCreateDesktop, 5),
NUL(NtUserCreateInputContext),
NUL(NtUserCreateLocalMemHandle),
IMP(NtUserCreateWindowEx, 13),
IMP(NtUserCreateWindowStation, 6),
NUL(NtUserDdeGetQualityOfService),
NUL(NtUserDdeInitialize),
NUL(NtUserDdeSetQualityOfService),
NUL(NtUserDeferWindowPos),
NUL(NtUserDefSetText),
NUL(NtUserDeleteMenu),
NUL(NtUserDestroyAcceleratorTable),
NUL(NtUserDestroyCursor),
NUL(NtUserDestroyInputContext),
NUL(NtUserDestroyMenu),
NUL(NtUserDestroyWindow),
NUL(NtUserDisableThreadIme),
NUL(NtUserDispatchMessage),
NUL(NtUserDragDetect),
NUL(NtUserDragObject),
NUL(NtUserDrawAnimatedRects),
NUL(NtUserDrawCaption),
NUL(NtUserDrawCaptionTemp),
NUL(NtUserDrawIconEx),
NUL(NtUserDrawMenuBarTemp),
NUL(NtUserEmptyClipboard),
NUL(NtUserEnableMenuItem),
NUL(NtUserEnableScrollBar),
NUL(NtUserEndDeferWindowPosEx),
NUL(NtUserEndMenu),
NUL(NtUserEndPaint),
NUL(NtUserEnumDisplayDevices),
NUL(NtUserEnumDisplayMonitors),
NUL(NtUserEnumDisplaySettings),
NUL(NtUserEvent),
NUL(NtUserExcludeUpdateRgn),
NUL(NtUserFillWindow),
IMP(NtUserFindExistingCursorIcon, 3),
NUL(NtUserFindWindowEx),
NUL(NtUserFlashWindowEx),
NUL(NtUserGetAltTabInfo),
NUL(NtUserGetAncestor),
NUL(NtUserGetAppImeLevel),
NUL(NtUserGetAsyncKeyState),
#ifdef SYSCALL_WINXP
NUL(NtUserGetAtomName), // 2
#endif
IMP(NtUserGetCaretBlinkTime, 0),
NUL(NtUserGetCaretPos),
IMP(NtUserGetClassInfo, 5),
NUL(NtUserGetClassName),
NUL(NtUserGetClipboardData),
NUL(NtUserGetClipboardFormatName),
NUL(NtUserGetClipboardOwner),
NUL(NtUserGetClipboardSequenceNumber),
NUL(NtUserGetClipboardViewer),
NUL(NtUserGetClipCursor),
NUL(NtUserGetComboBoxInfo),
NUL(NtUserGetControlBrush),
NUL(NtUserGetControlColor),
NUL(NtUserGetCPD),
NUL(NtUserGetCursorFrameInfo),
NUL(NtUserGetCursorInfo),
IMP(NtUserGetDC, 1),
NUL(NtUserGetDCEx),
NUL(NtUserGetDoubleClickTime),
NUL(NtUserGetForegroundWindow),
NUL(NtUserGetGuiResources),
NUL(NtUserGetGUIThreadInfo),
NUL(NtUserGetIconInfo),
NUL(NtUserGetIconSize),
NUL(NtUserGetImeHotKey),
NUL(NtUserGetImeInfoEx),
NUL(NtUserGetInternalWindowPos),
IMP(NtUserGetKeyboardLayoutList, 2),
NUL(NtUserGetKeyboardLayoutName),
NUL(NtUserGetKeyboardState),
NUL(NtUserGetKeyNameText),
NUL(NtUserGetKeyState),
NUL(NtUserGetListBoxInfo),
NUL(NtUserGetMenuBarInfo),
NUL(NtUserGetMenuIndex),
NUL(NtUserGetMenuItemRect),
IMP(NtUserGetMessage, 4),
NUL(NtUserGetMouseMovePointsEx),
IMP(NtUserGetObjectInformation, 5),
NUL(NtUserGetOpenClipboardWindow),
NUL(NtUserGetPriorityClipboardFormat),
IMP(NtUserGetProcessWindowStation, 0),
#ifdef SYSCALL_WINXP
NUL(NtUserGetRawInputBuffer), // 3
NUL(NtUserGetRawInputData), // 5
NUL(NtUserGetRawInputDeviceInfo), // 4
NUL(NtUserGetRawInputDeviceList), // 3
NUL(NtUserGetRegisteredRawInputDevices), // 3
#endif
NUL(NtUserGetScrollBarInfo),
NUL(NtUserGetSystemMenu),
IMP(NtUserGetThreadDesktop, 2),
IMP(NtUserGetThreadState, 1),
NUL(NtUserGetTitleBarInfo),
NUL(NtUserGetUpdateRect),
NUL(NtUserGetUpdateRgn),
NUL(NtUserGetWindowDC),
NUL(NtUserGetWindowPlacement),
NUL(NtUserGetWOWClass),
NUL(NtUserHardErrorControl),
NUL(NtUserHideCaret),
NUL(NtUserHiliteMenuItem),
NUL(NtUserImpersonateDdeClientWindow),
IMP(NtUserInitialize, 3),
IMP(NtUserInitializeClientPfnArrays, 4),
NUL(NtUserInitTask),
NUL(NtUserInternalGetWindowText),
NUL(NtUserInvalidateRect),
NUL(NtUserInvalidateRgn),
NUL(NtUserIsClipboardFormatAvailable),
NUL(NtUserKillTimer),
IMP(NtUserLoadKeyboardLayoutEx, 6),
NUL(NtUserLockWindowStation),
NUL(NtUserLockWindowUpdate),
NUL(NtUserLockWorkStation),
NUL(NtUserMapVirtualKeyEx),
NUL(NtUserMenuItemFromPoint),
NUL(NtUserMessageCall),
NUL(NtUserMinMaximize),
NUL(NtUserMNDragLeave),
NUL(NtUserMNDragOver),
NUL(NtUserModifyUserStartupInfoFlags),
NUL(NtUserMoveWindow),
NUL(NtUserNotifyIMEStatus),
IMP(NtUserNotifyProcessCreate, 4),
NUL(NtUserNotifyWinEvent),
NUL(NtUserOpenClipboard),
NUL(NtUserOpenDesktop),
NUL(NtUserOpenInputDesktop),
NUL(NtUserOpenWindowStation),
NUL(NtUserPaintDesktop),
NUL(NtUserPeekMessage),
NUL(NtUserPostMessage),
NUL(NtUserPostThreadMessage),
#ifdef SYSCALL_WINXP
NUL(NtUserPrintWindow), // 3
#endif
IMP(NtUserProcessConnect, 3),
NUL(NtUserQueryInformationThread),
NUL(NtUserQueryInputContext),
NUL(NtUserQuerySendMessage),
NUL(NtUserQueryUserCounters),
NUL(NtUserQueryWindow),
NUL(NtUserRealChildWindowFromPoint),
#ifdef SYSCALL_WINXP
NUL(NtUserRealInternalGetMessage), // 6
NUL(NtUserRealWaitMessageEx), // 2
#endif
NUL(NtUserRedrawWindow),
IMP(NtUserRegisterClassExWOW, 6),
#ifdef SYSCALL_WINXP
NUL(NtUserRegisterUserApiHook), // 2
#endif
NUL(NtUserRegisterHotKey),
#ifdef SYSCALL_WINXP
NUL(NtUserRegisterRawInputDevices), // 3
#endif
NUL(NtUserRegisterTasklist),
IMP(NtUserRegisterWindowMessage, 1),
NUL(NtUserRemoveMenu),
NUL(NtUserRemoveProp),
IMP(NtUserResolveDesktop, 4),
NUL(NtUserResolveDesktopForWOW),
NUL(NtUserSBGetParms),
NUL(NtUserScrollDC),
NUL(NtUserScrollWindowEx),
IMP(NtUserSelectPalette, 3),
NUL(NtUserSendInput),
#ifdef SYSCALL_WIN2K
NUL(NtUserSendMessageCallback),
NUL(NtUserSendNotifyMessage),
#endif
NUL(NtUserSetActiveWindow),
NUL(NtUserSetAppImeLevel),
NUL(NtUserSetCapture),
NUL(NtUserSetClassLong),
NUL(NtUserSetClassWord),
NUL(NtUserSetClipboardData),
NUL(NtUserSetClipboardViewer),
NUL(NtUserSetConsoleReserveKeys),
NUL(NtUserSetCursor),
NUL(NtUserSetCursorContents),
IMP(NtUserSetCursorIconData, 4),
NUL(NtUserSetDbgTag),
NUL(NtUserSetFocus),
IMP(NtUserSetImeHotKey, 5),
NUL(NtUserSetImeInfoEx),
NUL(NtUserSetImeOwnerWindow),
NUL(NtUserSetInformationProcess),
IMP(NtUserSetInformationThread, 4),
NUL(NtUserSetInternalWindowPos),
NUL(NtUserSetKeyboardState),
IMP(NtUserSetLogonNotifyWindow, 1),
NUL(NtUserSetMenu),
NUL(NtUserSetMenuContextHelpId),
NUL(NtUserSetMenuDefaultItem),
NUL(NtUserSetMenuFlagRtoL),
NUL(NtUserSetObjectInformation),
NUL(NtUserSetParent),
IMP(NtUserSetProcessWindowStation, 1),
NUL(NtUserSetProp),
NUL(NtUserSetRipFlags),
NUL(NtUserSetScrollInfo),
NUL(NtUserSetShellWindowEx),
NUL(NtUserSetSysColors),
NUL(NtUserSetSystemCursor),
NUL(NtUserSetSystemMenu),
NUL(NtUserSetSystemTimer),
IMP(NtUserSetThreadDesktop, 1),
NUL(NtUserSetThreadLayoutHandles),
NUL(NtUserSetThreadState),
IMP(NtUserSetTimer, 4),
NUL(NtUserSetWindowFNID),
NUL(NtUserSetWindowLong),
NUL(NtUserSetWindowPlacement),
NUL(NtUserSetWindowPos),
NUL(NtUserSetWindowRgn),
NUL(NtUserSetWindowsHookAW),
NUL(NtUserSetWindowsHookEx),
IMP(NtUserSetWindowStationUser, 4),
NUL(NtUserSetWindowWord),
NUL(NtUserSetWinEventHook),
NUL(NtUserShowCaret),
NUL(NtUserShowScrollBar),
IMP(NtUserShowWindow, 2),
NUL(NtUserShowWindowAsync),
NUL(NtUserSoundSentry),
NUL(NtUserSwitchDesktop),
IMP(NtUserSystemParametersInfo, 4),
NUL(NtUserTestForInteractiveUser),
NUL(NtUserThunkedMenuInfo),
NUL(NtUserThunkedMenuItemInfo),
NUL(NtUserToUnicodeEx),
NUL(NtUserTrackMouseEvent),
NUL(NtUserTrackPopupMenuEx),
#ifdef SYSCALL_WINXP
NUL(NtUserCalcMenuBar), // 5
NUL(NtUserPaintMenuBar), // 6
#endif
NUL(NtUserTranslateAccelerator),
NUL(NtUserTranslateMessage),
NUL(NtUserUnhookWindowsHookEx),
NUL(NtUserUnhookWinEvent),
NUL(NtUserUnloadKeyboardLayout),
NUL(NtUserUnlockWindowStation),
NUL(NtUserUnregisterClass),
#ifdef SYSCALL_WINXP
NUL(NtUserUnregisterUserApiHook), // 0
#endif
NUL(NtUserUnregisterHotKey),
NUL(NtUserUpdateInputContext),
NUL(NtUserUpdateInstance),
NUL(NtUserUpdateLayeredWindow),
#ifdef SYSCALL_WINXP
NUL(NtUserGetLayeredWindowAttributes), // 4
#endif
NUL(NtUserSetLayeredWindowAttributes),
IMP(NtUserUpdatePerUserSystemParameters, 2),
NUL(NtUserUserHandleGrantAccess),
NUL(NtUserValidateHandleSecure),
NUL(NtUserValidateRect),
#ifdef SYSCALL_WINXP
NUL(NtUserValidateTimerCallback), // 3
#endif
NUL(NtUserVkKeyScanEx),
NUL(NtUserWaitForInputIdle),
NUL(NtUserWaitForMsgAndEvent),
NUL(NtUserWaitMessage),
NUL(NtUserWin32PoolAllocationStats),
NUL(NtUserWindowFromPoint),
NUL(NtUserYieldTask),
NUL(NtUserRemoteConnect),
NUL(NtUserRemoteRedrawRectangle),
NUL(NtUserRemoteRedrawScreen),
NUL(NtUserRemoteStopScreenUpdates),
NUL(NtUserCtxDisplayIOCtl),
NUL(NtGdiEngAssociateSurface),
NUL(NtGdiEngCreateBitmap),
NUL(NtGdiEngCreateDeviceSurface),
NUL(NtGdiEngCreateDeviceBitmap),
NUL(NtGdiEngCreatePalette),
NUL(NtGdiEngComputeGlyphSet),
NUL(NtGdiEngCopyBits),
NUL(NtGdiEngDeletePalette),
NUL(NtGdiEngDeleteSurface),
NUL(NtGdiEngEraseSurface),
NUL(NtGdiEngUnlockSurface),
NUL(NtGdiEngLockSurface),
NUL(NtGdiEngBitBlt),
NUL(NtGdiEngStretchBlt),
NUL(NtGdiEngPlgBlt),
NUL(NtGdiEngMarkBandingSurface),
NUL(NtGdiEngStrokePath),
NUL(NtGdiEngFillPath),
NUL(NtGdiEngStrokeAndFillPath),
NUL(NtGdiEngPaint),
NUL(NtGdiEngLineTo),
NUL(NtGdiEngAlphaBlend),
NUL(NtGdiEngGradientFill),
NUL(NtGdiEngTransparentBlt),
NUL(NtGdiEngTextOut),
NUL(NtGdiEngStretchBltROP),
NUL(NtGdiXLATEOBJ_cGetPalette),
NUL(NtGdiXLATEOBJ_iXlate),
NUL(NtGdiXLATEOBJ_hGetColorTransform),
NUL(NtGdiCLIPOBJ_bEnum),
NUL(NtGdiCLIPOBJ_cEnumStart),
NUL(NtGdiCLIPOBJ_ppoGetPath),
NUL(NtGdiEngDeletePath),
NUL(NtGdiEngCreateClip),
NUL(NtGdiEngDeleteClip),
NUL(NtGdiBRUSHOBJ_ulGetBrushColor),
NUL(NtGdiBRUSHOBJ_pvAllocRbrush),
NUL(NtGdiBRUSHOBJ_pvGetRbrush),
NUL(NtGdiBRUSHOBJ_hGetColorTransform),
NUL(NtGdiXFORMOBJ_bApplyXform),
NUL(NtGdiXFORMOBJ_iGetXform),
NUL(NtGdiFONTOBJ_vGetInfo),
NUL(NtGdiFONTOBJ_pxoGetXform),
NUL(NtGdiFONTOBJ_cGetGlyphs),
NUL(NtGdiFONTOBJ_pifi),
NUL(NtGdiFONTOBJ_pfdg),
NUL(NtGdiFONTOBJ_pQueryGlyphAttrs),
NUL(NtGdiFONTOBJ_pvTrueTypeFontFile),
NUL(NtGdiFONTOBJ_cGetAllGlyphHandles),
NUL(NtGdiSTROBJ_bEnum),
NUL(NtGdiSTROBJ_bEnumPositionsOnly),
NUL(NtGdiSTROBJ_bGetAdvanceWidths),
NUL(NtGdiSTROBJ_vEnumStart),
NUL(NtGdiSTROBJ_dwGetCodePage),
NUL(NtGdiPATHOBJ_vGetBounds),
NUL(NtGdiPATHOBJ_bEnum),
NUL(NtGdiPATHOBJ_vEnumStart),
NUL(NtGdiPATHOBJ_vEnumStartClipLines),
NUL(NtGdiPATHOBJ_bEnumClipLines),
NUL(NtGdiGetDhpdev),
NUL(NtGdiEngCheckAbort),
NUL(NtGdiHT_Get8BPPFormatPalette),
NUL(NtGdiHT_Get8BPPMaskPalette),
NUL(NtGdiUpdateTransform),
#ifdef SYSCALL_WINXP
NUL(NtGdiSetPUMPDOBJ), // 4
NUL(NtGdiBRUSHOBJ_DeleteRbrush), // 2
NUL(NtGdiUnmapMemFont), // 1
NUL(NtGdiDrawStream), // 3
#endif

