//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSNumber;

@protocol SCSuggestedSnapchatterSyncRepository
- (void)setLastFindFriendsFullSyncTimestamp:(NSDate *)arg1;
- (void)setShouldShowQuickAddUnit:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSDate *suggestedSnapchatterLastSyncTimestamp;
@property(readonly, copy, nonatomic) NSNumber *suggestedSnapchatterSyncVersion;
- (void)updateWithRegistrationSuggestionPagePosition:(long long)arg1;
@end

