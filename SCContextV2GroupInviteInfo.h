//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCContextV2GroupInviteInfo : NSObject
{
    NSString *_groupId;
    NSString *_token;
}

+ (id)fromURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithGroupId:(id)arg1 token:(id)arg2;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;

@end

