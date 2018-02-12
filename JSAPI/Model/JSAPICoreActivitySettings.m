#import "JSAPICoreActivitySettings.h"

@implementation JSAPICoreActivitySettings

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"bootInPlay": @"boot_in_play", @"customLaunchAddressAllowed": @"custom_launch_address_allowed", @"hostOption": @"host_option", @"hostStatusControl": @"host_status_control", @"joinInPlay": @"join_in_play", @"leaveInPlay": @"leave_in_play", @"maxPlayers": @"max_players", @"minPlayers": @"min_players", @"resultsTrust": @"results_trust" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"bootInPlay", @"customLaunchAddressAllowed", @"hostOption", @"hostStatusControl", @"joinInPlay", @"leaveInPlay", @"maxPlayers", @"minPlayers", @"resultsTrust"];

  return [optionalProperties containsObject:propertyName];
}

@end
