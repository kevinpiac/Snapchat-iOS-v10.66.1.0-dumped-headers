//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface LSDCryptoCodingHeader : NSObject
{
    unsigned int _recordSize;
    NSData *_salt;
    NSString *_keyID;
}

- (void).cxx_destruct;
- (id)initWithSalt:(id)arg1 recordSize:(unsigned int)arg2 keyID:(id)arg3;
@property(readonly, nonatomic) NSString *keyID; // @synthesize keyID=_keyID;
@property(readonly, nonatomic) unsigned int recordSize; // @synthesize recordSize=_recordSize;
@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;

@end

