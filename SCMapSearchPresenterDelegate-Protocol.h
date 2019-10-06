//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapPerson;
@protocol SCMapSearchPresenter;

@protocol SCMapSearchPresenterDelegate <NSObject>
- (void)mapSearchPresenter:(id <SCMapSearchPresenter>)arg1 wantsChatForUsername:(NSString *)arg2;
- (void)mapSearchPresenter:(id <SCMapSearchPresenter>)arg1 wantsLocationForUserId:(NSString *)arg2;
- (void)mapSearchPresenter:(id <SCMapSearchPresenter>)arg1 wantsProfileForPerson:(SCMapPerson *)arg2;
- (void)mapSearchPresenter:(id <SCMapSearchPresenter>)arg1 wantsToGoToCoordinate:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(double)arg3 coordinateBounds:(struct SCMapCoordinateBounds)arg4 useCoordinateBounds:(_Bool)arg5 withTitle:(NSString *)arg6 dropPin:(_Bool)arg7 poiId:(NSString *)arg8;

@optional
- (void)mapSearchPresenter:(id <SCMapSearchPresenter>)arg1 willCloseWithQueryText:(NSString *)arg2;
@end
