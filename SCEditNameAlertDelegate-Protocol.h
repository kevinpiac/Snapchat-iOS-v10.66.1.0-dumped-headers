//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, NSString, SCEditNameAlert;

@protocol SCEditNameAlertDelegate <NSObject>
- (void)editNameAlert:(SCEditNameAlert *)arg1 didSetDisplay:(NSString *)arg2 friend:(Friend *)arg3 shouldScroll:(_Bool)arg4;

@optional
- (_Bool)shouldHandleSetEmptyName:(Friend *)arg1;
@end
