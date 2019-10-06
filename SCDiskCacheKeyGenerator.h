//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCacheKeyGenerator-Protocol.h"

@class NSCharacterSet, NSString;

@interface SCDiskCacheKeyGenerator : NSObject <SCCacheKeyGenerator>
{
    unsigned long long _maxKeyLength;
    NSCharacterSet *_characterSetForPercentEncoding;
}

- (void).cxx_destruct;
- (id)_encodedString:(id)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1 charactersForPercentEncoding:(id)arg2;
- (id)key:(id)arg1;
- (_Bool)keyNeedsClipping:(id)arg1;
- (id)keySet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

