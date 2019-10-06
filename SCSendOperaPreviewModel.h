//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"

@class NSArray, NSString;

@interface SCSendOperaPreviewModel : NSObject <SCSendPreviewViewModel>
{
    NSArray *_shareableMedias;
    long long _viewLocation;
    _Bool _isSpectacles;
}

- (void).cxx_destruct;
- (id)initWithOperaShareableMedias:(id)arg1 viewLocation:(long long)arg2;
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

