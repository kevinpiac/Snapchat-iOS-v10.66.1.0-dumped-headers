//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"

@class NSString, UIImage;

@interface SCSendImagePreviewModel : NSObject <SCSendPreviewViewModel>
{
    UIImage *_image;
    long long _shareType;
}

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 shareType:(long long)arg2;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)shareType;
- (long long)viewStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

