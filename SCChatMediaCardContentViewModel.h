//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatAddressMediaCardViewModel, SCChatPhoneMediaCardViewModel, SCChatURLMediaCardViewModel;

@interface SCChatMediaCardContentViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatPhoneMediaCardViewModel *_phoneNumber_phoneMediaCardViewModel;
    SCChatAddressMediaCardViewModel *_address_addressMediaCardViewModel;
    SCChatURLMediaCardViewModel *_uRL_urlMediaCardViewModel;
}

+ (id)addressWithAddressMediaCardViewModel:(id)arg1;
+ (id)phoneNumberWithPhoneMediaCardViewModel:(id)arg1;
+ (id)uRLWithUrlMediaCardViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchPhoneNumber:(CDUnknownBlockType)arg1 address:(CDUnknownBlockType)arg2 uRL:(CDUnknownBlockType)arg3;

@end
