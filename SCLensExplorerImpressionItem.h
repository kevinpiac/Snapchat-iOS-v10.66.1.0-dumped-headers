//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensExplorerImpressionItemValue.h"

#import "SCImpressionItem-Protocol.h"
#import "SCLensExplorerHistoryItemProtocol-Protocol.h"

@class NSString;
@protocol NSObject><NSCopying;

@interface SCLensExplorerImpressionItem : SCLensExplorerImpressionItemValue <SCImpressionItem, SCLensExplorerHistoryItemProtocol>
{
}

- (id)_handleTapOnLensChallengesSnapItem;
- (id)_handleTapOnLensExplorerLensItem;
- (id)_lastRecentDate:(id)arg1 date2:(id)arg2;
- (id)_lensChallengeSnapItemDictionaryRepresentation;
- (id)_lensItemDictionaryRepresentation;
- (id)buildImpressionWithImpressionInfo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)handleTap;
@property(readonly, nonatomic) id <NSObject><NSCopying> identifier;
- (id)initWithChallengeSectionItem:(id)arg1;
- (id)interactionFeaturesRepresentation;
- (id)setLastUpdateDate:(id)arg1;
- (id)updatedWithHistoryItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
