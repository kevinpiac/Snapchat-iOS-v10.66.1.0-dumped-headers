//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaImpalaMainContext-Protocol.h"

@class NSString;
@protocol SCCLensActionHandling, SCCStoryPlayerPlaying, SCCStoryPlayerStorySnapViewStateProviding, SCComposerFoundationApplicationProtocol, SCComposerFoundationTempFileProviding, SCComposerMediaImageFactoryProtocol, SCComposerMediaLibrary, SCComposerNetworkingBoltUploading, SCImpalaMainActionHandling, SCImpalaUrlActionHandling;

@interface SCImpalaMainContext : NSObject <SCImpalaImpalaMainContext>
{
    id <SCComposerFoundationApplicationProtocol> _application;
    id <SCImpalaMainActionHandling> _actionHandler;
    id <SCCStoryPlayerPlaying> _storyPlayer;
    id <SCCStoryPlayerStorySnapViewStateProviding> _snapViewStateProvider;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCImpalaUrlActionHandling> _urlActionHandler;
    id <SCComposerMediaLibrary> _cameraRollLibrary;
    id <SCComposerMediaImageFactoryProtocol> _imageFactory;
    id <SCComposerNetworkingBoltUploading> _boltUploader;
    id <SCComposerFoundationTempFileProviding> _tempFileProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCImpalaMainActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) id <SCComposerNetworkingBoltUploading> boltUploader; // @synthesize boltUploader=_boltUploader;
@property(retain, nonatomic) id <SCComposerMediaLibrary> cameraRollLibrary; // @synthesize cameraRollLibrary=_cameraRollLibrary;
@property(retain, nonatomic) id <SCComposerMediaImageFactoryProtocol> imageFactory; // @synthesize imageFactory=_imageFactory;
- (id)initWithApplication:(id)arg1 actionHandler:(id)arg2 storyPlayer:(id)arg3 snapViewStateProvider:(id)arg4 lensActionHandler:(id)arg5 urlActionHandler:(id)arg6 cameraRollLibrary:(id)arg7 imageFactory:(id)arg8 boltUploader:(id)arg9 tempFileProvider:(id)arg10;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(retain, nonatomic) id <SCCStoryPlayerStorySnapViewStateProviding> snapViewStateProvider; // @synthesize snapViewStateProvider=_snapViewStateProvider;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> storyPlayer; // @synthesize storyPlayer=_storyPlayer;
@property(retain, nonatomic) id <SCComposerFoundationTempFileProviding> tempFileProvider; // @synthesize tempFileProvider=_tempFileProvider;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler; // @synthesize urlActionHandler=_urlActionHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

