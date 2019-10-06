//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCPhoneNumberUtils : NSObject
{
}

+ (_Bool)deprecatedClientIsValidNumber:(id)arg1 withCountryCode:(id)arg2;
+ (id)extractRegion:(id)arg1 nationalNumber:(id *)arg2;
+ (id)formatPhoneNumber:(id)arg1;
+ (id)formatPhoneNumber:(id)arg1 withCountryCode:(id)arg2;
+ (id)formatPhoneNumberShouldShowForeignCountryCode:(_Bool)arg1 withPhoneNumber:(id)arg2 withCountryCode:(id)arg3;
+ (unsigned int)getCountryCodeForRegion:(id)arg1;
+ (id)getCurrentOrUSDefaultCountryCode;
+ (id)getFormattedCountryCodeForRegion:(id)arg1;
+ (id)getPhoneCountryCodes;
+ (_Bool)isValidClientPhoneNumberFormat:(id)arg1;
+ (_Bool)shouldShowPhoneVerificationFlow:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2;
+ (id)stripDigitsFromPhoneNumber:(id)arg1;

@end

