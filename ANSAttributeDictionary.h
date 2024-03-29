//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ANSAttributeDictionary : NSObject
{
    NSMutableDictionary *_rawDictionary;
}

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 forKey:(id)arg2;
- (void)addBooleanAttribute:(id)arg1 forKey:(id)arg2;
- (void)addPriceAttribute:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
- (id)serializeAttributeValue:(id)arg1;
- (id)serializeNumber:(id)arg1;
- (id)serializePriceToMicros:(id)arg1;
- (id)serializeSuccess:(id)arg1;
- (id)truncateString:(id)arg1;
- (_Bool)validAttributeValue:(id)arg1;

@end

