//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface BTPaymentMethodNonceParser : NSObject
{
    NSMutableDictionary *_JSONParsingBlocks;
}

+ (id)sharedParser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *JSONParsingBlocks; // @synthesize JSONParsingBlocks=_JSONParsingBlocks;
@property(readonly, nonatomic) NSArray *allTypes;
- (_Bool)isTypeAvailable:(id)arg1;
- (id)parseJSON:(id)arg1 withParsingBlockForType:(id)arg2;
- (void)registerType:(id)arg1 withParsingBlock:(CDUnknownBlockType)arg2;

@end

