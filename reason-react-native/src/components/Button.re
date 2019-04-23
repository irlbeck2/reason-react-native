type element;
type ref = React.Ref.t(Js.nullable(element));

[@react.component] [@bs.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // Button props
    ~accessibilityLabel: string=?,
    ~color: Style.color=?,
    ~disabled: bool=?,
    ~hasTVPreferredFocus: bool=?,
    ~onPress: unit => unit,
    ~testID: string=?,
    ~title: string
  ) =>
  React.element =
  "Button";