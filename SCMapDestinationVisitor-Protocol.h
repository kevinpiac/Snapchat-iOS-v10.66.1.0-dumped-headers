//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapCoordinateDestination, SCMapDefaultViewportDestination, SCMapExploreDestination, SCMapFriendDestination, SCMapGroupDestination, SCMapPoiDestination;

@protocol SCMapDestinationVisitor <NSObject>
- (void)travelToCoordinate:(SCMapCoordinateDestination *)arg1;
- (void)travelToDefaultViewport:(SCMapDefaultViewportDestination *)arg1;
- (void)travelToExploreStatus:(SCMapExploreDestination *)arg1;
- (void)travelToFriend:(SCMapFriendDestination *)arg1;
- (void)travelToGroup:(SCMapGroupDestination *)arg1;
- (void)travelToPoi:(SCMapPoiDestination *)arg1;
@end
