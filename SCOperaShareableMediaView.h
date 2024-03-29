//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSendPreviewMediaView-Protocol.h"

@class NSArray, NSString, SCAudioStitchPreviewHandler, UIImageView;

@interface SCOperaShareableMediaView : UIView <SCSendPreviewMediaView>
{
    NSArray *_videoLayers;
    SCAudioStitchPreviewHandler *_audioStitchPreviewHandler;
    _Bool _isVideo;
    UIImageView *_maskView;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (void)dealloc;
- (id)initWithShareableMedias:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)pause;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

