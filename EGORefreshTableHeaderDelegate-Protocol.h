//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EGORefreshTableHeaderView, NSDate;

@protocol EGORefreshTableHeaderDelegate <NSObject>
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(EGORefreshTableHeaderView *)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(EGORefreshTableHeaderView *)arg1;

@optional
- (NSDate *)egoRefreshTableHeaderDataSourceLastUpdated:(EGORefreshTableHeaderView *)arg1;
@end

