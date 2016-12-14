#import "SWGUser.h"

@implementation SWGUser

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"address": @"address", @"address2": @"address2", @"affiliate": @"affiliate", @"avatarUrl": @"avatar_url", @"city": @"city", @"country": @"country", @"currency": @"currency", @"dateCreated": @"date_created", @"dateOfBirth": @"date_of_birth", @"dateUpdated": @"date_updated", @"_description": @"description", @"displayName": @"display_name", @"email": @"email", @"firstName": @"first_name", @"fullname": @"fullname", @"gender": @"gender", @"guest": @"guest", @"_id": @"id", @"inviteToken": @"invite_token", @"lang": @"lang", @"lastActivity": @"last_activity", @"lastLogin": @"last_login", @"lastName": @"last_name", @"lockoutAttempts": @"lockout_attempts", @"lockoutDate": @"lockout_date", @"mobileNumber": @"mobile_number", @"oldId": @"old_id", @"password": @"password", @"postalCode": @"postal_code", @"propertiesString": @"properties_string", @"roles": @"roles", @"state": @"state", @"status": @"status", @"template": @"template", @"timezone": @"timezone", @"token": @"token", @"typeHint": @"type_hint", @"username": @"username" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"address", @"address2", @"affiliate", @"avatarUrl", @"city", @"country", @"currency", @"dateCreated", @"dateOfBirth", @"dateUpdated", @"_description", @"displayName", @"email", @"firstName", @"fullname", @"gender", @"guest", @"_id", @"inviteToken", @"lang", @"lastActivity", @"lastLogin", @"lastName", @"lockoutAttempts", @"lockoutDate", @"mobileNumber", @"oldId", @"password", @"postalCode", @"propertiesString", @"roles", @"state", @"status", @"template", @"timezone", @"token", @"typeHint", @"username"];
  return [optionalProperties containsObject:propertyName];
}

@end
