//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAccessOrderedDictionary.h"

#import "NSCoding-Protocol.h"

@protocol SCFideliusDeviceGraphDictionaryDelegate;

@interface SCFideliusDeviceGraphDictionary : SCAccessOrderedDictionary <NSCoding>
{
    id <SCFideliusDeviceGraphDictionaryDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCFideliusDeviceGraphDictionaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxSize:(long long)arg1;
- (void)onAdd:(_Bool)arg1 countBefore:(unsigned long long)arg2;
- (void)onOrderUpdated;
- (void)onPurge:(id)arg1;

@end

