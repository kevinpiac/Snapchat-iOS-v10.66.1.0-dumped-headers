//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPillViewLabelFormatConfiguration-Protocol.h"

@class NSString;

@interface SCStickerPillViewLabelFormatDefaultConfiguration : NSObject <SCStickerPillViewLabelFormatConfiguration>
{
}

- (id)fontName;
@property(readonly, nonatomic) long long fontSizeAdjustmentCharacterLimit;
@property(readonly, nonatomic) long long lineCharacterLimit;
@property(readonly, copy, nonatomic) NSString *lineJoiningString;
@property(readonly, nonatomic) long long truncationCharacterLimit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

