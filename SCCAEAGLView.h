//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer;

@interface SCCAEAGLView : UIView
{
    unsigned long long _videoPlaybackQuality;
}

+ (Class)layerClass;
@property(readonly, nonatomic) CAEAGLLayer *glLayer;
- (void)renderInContext:(struct CGContext *)arg1;
@property(nonatomic) unsigned long long videoPlaybackQuality; // @synthesize videoPlaybackQuality=_videoPlaybackQuality;

@end

