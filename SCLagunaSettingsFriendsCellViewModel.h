//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSnapchatter;

@interface SCLagunaSettingsFriendsCellViewModel : NSObject
{
    SCSnapchatter *_snapchatter;
    NSString *_displayName;
    NSString *_username;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithSnapchatter:(id)arg1;
@property(readonly, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end
