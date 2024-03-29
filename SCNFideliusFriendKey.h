//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SCNFideliusFriendKey : NSObject
{
    int _version;
    NSString *_userId;
    NSData *_publicKey;
    NSData *_sharedSecret;
}

+ (id)FriendKeyWithUserId:(id)arg1 publicKey:(id)arg2 sharedSecret:(id)arg3 version:(int)arg4;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserId:(id)arg1 publicKey:(id)arg2 sharedSecret:(id)arg3 version:(int)arg4;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int version; // @synthesize version=_version;

@end

