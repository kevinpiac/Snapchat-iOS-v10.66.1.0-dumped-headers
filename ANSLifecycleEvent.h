//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ANSEvent.h"

@class NSString;

@interface ANSLifecycleEvent : ANSEvent
{
    NSString *_name;
}

+ (id)appLaunchedEvent;
+ (id)eventWithNotification:(id)arg1;
+ (id)installEvent;
+ (id)nameFromNotification:(id)arg1;
+ (id)notificationNameMap;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1;
- (id)initWithNotification:(id)arg1;
- (id)name;
- (_Bool)triggersFlush;

@end

