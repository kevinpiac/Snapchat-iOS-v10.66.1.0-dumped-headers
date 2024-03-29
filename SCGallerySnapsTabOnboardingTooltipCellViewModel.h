//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString;

@interface SCGallerySnapsTabOnboardingTooltipCellViewModel : NSObject <IGListDiffable, NSCopying>
{
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    NSString *_leftIconImageAsset;
    NSString *_rightIconImageAsset;
    NSString *_rightIconAccessibilityIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 leftIconImageAsset:(id)arg3 rightIconImageAsset:(id)arg4 rightIconAccessibilityIdentifier:(id)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *leftIconImageAsset; // @synthesize leftIconImageAsset=_leftIconImageAsset;
@property(readonly, copy, nonatomic) NSString *rightIconAccessibilityIdentifier; // @synthesize rightIconAccessibilityIdentifier=_rightIconAccessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *rightIconImageAsset; // @synthesize rightIconImageAsset=_rightIconImageAsset;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end

