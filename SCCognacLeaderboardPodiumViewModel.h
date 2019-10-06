//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCognacLeaderboardPodiumEntryViewModel, SCNetworkImage;

@interface SCCognacLeaderboardPodiumViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_podium;
    SCCognacLeaderboardPodiumEntryViewModel *_firstEntryViewModel;
    SCCognacLeaderboardPodiumEntryViewModel *_secondEntryViewModel;
    SCCognacLeaderboardPodiumEntryViewModel *_thirdEntryViewModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *firstEntryViewModel; // @synthesize firstEntryViewModel=_firstEntryViewModel;
- (unsigned long long)hash;
- (id)initWithPodium:(id)arg1 firstEntryViewModel:(id)arg2 secondEntryViewModel:(id)arg3 thirdEntryViewModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *podium; // @synthesize podium=_podium;
@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *secondEntryViewModel; // @synthesize secondEntryViewModel=_secondEntryViewModel;
@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *thirdEntryViewModel; // @synthesize thirdEntryViewModel=_thirdEntryViewModel;

@end

